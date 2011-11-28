<Style name="stops_points">
	<Rule>
		<Filter>not [name] != ''</Filter>
		&maxscale_zoom10;
		&minscale_zoom18;
		<PointSymbolizer allow-overlap="no" file="&symbols;/tilde.png" />
	</Rule>
	<Rule>
		<Filter>[name] != ''</Filter>
		&maxscale_zoom10;
		&minscale_zoom18;
		<PointSymbolizer allow-overlap="no" file="&symbols;/white_point.png" />
	</Rule>
</Style>
<Style name="stop_single">
	<Rule>
		<Filter>[type] = 'stop' and [name] != ''</Filter>
		&maxscale_zoom15;
		&minscale_zoom18;
		<TextSymbolizer allow-overlap="no" face-name="DejaVu Sans Book" size="11" fill="#000" halo-radius="2" halo-fill="#fff" horizontal-alignment="middle" dy="-7">[name]</TextSymbolizer>
	</Rule>
</Style>
<Style name="stops_names">
	<Rule>
		<TextSymbolizer allow-overlap="no" face-name="DejaVu Sans Book" size="11" fill="#000" halo-radius="2" halo-fill="#fff" placement-type="simple" placements="N,S,10,9" horizontal-alignment="middle" vertical-alignment="auto">[name]</TextSymbolizer>
	</Rule>
</Style>

<Layer name="stops" status="on" srs="&osm2pgsql_projection;" minzoom="50" maxzoom="750000">
	<StyleName>stops_points</StyleName>
	<Datasource>
		<Parameter name="table">(select name,type,way from &prefix;_point where type in ('stop', 'stops') order by z_order) as roads</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="stops_names" status="on" srs="&osm2pgsql_projection;" minzoom="50" maxzoom="25000" clear-label-cache="yes">
	<StyleName>stop_single</StyleName>
	<Datasource>
		<Parameter name="table">(select name,type,way from &prefix;_point where type = 'stop' order by z_order) as roads</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="stops_lines" status="on" srs="&osm2pgsql_projection;" minzoom="50" maxzoom="25000">
	<StyleName>stops_names</StyleName>
	<Datasource>
		<Parameter name="table">(select name,way from &prefix;_line where type = 'stops') as roads</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="stops_groups" status="on" srs="&osm2pgsql_projection;" minzoom="50" maxzoom="25000">
	<StyleName>stops_names</StyleName>
	<Datasource>
		<Parameter name="table">(select name,way from &prefix;_polygon where type = 'stops') as roads</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
