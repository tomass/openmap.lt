<Style name="lkrantas">
    <Rule>
      &maxscale_zoom1;
      &minscale_zoom18;
      <PolygonSymbolizer>
        <CssParameter name="fill">#c5e0f0</CssParameter>
      </PolygonSymbolizer>
    </Rule>
</Style>
<Style name="lsalos">
    <Rule>
      &maxscale_zoom1;
      &minscale_zoom18;
      <PolygonSymbolizer>
        <CssParameter name="fill">#ffffff</CssParameter>
      </PolygonSymbolizer>
    </Rule>
</Style>
<Layer name="lkrantas" status="on" srs="&srs4326;">
    <StyleName>lkrantas</StyleName>
    <Datasource>
      <Parameter name="type">shape</Parameter>
      <Parameter name="file">coastline/coastline.shp</Parameter>
    </Datasource>
</Layer>
<Layer name="lsalos" status="on" srs="&srs4326;">
    <StyleName>lsalos</StyleName>
    <Datasource>
      <Parameter name="type">shape</Parameter>
      <Parameter name="file">coastline/islands.shp</Parameter>
    </Datasource>
</Layer>

