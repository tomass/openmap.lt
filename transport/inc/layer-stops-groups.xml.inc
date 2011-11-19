<Style name="stops_groups">
	<Rule>
		<PolygonSymbolizer fill="yellow" fill-opacity="0.5">[stops]</PolygonSymbolizer>
	</Rule>
</Style>
<Style name="stops_lines">
	<Rule>
		<LineSymbolizer stroke="yellow" stroke-width="20" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
</Style>
<Layer name="stops_groups" status="on" srs="&osm2pgsql_projection;" minzoom="50" maxzoom="50000">
	<StyleName>stops_groups</StyleName>
	<Datasource>
		<Parameter name="table">(select way from &prefix;_polygon where type = 'stops' order by z_order) as roads</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="stops_lines" status="on" srs="&osm2pgsql_projection;" minzoom="50" maxzoom="50000">
	<StyleName>stops_lines</StyleName>
	<Datasource>
		<Parameter name="table">(select way from &prefix;_line where type = 'stops' order by z_order) as roads</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
