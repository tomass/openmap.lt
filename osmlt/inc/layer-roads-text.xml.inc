<Style name="roads-text-low-zoom">
    <Rule>
      <Filter>[highway] = 'motorway' and [length] le 6</Filter>
      &maxscale_zoom10;
      &minscale_zoom12;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/aut_shield[length].png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and [length] = 7</Filter>
      &maxscale_zoom10;
      &minscale_zoom12;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/aut_shield6.png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and [length] ge 8</Filter>
      &maxscale_zoom10;
      &minscale_zoom12;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/aut_shield7.png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>

    <Rule>
      <Filter>[highway] = 'trunk' and [length] le 7</Filter>
      &maxscale_zoom11;
      &minscale_zoom12;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/aut_shield[length].png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' and [length] ge 8</Filter>
      &maxscale_zoom11;
      &minscale_zoom12;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/aut_shield8.png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>

    <Rule>
      <Filter>[highway] = 'primary' and [length] le 8</Filter>
      &maxscale_zoom11;
      &minscale_zoom12;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#000" placement="point" file="&symbols;/kra_shield[length].png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>
</Style>
<Style name="roads-text">
    <Rule>
      <Filter>[highway] = 'motorway' and [length] le 6</Filter>
      &maxscale_zoom13;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/aut_shield[length].png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and [length] = 7</Filter>
      &maxscale_zoom13;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/aut_shield6.png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and [length] ge 8</Filter>
      &maxscale_zoom13;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/aut_shield7.png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>

    <Rule>
      <Filter>[highway] = 'trunk' and [length] le 7</Filter>
      &maxscale_zoom13;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/aut_shield[length].png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' and [length] ge 8</Filter>
      &maxscale_zoom13;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/aut_shield8.png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>

    <Rule>
      <Filter>[highway] = 'primary' and [length] le 7</Filter>
      &maxscale_zoom13;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#000" placement="point" file="&symbols;/kra_shield[length].png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and [length] ge 8</Filter>
      &maxscale_zoom13;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#000" placement="point" file="&symbols;/kra_shield8.png" minimum-distance="30" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>

    <Rule>
      <Filter>[highway] = 'secondary' and [length] le 7 and not [bridge]='yes'</Filter>
      &maxscale_zoom13;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/raj_shield[length].png" minimum-distance="40" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and [length] ge 8 and not [bridge]='yes'</Filter>
      &maxscale_zoom13;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/raj_shield8.png" minimum-distance="40" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>

    <Rule>
      <Filter>[highway] = 'tertiary' and [length] le 7 and not [bridge]='yes'</Filter>
      &maxscale_zoom13;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/raj_shield[length].png" minimum-distance="40" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and [length] ge 8 and not [bridge]='yes'</Filter>
      &maxscale_zoom13;
      <ShieldSymbolizer face-name="&font_bold;" size="10" fill="#fff" placement="point" file="&symbols;/raj_shield8.png" minimum-distance="40" spacing="750">[ref]</ShieldSymbolizer>
    </Rule>

    <Rule>
      <Filter>([highway] = 'unclassified' or [highway]='residential') and not [bridge]='yes'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer face-name="&font_book;" size="10" fill="#000" halo-radius="1" minimum-distance="18" spacing="750">[ref]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>([aeroway] = 'runway' or [aeroway]='taxiway') and not [bridge]='yes'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer face-name="&font_book;" size="10" fill="#333" halo-radius="1" minimum-distance="18" spacing="750" placement="line">[ref]</TextSymbolizer>
    </Rule>

    <Rule>
        <Filter>[highway] = 'trunk'</Filter>
        &maxscale_zoom13;
        &minscale_zoom13;
        <TextSymbolizer face-name="&font_book;" size="8" fill="black" halo-radius="2" halo-fill="&trunk_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'trunk'</Filter>
        &maxscale_zoom14;
        &minscale_zoom14;
        <TextSymbolizer face-name="&font_book;" size="9" fill="black" halo-radius="2" halo-fill="&trunk_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'trunk'</Filter>
        &maxscale_zoom15;
        &minscale_zoom15;
        <TextSymbolizer face-name="&font_book;" size="10" fill="black" halo-radius="2" halo-fill="&trunk_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'trunk'</Filter>
        &maxscale_zoom16;
        &minscale_zoom16;
        <TextSymbolizer face-name="&font_book;" size="11" fill="black" halo-radius="1" halo-fill="&trunk_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'trunk'</Filter>
        &maxscale_zoom17;
        <TextSymbolizer face-name="&font_book;" size="12" fill="black" halo-radius="1" halo-fill="&trunk_col;" placement="line">[name]</TextSymbolizer>
    </Rule>

    <Rule>
        <Filter>[highway] = 'primary'</Filter>
        &maxscale_zoom13;
        &minscale_zoom13;
        <TextSymbolizer face-name="&font_book;" size="8" fill="black" halo-radius="2" halo-fill="&primary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'primary'</Filter>
        &maxscale_zoom14;
        &minscale_zoom14;
        <TextSymbolizer face-name="&font_book;" size="9" fill="black" halo-radius="2" halo-fill="&primary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'primary'</Filter>
        &maxscale_zoom15;
        &minscale_zoom15;
        <TextSymbolizer face-name="&font_book;" size="10" fill="black" halo-radius="2" halo-fill="&primary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'primary'</Filter>
        &maxscale_zoom16;
        &minscale_zoom16;
        <TextSymbolizer face-name="&font_book;" size="11" fill="black" halo-radius="1" halo-fill="&primary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'primary'</Filter>
        &maxscale_zoom17;
        <TextSymbolizer face-name="&font_book;" size="12" fill="black" halo-radius="1" halo-fill="&primary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>

    <Rule>
        <Filter>[highway] = 'secondary'</Filter>
        &maxscale_zoom13;
        &minscale_zoom13;
        <TextSymbolizer face-name="&font_book;" size="8" fill="black" halo-radius="2" halo-fill="&secondary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'secondary'</Filter>
        &maxscale_zoom14;
        &minscale_zoom14;
        <TextSymbolizer face-name="&font_book;" size="9" fill="black" halo-radius="2" halo-fill="&secondary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'secondary'</Filter>
        &maxscale_zoom15;
        &minscale_zoom15;
        <TextSymbolizer face-name="&font_book;" size="10" fill="black" halo-radius="2" halo-fill="&secondary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'secondary'</Filter>
        &maxscale_zoom16;
        &minscale_zoom16;
        <TextSymbolizer face-name="&font_book;" size="11" fill="black" halo-radius="1" halo-fill="&secondary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'secondary'</Filter>
        &maxscale_zoom17;
        <TextSymbolizer face-name="&font_book;" size="12" fill="black" halo-radius="1" halo-fill="&secondary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>

    <Rule>
        <Filter>[highway] = 'tertiary'</Filter>
        &maxscale_zoom15;
        &minscale_zoom15;
        <TextSymbolizer face-name="&font_book;" size="9" fill="black" halo-radius="2" halo-fill="&tertiary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'tertiary'</Filter>
        &maxscale_zoom16;
        &minscale_zoom16;
        <TextSymbolizer face-name="&font_book;" size="10" fill="black" halo-radius="1" halo-fill="&tertiary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'tertiary'</Filter>
        &maxscale_zoom17;
        <TextSymbolizer face-name="&font_book;" size="11" fill="black" halo-radius="1" halo-fill="&tertiary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>

    <Rule>
        &maxscale_zoom13;
        &minscale_zoom15;
        <Filter>[highway] = 'proposed' or [highway]='construction'</Filter>
        <TextSymbolizer face-name="&font_book;" size="9" fill="#000" halo-radius="1" halo-fill="&tertiary_col;" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        &maxscale_zoom16;
        <Filter>[highway] = 'proposed' or [highway]='construction'</Filter>
        <TextSymbolizer face-name="&font_book;" size="11" fill="#000" halo-radius="1" placement="line">[name]</TextSymbolizer>
    </Rule>

    <Rule>
        <Filter>[highway] = 'unclassified' or [highway] = 'residential'</Filter>
        &maxscale_zoom15;
        &minscale_zoom15;
        <TextSymbolizer face-name="&font_book;" size="8" fill="#000" halo-radius="1" spacing="300" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'unclassified' or [highway] = 'residential'</Filter>
        &maxscale_zoom16;
        &minscale_zoom16;
        <TextSymbolizer face-name="&font_book;" size="11" fill="#000" halo-radius="1" spacing="300" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
        <Filter>[highway] = 'unclassified' or [highway] = 'residential'</Filter>
        &maxscale_zoom17;
        <TextSymbolizer face-name="&font_book;" size="12" fill="#000" halo-radius="1" spacing="400" placement="line">[name]</TextSymbolizer>
    </Rule>
</Style>
<Layer name="planet roads text osm low zoom" maxzoom="&max_zoom10;" minzoom="&min_zoom12;">
     <StyleName>roads-text-low-zoom</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,highway,ref,char_length(ref) as length
       from &prefix;_roads
       where highway in ('motorway','trunk','primary')
         and ref is not null
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="planet roads text osm" maxzoom="&max_zoom12;">
     <StyleName>roads-text</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,highway,aeroway,name,ref,char_length(ref) as length,
       case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge
       from &prefix;_line
       where waterway IS NULL
         and leisure IS NULL
         and landuse IS NULL
         and (name is not null or ((highway is not null or aeroway is not null) and ref is not null))
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
