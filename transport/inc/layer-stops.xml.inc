<Style name="stops">
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
	<Rule>
		<Filter>[type] = 'stop' and [name] != ''</Filter>
		&maxscale_zoom15;
		&minscale_zoom18;
		<TextSymbolizer allow-overlap="no" face-name="DejaVu Sans Book" size="11" fill="#000" halo-radius="2" halo-fill="#fff" label-position-tolerance="300" horizontal-alignment="left" dx="-7">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[bus_ref] != '' and [trolleybus_ref] != ''</Filter>
		&maxscale_zoom17;
		&minscale_zoom18;
		<TextSymbolizer allow-overlap="no" face-name="DejaVu Sans Book" size="10" halo-fill="#fff" halo-radius="2" fill="&troll_color;" dy="20" label-position-tolerance="300" horizontal-alignment="left" dx="-8">[trolleybus_ref]</TextSymbolizer>
		<TextSymbolizer allow-overlap="no" face-name="DejaVu Sans Book" size="10" halo-fill="#fff" halo-radius="2" fill="&bus_color;" dy="10" label-position-tolerance="300" horizontal-alignment="left" dx="-8">[bus_ref]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>not [bus_ref] != '' and [trolleybus_ref] != ''</Filter>  
		&maxscale_zoom17;
		&minscale_zoom18;
		<TextSymbolizer allow-overlap="no" face-name="DejaVu Sans Book" size="10" halo-fill="#fff" halo-radius="2" fill="&troll_color;" dy="10" label-position-tolerance="300" horizontal-alignment="left" dx="-8">[trolleybus_ref]</TextSymbolizer>      
	</Rule>
	<Rule>
		<Filter>[bus_ref] != '' and not [trolleybus_ref] != ''</Filter>
		&maxscale_zoom17;
		&minscale_zoom18;
		<TextSymbolizer allow-overlap="no" face-name="DejaVu Sans Book" size="10" halo-fill="#fff" halo-radius="2" fill="&bus_color;" dy="10" label-position-tolerance="300" horizontal-alignment="left" dx="-8">[bus_ref]</TextSymbolizer>
	</Rule>
</Style>
<Style name="stops_names">
	<Rule>
		<TextSymbolizer allow-overlap="yes" face-name="DejaVu Sans Book" size="12" fill="#000" halo-radius="2" halo-fill="#fff" horizontal-alignment="middle">[name]</TextSymbolizer>
	</Rule>
</Style>
<Layer name="stops" status="on" srs="&osm2pgsql_projection;" minzoom="50" maxzoom="750000">
	<StyleName>stops</StyleName>
	<Datasource>
		<Parameter name="table">(select * from &prefix;_point where type in ('stop', 'stops') order by z_order) as roads</Parameter>
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
