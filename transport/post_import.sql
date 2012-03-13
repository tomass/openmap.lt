-- increase polygons for better looking maps
-- UPDATE planet_osm_polygon SET way = st_buffer(way, 10) WHERE type = 'stops';

-- create index for better performance
CREATE INDEX idx_planet_osm_point_type ON planet_osm_point (type);
CREATE INDEX idx_planet_osm_line_type ON planet_osm_line (type);
CREATE INDEX idx_planet_osm_polygon_type ON planet_osm_polygon (type);

