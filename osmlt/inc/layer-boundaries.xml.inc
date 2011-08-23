<Style name="boundaries">
    <Rule>
      &maxscale_zoom7;
      &minscale_zoom9;
      <PolygonSymbolizer>
        <CssParameter name="fill">green</CssParameter>
        <CssParameter name="fill-opacity">0.05</CssParameter>
      </PolygonSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
        <CssParameter name="stroke-opacity">0.15</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom12;
      <PolygonSymbolizer>
        <CssParameter name="fill">green</CssParameter>
        <CssParameter name="fill-opacity">0.05</CssParameter>
      </PolygonSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-dasharray">6,2</CssParameter>
        <CssParameter name="stroke-opacity">0.15</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-dasharray">6,2</CssParameter>
        <CssParameter name="stroke-opacity">0.15</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[way_area] &gt;= 200000000</Filter>
      &maxscale_zoom8;
      &minscale_zoom9;
        <TextSymbolizer name="name" fontset_name="bold-fonts" size="8" fill="#9c9" halo_radius="1" wrap_width="14"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom11;
        <TextSymbolizer name="name" fontset_name="bold-fonts" size="11" fill="#9c9" halo_radius="1" wrap_width="14"/>
    </Rule>
</Style>
<Layer name="boundaries" status="on" srs="&osm2pgsql_projection;">
    <StyleName>boundaries</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,way_area,name,boundary
       from &prefix;_polygon
       where "boundary"='national_park') as boundaries</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
