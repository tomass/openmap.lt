<Style name="text">
    <Rule>
      <Filter>[place] = 'island'</Filter>
      &maxscale_zoom12;
      &minscale_zoom18;
      <TextSymbolizer fontset-name="oblique-fonts" size="9" fill="#000" dy="0" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity]='pub' or [amenity]='restaurant' or [amenity]='cafe' or [amenity]='fast_food' or [amenity]='biergarten'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#734a08" dy="9" halo-radius="1" wrap-width="34">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity]='bar'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#734a08" dy="11" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity]='library' or [amenity]='theatre' or [amenity]='courthouse'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#734a08" dy="12" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity]='cinema'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#734a08" dy="14" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity]='parking' and ([access] = 'public' or not [access] != '')</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#0066ff" dy="9" halo-radius="1" wrap-width="34">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity]='parking' and ([access] != '' and not [access] = 'public')</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#66ccaf" dy="9" halo-radius="1" wrap-width="34">[name]</TextSymbolizer>
    </Rule>
     <Rule>
      <Filter>[amenity] = 'police'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#734a08" dy="10" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'fire_station'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#734a08" dy="9" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
     <Rule>
      <Filter>[amenity] = 'place_of_worship'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#000033" dy="11" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'wood'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#000" halo-radius="2" wrap-width="10">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'peak'</Filter>
      &maxscale_zoom13;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="brown" dy="5" halo-radius="1">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'peak' and not [name] != ''</Filter>
      &maxscale_zoom14;
      <TextSymbolizer fontset-name="oblique-fonts" size="9" fill="brown" dy="6" halo-radius="1">[ele]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'peak' and [name] != ''</Filter>
      &maxscale_zoom14;
      <TextSymbolizer fontset-name="oblique-fonts" size="9" fill="brown" dy="18" halo-radius="1">[ele]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'volcano'</Filter>
      &maxscale_zoom13;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="brown" dy="5" halo-radius="1">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'volcano' and not [name] != ''</Filter>
      &maxscale_zoom14;
      <TextSymbolizer fontset-name="oblique-fonts" size="9" fill="brown" dy="6" halo-radius="1">[ele]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'volcano' and [name] != ''</Filter>
      &maxscale_zoom14;
      <TextSymbolizer fontset-name="oblique-fonts" size="9" fill="brown" dy="16" halo-radius="1">[ele]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'cave_entrance'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="brown" dy="9" halo-radius="1" wrap-width="20" >[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[historic] = 'memorial' or [historic]='archaeological_site'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="brown" dy="12" halo-radius="1" wrap-width="20" >[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'water' or [natural] = 'lake' or [landuse] = 'reservoir' or [landuse] = 'basin'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#6699cc" halo-radius="1" wrap-width="20">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>([leisure] != '' or [landuse] != '') and [point] = 'yes'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#000" halo-radius="1" wrap-width="10">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'bay'</Filter>
      &maxscale_zoom14;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#6699cc" halo-radius="1" wrap-width="20">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'spring'</Filter>
      &maxscale_zoom16;
      <TextSymbolizer fontset-name="book-fonts" size="8" fill="#6699cc" dy="10" halo-radius="1" wrap-width="20">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'alpine_hut'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#6699cc" dy="10" halo-radius="1">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'alpine_hut'</Filter>
      &maxscale_zoom16;
      <TextSymbolizer fontset-name="oblique-fonts" size="8" fill="#6699cc" dy="22" halo-radius="1">[ele]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity]='shelter'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#6699cc" dy="10" halo-radius="1">[name]</TextSymbolizer>
      <TextSymbolizer fontset-name="oblique-fonts" size="8" fill="#6699cc" dy="22" halo-radius="1">[ele]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'bank'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="black" dy="9" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'hotel' or [tourism]='hostel' or [tourism]='chalet'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#0066ff" dy="11" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'embassy'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#0066ff" dy="8" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism]='guest_house'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="8" fill="#0066ff" dy="9" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism]='bed_and_breakfast'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="8" fill="#0066ff" dy="7" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'fuel' or [amenity]='bus_station'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#0066ff" dy="9" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'camp_site'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#0066ff" dy="15" halo-radius="1" wrap-width="70">[name]</TextSymbolizer>
    </Rule>
    <Rule>


      <Filter>[tourism] = 'caravan_site'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#0066ff" dy="19" halo-radius="1" wrap-width="70">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[waterway] = 'lock'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#0066ff" dy="10" halo-radius="1" wrap-width="70">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'marina'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <TextSymbolizer fontset-name="book-fonts" size="8" fill="blue" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[leisure] = 'marina'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="blue" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'theme_park'</Filter>
      &maxscale_zoom14;
      &minscale_zoom15;
      <TextSymbolizer fontset-name="book-fonts" size="8" fill="#734a08" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'theme_park'</Filter>
      &maxscale_zoom16;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#734a08" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism]='museum'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#734a08" dy="10" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity]='prison'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#734a08" dy="16" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'attraction'</Filter>
      &maxscale_zoom16;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#660033" halo-radius="2" wrap-width="10">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'university'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer fontset-name="bold-fonts" size="9" fill="#000033" halo-radius="1" wrap-width="16">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'school' or [amenity] = 'college'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#000033" halo-radius="1" wrap-width="14">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'kindergarten'</Filter>
      &maxscale_zoom16;
      <TextSymbolizer fontset-name="book-fonts" size="8" fill="#000033" halo-radius="1" wrap-width="14">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[man_made] = 'lighthouse'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#000033" dy="16" halo-radius="2" wrap-width="12">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[man_made] = 'windmill'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#734a08" dy="12" halo-radius="1" wrap-width="20">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'hospital'</Filter>
      &maxscale_zoom16;
      <TextSymbolizer fontset-name="book-fonts" size="8" fill="#da0092" dy="10" halo-radius="2" wrap-width="24">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[amenity] = 'pharmacy'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="8" fill="#da0092" dy="9" halo-radius="1" wrap-width="12">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[shop]='bakery' or [shop]='clothes' or [shop]='fashion' or [shop]='convenience' or [shop]='doityourself' or [shop]='hairdresser' or [shop]='butcher' or [shop]='car' or [shop]='car_repair' or [shop]='bicycle' or [shop]='florist'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="8" fill="#939" dy="9" halo-radius="1" wrap-width="12">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[shop]='supermarket' or [shop]='department_store'</Filter>
      &maxscale_zoom16;
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#939" dy="9" halo-radius="1" wrap-width="20">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[military] = 'danger_area'</Filter>
      &maxscale_zoom12;
      <TextSymbolizer fontset-name="bold-fonts" size="9" fill="pink" halo-radius="1" wrap-width="10">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'gate'</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#aa66cc" halo-radius="1" wrap-width="10">[ref]</TextSymbolizer>
    </Rule>
</Style>
<Style name="area-text">
    <Rule>
      <Filter>[way_area] &gt;= 150000</Filter>
      &maxscale_zoom14;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#000033" halo-radius="1" wrap-width="20">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[way_area] &gt;= 80000 and [way_area] &lt; 150000</Filter>
      &maxscale_zoom15;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#000033" halo-radius="1" wrap-width="20">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[way_area] &gt;= 20000 and [way_area] &lt; 80000</Filter>
      &maxscale_zoom16;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#000033" halo-radius="1" wrap-width="20">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[way_area] &lt; 20000</Filter>
      &maxscale_zoom17;
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="#000033" halo-radius="1" wrap-width="20">[name]</TextSymbolizer>
    </Rule>
</Style>
<Layer name="text" status="on" maxzoom="&max_zoom12;">
    <StyleName>text</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,amenity,shop,access,leisure,landuse,man_made,"natural",place,tourism,ele,name,ref,military,aeroway,waterway,historic,'yes'::text as point
       from &prefix;_point
       where amenity is not null
          or shop in ('supermarket','bakery','clothes','fashion','convenience','doityourself','hairdresser','department_store','butcher','car','car_repair','bicycle','florist')
          or leisure is not null
          or landuse is not null
          or tourism is not null
          or "natural" is not null
          or man_made in ('lighthouse','windmill')
          or place='island'
          or military='danger_area'
          or aeroway='gate'
          or waterway='lock'
          or historic in ('memorial','archaeological_site')
      ) as text
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="text-poly" status="on" maxzoom="&max_zoom12;">
    <StyleName>text</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,aeroway,shop,access,amenity,leisure,landuse,man_made,"natural",place,tourism,NULL as ele,name,ref,military,waterway,historic,'no'::text as point
       from &prefix;_polygon
       where amenity is not null
          or shop in ('supermarket','bakery','clothes','fashion','convenience','doityourself','hairdresser','department_store', 'butcher','car','car_repair','bicycle')
          or leisure is not null
          or landuse is not null
          or tourism is not null
          or "natural" is not null
          or man_made in ('lighthouse','windmill')
          or place='island'
          or military='danger_area'
          or historic in ('memorial','archaeological_site')
      ) as text
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="area-text" status="on" maxzoom="&max_zoom14;">
    <StyleName>area-text</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,way_area,name
       from &prefix;_polygon
       where name is not null
         and (waterway is null or waterway != 'riverbank')
       order by z_order,way_area desc
      ) as text
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>