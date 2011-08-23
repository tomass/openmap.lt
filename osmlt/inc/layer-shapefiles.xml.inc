<Style name="coastline">
    <Rule>
      <PolygonSymbolizer>
        <CssParameter name="fill">#c5e0f0</CssParameter>
      </PolygonSymbolizer>
    </Rule>
</Style>
<Style name="islands">
    <Rule>
      <PolygonSymbolizer>
        <CssParameter name="fill">#ffffff</CssParameter>
      </PolygonSymbolizer>
    </Rule>
</Style>
<Layer name="coastline" status="on" srs="&srs4326;">
    <StyleName>coastline</StyleName>
    <Datasource>
      <Parameter name="type">shape</Parameter>
      <Parameter name="file">coastline/coastline.shp</Parameter>
    </Datasource>
</Layer>
<Layer name="islands" status="on" srs="&srs4326;">
    <StyleName>islands</StyleName>
    <Datasource>
      <Parameter name="type">shape</Parameter>
      <Parameter name="file">coastline/islands.shp</Parameter>
    </Datasource>
</Layer>

