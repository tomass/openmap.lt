<Style name="boundary">
    <Rule>
      &maxscale_zoom7;
      &minscale_zoom9;
      <PolygonSymbolizer fill="green" fill-opacity="0.05"/>
      <LineSymbolizer stroke="green" stroke-width="1.5" stroke-dasharray="4,2" stroke-opacity="0.15"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom12;
      <PolygonSymbolizer fill="green" fill-opacity="0.05"/>
      <LineSymbolizer stroke="green" stroke-width="3" stroke-dasharray="6,2" stroke-opacity="0.15"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <LineSymbolizer stroke="green" stroke-width="3" stroke-dasharray="6,2" stroke-opacity="0.15"/>
    </Rule>
    <Rule>
      <Filter>[way_area] &gt;= 200000000</Filter>
      &maxscale_zoom8;
      &minscale_zoom9;
        <TextSymbolizer name="[name]"" fontset-name="bold-fonts" size="8" fill="#9c9" halo-radius="1" wrap-width="14"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom11;
        <TextSymbolizer name="[name]"" fontset-name="bold-fonts" size="11" fill="#9c9" halo-radius="1" wrap-width="14"/>
    </Rule>
</Style>
<Style name="theme_park">
<Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[tourism]='theme_park'</Filter>
      <LineSymbolizer stroke="#734a08" stroke-width="1.5" stroke-dasharray="9,3" stroke-opacity="0.6"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom18;
      <Filter>[tourism]='theme_park'</Filter>
      <LineSymbolizer stroke="#734a08" stroke-width="2.5" stroke-dasharray="9,3" stroke-opacity="0.6"/>
    </Rule>
</Style>
<Layer name="misc_boundaries" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom7;">
    <StyleName>boundary</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,way_area,name,boundary from &prefix;_polygon where boundary='national_park') as boundary
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="theme_park" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom13;">
    <StyleName>theme_park</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,name,tourism from &prefix;_polygon where tourism='theme_park') as theme_park
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

