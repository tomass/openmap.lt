<Style name="aerialways">
    <Rule>
      <Filter>[aerialway] = 'cable_car' or [aerialway]='gondola' or [aerialway]='goods'</Filter>
      &maxscale_zoom12;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/cable_car.png" />
    </Rule>
    <Rule>
      <Filter>[aerialway] = 'chair_lift' or [aerialway]='drag_lift' or [aerialway]='t-bar' or [aerialway]='j-bar' or [aerialway]='platter' or [aerialway]='rope_tow'</Filter>
      &maxscale_zoom12;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/chair_lift.png" />
    </Rule>
</Style>

<Layer name="aerialways" maxzoom="&max_zoom12;">
    <StyleName>aerialways</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,aerialway from &prefix;_line where aerialway is not null) as aerialways
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
