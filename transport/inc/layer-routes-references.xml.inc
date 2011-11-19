<Style name="routes-ref">
	<Rule>
		<Filter>[bus_ref] != ''</Filter>
		<TextSymbolizer face-name="DejaVu Sans Book" size="10" fill="#fff" halo-radius="2" spacing="400" placement="line" halo-fill="&bus_color;" minimum-distance="20" avoid-edges="true" max-char-angle-delta="15">[bus_ref]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[trolleybus_ref] != ''</Filter>
		<TextSymbolizer face-name="DejaVu Sans Book" size="10" fill="#fff" halo-radius="2" spacing="400" placement="line" halo-fill="&troll_color;" minimum-distance="20" avoid-edges="true" max-char-angle-delta="15">[trolleybus_ref]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[share_taxi_ref] != ''</Filter>
		<TextSymbolizer face-name="DejaVu Sans Book" size="10" fill="#fff" halo-radius="2" spacing="400" placement="line" halo-fill="&sharetaxi_color;" minimum-distance="20" avoid-edges="true" max-char-angle-delta="15">[share_taxi_ref]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[train_ref] != ''</Filter>
		<TextSymbolizer face-name="DejaVu Sans Book" size="10" fill="#fff" halo-radius="2" spacing="400" placement="line" halo-fill="&train_color;" minimum-distance="20" avoid-edges="true" max-char-angle-delta="15">[train_ref]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[tram_ref] != ''</Filter>
		<TextSymbolizer face-name="DejaVu Sans Book" size="10" fill="#fff" halo-radius="2" spacing="400" placement="line" halo-fill="&tram_color;" minimum-distance="20" avoid-edges="true" max-char-angle-delta="15">[tram_ref]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[ferry_ref] != ''</Filter>
		<TextSymbolizer face-name="DejaVu Sans Book" size="10" fill="#fff" halo-radius="2" spacing="400" placement="line" halo-fill="&ferry_color;" minimum-distance="20" avoid-edges="true" max-char-angle-delta="15">[ferry_ref]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[subway_ref] != ''</Filter>
		<TextSymbolizer face-name="DejaVu Sans Book" size="10" fill="#fff" halo-radius="2" spacing="400" placement="line" halo-fill="&subway_color;" minimum-distance="20" avoid-edges="true" max-char-angle-delta="15">[subway_ref]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[light_rail_ref] != ''</Filter>
		<TextSymbolizer face-name="DejaVu Sans Book" size="10" fill="#fff" halo-radius="2" spacing="400" placement="line" halo-fill="&lightrail_color;" minimum-distance="20" avoid-edges="true" max-char-angle-delta="15">[light_rail_ref]</TextSymbolizer>
	</Rule>
</Style>


<Layer name="routes" status="on" srs="&osm2pgsql_projection;" minzoom="50" maxzoom="200000">
    <StyleName>routes-ref</StyleName>
    <Datasource>
      <Parameter name="table">(select * from &prefix;_line where type = 'route' order by z_order) as roads</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

