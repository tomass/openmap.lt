<Style name="buildings-lz">
    <Rule>
      <Filter>[railway] = 'station' or [building] = 'station'</Filter>
      &maxscale_zoom10;
     <PolygonSymbolizer fill="#d4aaaa"/>
    </Rule>
    <Rule>
      <Filter>[building] = 'supermarket'</Filter>
      &maxscale_zoom10;
      <PolygonSymbolizer fill="pink" fill-opacity="0.5"/>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'place_of_worship'</Filter>
      &maxscale_zoom10;
      &minscale_zoom14;
      <PolygonSymbolizer fill="#777" fill-opacity="0.5"/>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'place_of_worship'</Filter>
      &maxscale_zoom15;
      <PolygonSymbolizer fill="#aaa" fill-opacity="0.9"/>
      <LineSymbolizer stroke="#111" stroke-width="0.3"/>
    </Rule>
</Style>

<Style name="buildings">
    <Rule>
        <Filter>[building] = 'INT-light'</Filter>
        &maxscale_zoom13;
        <PolygonSymbolizer fill="#c6c5c3" fill-opacity="0.7"/>
        <LineSymbolizer stroke="#8d8a8a" stroke-width="0.5"/>
    </Rule>
    <Rule>
        <Filter>[building] != 'INT-light' and [building] != ''</Filter>
        &maxscale_zoom13;
        &minscale_zoom15;
        <PolygonSymbolizer fill="#c6c5c3"/>
    </Rule>
    <Rule>
        <Filter>[building] != 'INT-light' and [building] != ''</Filter>
        &maxscale_zoom15;
        <PolygonSymbolizer fill="#c6c5c3" fill-opacity="0.9"/>
        <LineSymbolizer stroke="#8d8a8a" stroke-width="0.5"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'terminal'</Filter>
      &maxscale_zoom13;
      <PolygonSymbolizer fill="#cc99ff"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'terminal'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="#330066" stroke-width="0.2"/>
    </Rule>
</Style>

<!-- Render only select building types starting at z10. -->
<Layer name="buildings-lz" maxzoom="&max_zoom10;">
    <StyleName>buildings-lz</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,building,railway,amenity from &prefix;_polygon
       where railway='station'
          or building in ('station','supermarket')
          or amenity='place_of_worship'
       order by z_order,way_area desc) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<!-- Render the other building types. Some sql filtering is needed to exclude
     any type not already specifically rendered in buildings-lz. -->
<Layer name="buildings" maxzoom="&max_zoom13;">
    <StyleName>buildings</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,aeroway,
        case
         when building in ('residential','house','garage','garages','detached','terrace','apartments') then 'INT-light'::text
         else building
        end as building
       from &prefix;_polygon
       where (building is not null
         and building not in ('no','station','supermarket')
         and (railway is null or railway != 'station')
         and (amenity is null or amenity != 'place_of_worship'))
          or aeroway = 'terminal'
       order by z_order,way_area desc) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>


