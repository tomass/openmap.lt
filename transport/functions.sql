DROP FUNCTION IF EXISTS subarray_big(bigint[], int);
CREATE FUNCTION subarray_big(arr bigint[], offs int) RETURNS bigint[] AS $$
DECLARE result bigint[];
BEGIN
	SELECT array_agg(value) INTO result FROM (SELECT * FROM unnest(arr) as value OFFSET offs) t;
	IF result IS NULL THEN
		result := '{}';
	END IF;
	RETURN result;
END;
$$ LANGUAGE plpgsql
IMMUTABLE;

DROP FUNCTION IF EXISTS merge_ways() CASCADE;
DROP TYPE IF EXISTS pass_result;
CREATE TYPE pass_result AS (pass int, count int);
CREATE FUNCTION merge_ways() RETURNS SETOF pass_result AS $$
DECLARE n int;
DECLARE pass int := 0;
DECLARE nds bigint[];
DECLARE candidate RECORD;
DECLARE result pass_result%rowtype;
DECLARE tmp_way ways%rowtype;
BEGIN
	LOOP
		n := 0;
		FOR candidate IN SELECT w.id as w1_id, (SELECT w2.id FROM ways w2 WHERE w2.id != w.id AND w2.start_node = w.end_node AND w2.tags <@ w.tags AND w2.tags @> w.tags LIMIT 1) as w2_id FROM ways w FOR UPDATE LOOP
			CONTINUE WHEN candidate.w2_id IS NULL;
			SELECT subarray_big(nodes,1) INTO nds FROM ways WHERE id = candidate.w2_id;
			CONTINUE WHEN nds IS NULL;
			IF nds IS NULL THEN
				RAISE EXCEPTION 'nodes is null, way.id=%', candidate.w2_id;
			END IF;
			SELECT * INTO tmp_way FROM ways WHERE id = candidate.w1_id;
			-- if already merged
			CONTINUE WHEN tmp_way.id IS NULL;
			-- exception
			IF tmp_way.id IS NULL THEN
				RAISE EXCEPTION 'way not exists way.id=%, tmp_way.id=%', candidate.w1_id, tmp_way.id;
			END IF;
			DELETE FROM ways WHERE id = candidate.w2_id;
			UPDATE ways SET nodes = nodes || nds, end_node = nds[array_upper(nds, 1)] WHERE id = candidate.w1_id;
			n := n + 1;
		END LOOP;
		pass := pass + 1;
		result.pass = pass;
		result.count = n;
		RETURN NEXT result;
		EXIT WHEN n = 0;
	END LOOP;
	RETURN;
END;
$$ LANGUAGE plpgsql
VOLATILE;


DROP FUNCTION IF EXISTS get_relations_ref(bigint, character(1));
CREATE FUNCTION get_relations_ref(object_id bigint, object_type character(1)) RETURNS HSTORE AS $$
DECLARE h HSTORE;
DECLARE tmp RECORD;
BEGIN
	h := hstore('1', '1');
	FOR tmp IN SELECT route || '_ref' as key, array_to_string(array_agg(ref), ', ') AS val
		FROM (
			SELECT DISTINCT r.route, r.ref, CASE WHEN r.ref < 'A' THEN lpad(rtrim(ref, 'abcdefghijklmnopqrstuvzxwyABCDEFGHIJKLMNOPQRSTUVZXWY'), 100, '0') ELSE r.ref END as ref_natural
			FROM relation_members m
			JOIN relations r ON r.id = m.relation_id
			WHERE m.member_id = object_id AND m.member_type = object_type AND r.ref IS NOT NULL order by r.route, ref_natural
		) t
		GROUP BY route LOOP
		CONTINUE WHEN tmp.val IS NULL;
		h := h || hstore(tmp.key, tmp.val);
	END LOOP;
	h := delete(h, '1');
	RETURN h;
END;
$$ LANGUAGE plpgsql
IMMUTABLE;

DROP FUNCTION IF EXISTS hstore_filter(hstore, text[]);
CREATE FUNCTION hstore_filter(tags hstore, keys text[]) RETURNS hstore AS $$
DECLARE h HSTORE;
DECLARE tmp RECORD;
BEGIN
	h := hstore('1', '1');
	FOR tmp IN SELECT * FROM each(tags) WHERE key = ANY (keys) LOOP
		h := h || hstore(tmp.key, tmp.value);
	END LOOP;
	h := delete(h, '1');
	RETURN h;
END;
$$ LANGUAGE plpgsql
IMMUTABLE;

DROP FUNCTION IF EXISTS process_ways();
CREATE FUNCTION process_ways() RETURNS INT AS $$
DECLARE row RECORD;
DECLARE tg HSTORE;
DECLARE i INT;
BEGIN
	i := 0;
	FOR row IN SELECT * FROM ways FOR UPDATE LOOP
		tg := row.tags;
		tg := hstore_filter(tg, '{"highway", "railway", "layer", "junction"}') || get_relations_ref(row.id, 'W');
		tg := tg || hstore('route', (
			SELECT array_to_string(array_agg(route), ', ')
			FROM (
				SELECT r.route FROM relation_members m
				LEFT JOIN relations r ON r.id = m.relation_id
				WHERE m.member_id = row.id AND r.id IS NOT NULL
				GROUP BY r.route
				ORDER BY r.route
			) tr
		));
		IF defined(tg, 'route') THEN
			tg := tg || hstore('type', 'route');
		ELSE
			tg := delete(tg, 'route');
		END IF;
		-- tg := tg || hstore('area', 'no');
		-- highway
		IF defined(tg, 'highway') THEN
			-- junctions
			IF defined(tg, 'junction') THEN
				tg := delete(tg, 'junction') || hstore('highway', 'j');
			END IF;
			-- links
			IF tg->'highway' LIKE '%_link' THEN
				tg := tg || hstore('highway', 'l');
			END IF;
			-- highway tag
			IF tg->'highway' IN ('l', 'j') THEN
				tg := hstore_filter(tg, '{"type", "highway", "route", "layer", "area"}');
			ELSE
				tg := tg || hstore('highway', 'y');
			END IF;
		END IF;
		IF tg IS NULL THEN
			tg := hstore('line', 'unknown');
		END IF;
		UPDATE ways SET tags = tg, start_node = nodes[1], end_node = nodes[array_upper(nodes,1)] WHERE id = row.id;
		i := i + 1;
	END LOOP;
	RETURN i;
END;
$$ LANGUAGE plpgsql
VOLATILE;

DROP FUNCTION IF EXISTS process_nodes();
CREATE FUNCTION process_nodes() RETURNS INT AS $$
DECLARE row RECORD;
DECLARE tg HSTORE;
DECLARE i INT;
BEGIN
	UPDATE nodes SET name = tags->'name' WHERE defined(tags, 'name');
	i := 0;
	FOR row IN SELECT * FROM nodes WHERE name IS NOT NULL FOR UPDATE LOOP
		tg := hstore_filter(row.tags, '{"name"}') || get_relations_ref(row.id, 'N');
		IF row.tags->'highway' = 'bus_stop' OR row.tags->'railway' IN ('stop', 'station', 'halt', 'tram_stop') OR defined(row.tags, 'public_transport') THEN
			tg := tg || hstore('type', 'stop');
		END IF;
		UPDATE nodes SET tags = tg WHERE id = row.id;
		i := i + 1;
	END LOOP;
	RETURN i;
END;
$$ LANGUAGE plpgsql
VOLATILE;

DROP FUNCTION IF EXISTS cluster_points(node_geom[]);
DROP FUNCTION IF EXISTS group_stops();
DROP TYPE IF EXISTS cluster;
DROP TYPE IF EXISTS node_geom;

CREATE TYPE cluster AS (id int, cnt int, nodes bigint[], points geometry, convex geometry, convex_nodes bigint[], centroid geometry);
CREATE TYPE node_geom AS (id bigint, geom geometry);
CREATE FUNCTION cluster_points(pts node_geom[]) RETURNS SETOF cluster AS $$
DECLARE g geometry;
DECLARE cl cluster;
DECLARE cl_id int;
BEGIN
	IF pts IS NULL OR array_length(pts, 1) < 2 THEN
		RETURN;
	END IF;
	IF array_length(pts, 1) = 2 THEN
		IF NOT st_dwithin(pts[1].geom, pts[2].geom, 0.005) THEN
			RETURN;
		END IF;
		cl.id := 1;
		cl.cnt := 2;
		cl.nodes := ARRAY[pts[1].id, pts[2].id];
		cl.points := st_makeline(pts[1].geom, pts[2].geom);
		cl.convex := st_convexhull(cl.points);
		cl.convex_nodes := cl.nodes;
		cl.centroid := st_centroid(cl.points);
		RETURN NEXT cl;
		RETURN;
	END IF;

	-- create temp table if not exists
	IF NOT EXISTS (SELECT 1 FROM information_schema.tables WHERE table_name='tmp_clusters' AND table_type='LOCAL TEMPORARY') THEN
		CREATE TEMPORARY TABLE tmp_clusters (id serial primary key, cnt int, nodes bigint[], points geometry, convex geometry, convex_nodes bigint[], centroid geometry);
	END IF;

	FOR i IN 1..array_length(pts,1) LOOP
		g := pts[i].geom;
		IF geometrytype(g) != 'POINT' THEN
			RAISE EXCEPTION 'Invalid geom - %', geometry_type(g);
		END IF;
		SELECT id INTO cl_id FROM tmp_clusters WHERE st_dwithin(centroid, g, 0.006) LIMIT 1;
		IF cl_id IS NULL THEN
			-- create cluster from one point
			INSERT INTO tmp_clusters (cnt, nodes, points, centroid) VALUES (1, ARRAY[pts[i].id], g, g);
		ELSE
			-- grow up existing cluster
			UPDATE tmp_clusters SET cnt = cnt + 1, nodes = array_append(nodes, pts[i].id), points = st_union(points, g) WHERE id = cl_id;
			UPDATE tmp_clusters SET centroid = st_centroid(points) WHERE id = cl_id;
		END IF;
	END LOOP;

	FOR cl IN SELECT * FROM tmp_clusters FOR UPDATE LOOP
		CASE cl.cnt
		WHEN 1 THEN
			cl.convex := cl.points;
			cl.convex_nodes := cl.nodes;
		WHEN 2 THEN
			cl.convex := cl.points;
			cl.convex_nodes := cl.nodes;
		ELSE
			cl.convex := st_convexhull(cl.points);
			-- search for all convex nodes ids
			FOR g IN SELECT geom FROM st_dumppoints(cl.convex) LOOP
				FOR i IN 1..array_length(pts,1) LOOP
					IF pts[i].geom = g THEN
						cl.convex_nodes := array_append(cl.convex_nodes, pts[i].id);
						EXIT;
					END IF;
				END LOOP;
			END LOOP;
		END CASE;
		UPDATE tmp_clusters SET convex = cl.convex, convex_nodes = cl.convex_nodes WHERE id = cl.id;
	END LOOP;

	-- return clusters
	RETURN QUERY SELECT * FROM tmp_clusters;
	TRUNCATE TABLE tmp_clusters;
END;
$$ LANGUAGE plpgsql
VOLATILE;

CREATE FUNCTION group_stops() RETURNS int AS $$
DECLARE i int;
DECLARE way_seq bigint;
DECLARE nm text;
DECLARE cl cluster;
BEGIN
	i := 0;
	-- sequence #
	SELECT max(id) INTO way_seq FROM ways;
	FOR nm IN SELECT name FROM nodes WHERE name IS NOT NULL AND tags->'type' = 'stop' GROUP BY name HAVING count(id) > 1 LOOP
		FOR cl IN SELECT * FROM cluster_points(array(SELECT (id, geom)::node_geom FROM nodes WHERE name = nm)) WHERE cnt > 1 LOOP
			way_seq := way_seq + 1;
			INSERT INTO ways (id, version, user_id, tstamp, changeset_id, tags, nodes) VALUES (way_seq, -1, -1, localtimestamp, 0, hstore('name', nm) || hstore('type','stops'), cl.convex_nodes);
			UPDATE nodes SET tags = tags || hstore('type', 'stops') WHERE id = ANY (cl.nodes);
			i := i + 1;
		END LOOP;
	END LOOP;
	RETURN i;
END;
$$ LANGUAGE plpgsql
VOLATILE;
