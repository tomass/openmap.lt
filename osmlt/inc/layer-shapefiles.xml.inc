<Style name="coastline">
    <Rule>
        <PolygonSymbolizer fill="&color_water;"/>
    </Rule>
</Style>
<Layer name="coastline" status="on" srs="&srs900913;">
    <StyleName>coastline</StyleName>
    <Datasource>
      <Parameter name="type">shape</Parameter>
      <Parameter name="file">coastline/baltic</Parameter>
    </Datasource>
</Layer>


