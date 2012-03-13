CREATE OR REPLACE FUNCTION st_dumppoints_plpgsql(geometry)
  RETURNS SETOF geometry_dump AS
$BODY$DECLARE
 m integer;
 g geometry;
 n integer;
 p geometry_dump%ROWTYPE;
BEGIN
  CASE GeometryType($1)
    WHEN 'MULTIPOLYGON' THEN
    FOR m IN SELECT generate_series(1, ST_NumGeometries($1)) LOOP
      p.path[1] := m; -- use to store Multipolygon number
      g := ST_Boundary(ST_GeometryN($1, m));
      FOR n IN SELECT generate_series(1, ST_NumPoints(g)) LOOP
        p.path[2] := n; -- use to store Point number
        p.geom := ST_PointN(g, n);
        RETURN NEXT p;
      END LOOP;
    END LOOP;
    WHEN 'POLYGON' THEN
    g := ST_Boundary($1);
    FOR n IN SELECT generate_series(1, ST_NumPoints(g)) LOOP
      p.path[1] := n; -- use to store Point number
      p.geom := ST_PointN(g, n);
      RETURN NEXT p;
    END LOOP;
    WHEN 'LINESTRING' THEN
      FOR n IN SELECT generate_series(1, ST_NumPoints($1)) LOOP
        p.path[1] := n; -- use to store Point number
        p.geom := ST_PointN($1, n);
        RETURN NEXT p;
      END LOOP;
    ELSE
      p.path[1] := 1;
      p.geom := $1;
  END CASE;
  RETURN;
END;$BODY$
  LANGUAGE 'plpgsql' IMMUTABLE STRICT
  COST 100
  ROWS 1000;


CREATE OR REPLACE FUNCTION st_dumppoints(geometry)
  RETURNS SETOF geometry_dump AS
'SELECT * FROM ST_DumpPoints_plpgsql($1);'
  LANGUAGE 'sql' IMMUTABLE STRICT
  COST 100
  ROWS 1000; 