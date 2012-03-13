TRUNCATE TABLE way_nodes;

-- set additional fields
UPDATE relations SET route = tags->'route', ref = tags->'ref';
-- some error fix
UPDATE relations SET route = 'train' WHERE route IN('railway', 'rail');
UPDATE relations SET ref = tags->'name' WHERE ref IS NULL AND defined(tags, 'name');
ANALYZE relations;

SELECT process_ways();
ANALYZE ways;
-- merge similar connected ways
SELECT * FROM merge_ways();
ANALYZE ways;

SELECT * FROM process_nodes();
ANALYZE nodes;

SELECT * FROM group_stops();
ANALYZE ways;

TRUNCATE TABLE relations;
TRUNCATE TABLE relation_members;

