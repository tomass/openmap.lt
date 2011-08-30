<Style name="turning_circle-casing">
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom16;
      <Filter>[int_tc_type]='tertiary'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-tert-casing.18.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-casing.16.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.16.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-casing.18.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='service'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-casing.14.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.18.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='tertiary'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-tert-casing.24.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-casing.24.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='service'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-casing.16.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.24.png" allow_overlap="true" />
    </Rule>
</Style>
<Style name="turning_circle-fill">
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom16;
      <Filter>[int_tc_type]='tertiary'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-tert-fill.16.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.14.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-livs-fill.14.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.16.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='service'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.12.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-livs-fill.16.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='tertiary'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-tert-fill.22.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.22.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='service'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.14.png" allow_overlap="true" />
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-livs-fill.22.png" allow_overlap="true" />
    </Rule>
</Style>
<Style name="highway-area-casing">
   <Rule>
      <Filter>[highway] = 'residential' or [highway]='unclassified'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
	<CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' or [highway]='service' or [highway]='footway' or [highway]='path'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
	<CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'track'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
	<CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
   </Rule>
    <Rule>
      <Filter>[highway] = 'platform' or [railway] = 'platform'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="highway-area-fill">
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer>
        <CssParameter name="fill">#ccc</CssParameter>
      </PolygonSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'residential' or [highway]='unclassified' or [highway]='service'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer>
        <CssParameter name="fill">#fff</CssParameter>
      </PolygonSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' or [highway]='footway' or [highway]='path'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer>
        <CssParameter name="fill">#ededed</CssParameter>
      </PolygonSymbolizer>
   </Rule>   
   <Rule>
      <Filter>[highway] = 'track'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer>
        <CssParameter name="fill">#dfcc66</CssParameter>
      </PolygonSymbolizer>
   </Rule>
    <Rule>
      <Filter>[highway] = 'platform' or [railway] = 'platform'</Filter>
      &maxscale_zoom16;
      <PolygonSymbolizer>
        <CssParameter name="fill">#bbbbbb</CssParameter>
        <CssParameter name="gamma">.65</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom11;
      <PolygonSymbolizer>
        <CssParameter name="fill">#bbc</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway'</Filter>
      &maxscale_zoom13;
      <PolygonSymbolizer>
        <CssParameter name="fill">#bbc</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'helipad'</Filter>
      &maxscale_zoom16;
      <PolygonSymbolizer>
        <CssParameter name="fill">#bbc</CssParameter>
      </PolygonSymbolizer>
    </Rule>
</Style>
<Style name="highway-junctions">
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom11;
      <TextSymbolizer name="ref" fontset_name="oblique-fonts" size="9" fill="#6666ff" halo_radius="1" wrap_width="12" min_distance="2" />
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom14;
      <TextSymbolizer name="ref" fontset_name="oblique-fonts" size="9" fill="#6666ff" halo_radius="1" wrap_width="12" min_distance="2"/>
      <TextSymbolizer name="name" fontset_name="oblique-fonts" size="8" fill="#6666ff" halo_radius="1" wrap_width="2" dy="-8" min_distance="2" wrap_character=";" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <TextSymbolizer name="ref" fontset_name="oblique-fonts" size="12" fill="#6666ff" halo_radius="1" wrap_width="12" min_distance="2"/>
      <TextSymbolizer name="name" fontset_name="oblique-fonts" size="11" fill="#6666ff" halo_radius="1" wrap_width="2" dy="-10" min_distance="2" wrap_character=";" />
    </Rule>
</Style>
<Style name="tunnels-casing">
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">13</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
   <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">17</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">7.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="tunnels-fill">
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">8.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>    
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">9</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">9</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">9.4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">13</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">9.4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">13</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="minor-roads-casing-links">
    <Rule>
      <Filter>[highway]='raceway'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">pink</CssParameter>
        <CssParameter name="stroke-width">1.2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway]='raceway'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">pink</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway]='raceway'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">pink</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway]='motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway]='motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway]='motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway]='motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">7.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;      
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;      
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">7.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;      
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;      
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">8.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">7.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="minor-roads-casing">
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;      
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">7.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;      
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">7.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">8.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;      
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_cas_col;</CssParameter>
        <CssParameter name="stroke-width">13</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_cas_col;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;      
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
   
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road') and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">7.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road') and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road') and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbb</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road') and not [tunnel]='yes'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbb</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'tertiary') and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_cas_col;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road') and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbb</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>[highway] = 'service' and not ([service]='INT-minor' or [tunnel]='yes')</Filter>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service' and [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service' and not ([service]='INT-minor' or [tunnel]='yes')</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'service' and [tunnel]='yes'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'service' and [service]='INT-minor'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">3.6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">3.6</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and not [tunnel]='yes'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">9</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and [tunnel]='yes'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">9</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom12;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
   <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">9</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
   <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">14.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>

</Style>
<Style name="minor-roads-fill-links">
    <Rule>
      <Filter>[highway]='motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">9</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">15.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">15.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
   <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">15.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">9.4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">13</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="minor-roads-fill"> 
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>([highway] = 'proposed' or [highway]='construction') and not [construction] != ''</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#9cc</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='motorway' or [construction]='motorway_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#809bc0</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='trunk' or [construction]='trunk_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#a9dba9</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='primary' or [construction]='primary_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#ec989a</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='secondary' or [construction]='secondary_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#fed7a5</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and not [construction] != ''</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#9cc</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-dasharray">6,4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='motorway' or [construction]='motorway_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#809bc0</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-dasharray">6,4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='trunk' or [construction]='trunk_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#a9dba9</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-dasharray">6,4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='primary' or [construction]='primary_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#ec989a</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-dasharray">6,4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='secondary' or [construction]='secondary_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#fed7a5</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-dasharray">6,4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='tertiary' or [construction]='tertiary_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#ffffb3</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-dasharray">6,4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='residential' or [construction]='unclassified' or [construction]='living_street' or [construction]='service')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-dasharray">6,4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and not [construction] != ''</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#9cc</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-dasharray">8,6</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='motorway' or [construction]='motorway_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#809bc0</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-dasharray">8,6</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='trunk' or [construction]='trunk_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#a9dba9</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-dasharray">8,6</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='primary' or [construction]='primary_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#ec989a</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-dasharray">8,6</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='secondary' or [construction]='secondary_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#fed7a5</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-dasharray">8,6</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='tertiary' or [construction]='tertiary_link')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#ffffb3</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-dasharray">8,6</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='residential' or [construction]='unclassified' or [construction]='living_street' or [construction]='service')</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-dasharray">8,6</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and [construction]='cycleway'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#69f</CssParameter>
        <CssParameter name="stroke-width">1.2</CssParameter>
        <CssParameter name="stroke-dasharray">2,6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">15</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom11;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule> 
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">15</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
   <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">15</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'rail' and [tunnel] = 'yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#ffffff</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">1,9</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#fdfdfd</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,1,1,8</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#ececec</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,2,1,7</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#cacaca</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,3,1,6</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#afafaf</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,4,1,5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#a1a1a1</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,5,1,4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#9b9b9b</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,6,1,3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway] = 'disused' or [railway] = 'abandoned' or [railway]='construction') and not [highway] != ''</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">2,4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom13;
      <Filter>[railway] = 'rail' and not [tunnel] = 'yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999999</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">8,12</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway] = 'rail' and not [tunnel]='yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999999</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,11,8,1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom12;
      <Filter>[railway] = 'spur-siding-yard'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'spur-siding-yard' and [tunnel] = 'yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#ffffff</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">1,9</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#fdfdfd</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,1,1,8</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#ececec</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,2,1,7</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#cacaca</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,3,1,6</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#afafaf</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,4,1,5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#a1a1a1</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,5,1,4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#9b9b9b</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,6,1,3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'spur-siding-yard' and not [tunnel] = 'yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999999</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">0.8</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,8,11,1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway]='narrow_gauge' or [railway]='funicular') and not [tunnel]='yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#666</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway]='narrow_gauge' or [railway]='funicular') and [tunnel]='yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#666</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
	  <CssParameter name="stroke-dasharray">5,3</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom18;
      <Filter>[railway]='miniature'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">1.2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-dasharray">1,10</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[railway]='tram' and [tunnel]='yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#444</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-dasharray">5,3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom18;
      <Filter>[railway]='tram' and [tunnel]='yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#444</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">5,3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway]='light_rail' and [tunnel] = 'yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#666</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">5,3</CssParameter>
      </LineSymbolizer>
    </Rule>
     <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway]='light_rail' and not [tunnel] = 'yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#666</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom18;
      <Filter>[railway]='subway' and [tunnel] = 'yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">5,3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom18;
      <Filter>[railway]='subway' and not [tunnel] = 'yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom10;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbb</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#ddd</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#ddd</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#ddd</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#ddd</CssParameter>
        <CssParameter name="stroke-width">9.4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#ddd</CssParameter>
        <CssParameter name="stroke-width">13</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">9.4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">13</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom12;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#ccc</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#ccc</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#ccc</CssParameter>
        <CssParameter name="stroke-width">4.7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#ccc</CssParameter>
        <CssParameter name="stroke-width">7.4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#ccc</CssParameter>
        <CssParameter name="stroke-width">13</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">9.4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">13</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service' and not [service]='INT-minor'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbbbbb</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service' and not [service]='INT-minor'</Filter>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'service' and not [service]='INT-minor'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'service' and [service]='INT-minor'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#ededed</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#ededed</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#ededed</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#ededed</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
       <Filter>[highway] = 'platform' or [railway] = 'platform'</Filter>
       &maxscale_zoom16;
       <LineSymbolizer>
         <CssParameter name="stroke">grey</CssParameter>
         <CssParameter name="stroke-width">6</CssParameter>
         <CssParameter name="stroke-linejoin">round</CssParameter>
         <CssParameter name="stroke-linecap">round</CssParameter>
       </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'steps'</Filter>
      &maxscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">salmon</CssParameter>
        <CssParameter name="stroke-width">5.0</CssParameter>
        <CssParameter name="stroke-dasharray">2,1</CssParameter>
      </LineSymbolizer>
    </Rule>  
    <Rule>
      <Filter>([highway] = 'bridleway' or ([highway] = 'path' and [horse] = 'designated')) and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">1.2</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>  
    <Rule>
      <Filter>([highway] = 'footway' or ([highway] = 'path' and [foot] = 'designated' and not [bicycle] = 'designated')) and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">salmon</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">1,3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>   
    <Rule>
      <Filter>[highway] = 'path' and not ([bicycle] = 'designated' or [foot] = 'designated' or [horse] = 'designated') and not [tunnel] = 'yes'</Filter> 
      &maxscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">1.0</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
     </LineSymbolizer>
     <LineSymbolizer>
       <CssParameter name="stroke">black</CssParameter>
       <CssParameter name="stroke-width">0.5</CssParameter>
       <CssParameter name="stroke-dasharray">6,3</CssParameter>
       <CssParameter name="stroke-linejoin">round</CssParameter>
       <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
    </Rule>
    <Rule>
       <Filter>[highway] = 'platform' or [railway] = 'platform'</Filter>
       &maxscale_zoom16;
       <LineSymbolizer>
         <CssParameter name="stroke">#bbbbbb</CssParameter>
         <CssParameter name="stroke-width">4</CssParameter>
         <CssParameter name="stroke-linejoin">round</CssParameter>
         <CssParameter name="stroke-linecap">round</CssParameter>
       </LineSymbolizer>
     </Rule>
    <Rule>
      <Filter>[highway] = 'steps'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">salmon</CssParameter>
        <CssParameter name="stroke-width">2.0</CssParameter>
        <CssParameter name="stroke-dasharray">1,3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated' and not [foot] = 'designated')) and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">blue</CssParameter>
        <CssParameter name="stroke-width">1.2</CssParameter>
        <CssParameter name="stroke-dasharray">1,3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'path' and [bicycle] = 'designated' and [foot] = 'designated') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">blue</CssParameter>
        <CssParameter name="stroke-width">1.2</CssParameter>
        <CssParameter name="stroke-dasharray">1,3,0,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">salmon</CssParameter>
        <CssParameter name="stroke-width">1.2</CssParameter>
        <CssParameter name="stroke-dasharray">0,4,1,3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'byway'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#ffcc00</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'track'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">1.2</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
     </Rule>    
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#debd9c</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-dasharray">2,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#debd9c</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-dasharray">4,6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbc</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbc</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbc</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway' and not [bridge]='yes'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbc</CssParameter>
        <CssParameter name="stroke-width">18</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway'</Filter>
      &maxscale_zoom11;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbc</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway' and not [bridge]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbc</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway' and not [bridge]='yes'</Filter>
      &maxscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#bbc</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
      </LineSymbolizer>
    </Rule>
    <!--Rule>
      <ElseFilter/>
      &maxscale_zoom9;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-dasharray">4,4</CssParameter>
      </LineSymbolizer>
    </Rule-->
</Style>
<Style name="access">
     <Rule>
      <Filter>[access] = 'permissive' and ([highway]='unclassified' or [highway]='residential' or [highway]='footway')</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#cf9</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-dasharray">6,8</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
     <Rule>
      <Filter>[access] = 'permissive' and ([highway] = 'service' and not [service] = 'INT-minor')</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#cf9</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-dasharray">6,8</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
     <Rule>
      <Filter>[access] = 'permissive' and ([highway]='unclassified' or [highway]='residential' or [highway]='footway' or [highway]='service')</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#cf9</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-dasharray">6,8</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[access]='destination' and ([highway]='unclassified' or [highway]='residential')</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#c2e0ff</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-dasharray">6,8</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[access]='destination' and ([highway] = 'service' and not [service] = 'INT-minor')</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#c2e0ff</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-dasharray">6,8</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[access]='destination' and ([highway]='unclassified' or [highway]='residential' or [highway]='service')</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#c2e0ff</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-dasharray">6,8</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([access] = 'private' or [access] = 'no') and not [highway] = 'service'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#efa9a9</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-dasharray">6,8</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([access] = 'private' or [access] = 'no') and ([highway] = 'service' and not [service] = 'INT-minor')</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#efa9a9</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-dasharray">6,8</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[access] = 'private' or [access] = 'no'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#efa9a9</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-dasharray">6,8</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="footbikecycle-tunnels">
    <Rule>
      <Filter>[highway] = 'bridleway' or ([highway] = 'path' and [horse] = 'designated')</Filter>
      &maxscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'footway' or ([highway] = 'path' and [foot] = 'designated')</Filter>
      &maxscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">salmon</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-dasharray">1,3</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'path' and not ([bicycle] = 'designated' or [foot] = 'designated' or [horse] = 'designated')</Filter>
      &maxscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">1.0</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
     </LineSymbolizer>
     <LineSymbolizer>
       <CssParameter name="stroke">black</CssParameter>
       <CssParameter name="stroke-width">0.5</CssParameter>
       <CssParameter name="stroke-dasharray">6,3</CssParameter>
       <CssParameter name="stroke-linejoin">round</CssParameter>
       <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
      &maxscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">blue</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">1,3</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="tracks-notunnel-nobridge">
    <Rule>
      <Filter>[tracktype]='grade1'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#b37700</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-opacity">0.7</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade2'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#a87000</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">9,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade3'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade4'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,7,1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade5'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <ElseFilter/>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
     </Rule>    
</Style>
<Style name="tracks-tunnels">
    <Rule>
     <Filter>[tracktype]='grade1'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#b37700</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade2'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#a87000</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade3'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade4'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,7,1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade5'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <ElseFilter/>
      &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
     </Rule>    
</Style>
<Style name="waterway-bridges">
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#000</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#b5d0d0</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="#6699cc" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#000</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#b5d0d0</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="#6699cc" halo_radius="1" placement="line"/>
    </Rule>
</Style>
<Style name="bridges_casing">
     <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
        <LineSymbolizer>
        <CssParameter name="stroke">#506077</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
        <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
      </LineSymbolizer>
    </Rule>    
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
        <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">9</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
        <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
        <LineSymbolizer>
        <CssParameter name="stroke">#477147</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
        <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
        <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
        <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
        <LineSymbolizer>
        <CssParameter name="stroke">#8d4346</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
        <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
        <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
        <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway]='secondary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway]='secondary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway]='secondary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">7.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>

      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">9</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service'</Filter>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">2.2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">3.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">9.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='subway'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='light_rail' or [railway]='narrow_gauge'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#555</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'bridleway' or ([highway] = 'path' and [horse] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'footway' or ([highway] = 'path' and [foot] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'path' and not ([bicycle] = 'designated' or [foot] = 'designated' or [horse] = 'designated')</Filter>
      &maxscale_zoom14;  
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>      
    </Rule>         
    <Rule>
      <Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'byway'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'rail'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">6.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'INT-spur-siding-yard'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">5.7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway] = 'disused' or [railway] = 'abandoned' or [railway]='construction') and not [highway] != ''</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade1'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade2'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade3'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade4'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade5'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'track' and not [tracktype] != ''</Filter>
      &maxscale_zoom14;
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
      </LineSymbolizer>
     </Rule>    
</Style>
<Style name="bridges_casing2">
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='subway'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='light_rail' or [railway]='narrow_gauge'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'bridleway' or ([highway] = 'path' and [horse] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'footway' or ([highway] = 'path' and [foot] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'path' and not ([bicycle] = 'designated' or [foot] = 'designated' or [horse] = 'designated')</Filter>
      &maxscale_zoom14;  
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>       
    </Rule>         
    <Rule>
      <Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'byway'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'rail'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'INT-spur-siding-yard'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway] = 'disused' or [railway] = 'abandoned' or [railway]='construction') and not [highway] != ''</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade1'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade2'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade3'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade4'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade5'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'track' and not [tracktype] != ''</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
     </Rule>    
</Style>
<Style name="bridges_fill">
     <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>   
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>   
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">7.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
   <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">9.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">14.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>   
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">9.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">14.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">9</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">10.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>  
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">14.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">9.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">&tertiary_col;</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#ddd</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#ddd</CssParameter>
        <CssParameter name="stroke-width">9.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#ddd</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
   <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">7.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">9.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service'</Filter>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#ededed</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#ededed</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer>
        <CssParameter name="stroke">#ededed</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#ededed</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='subway'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='light_rail' or [railway]='narrow_gauge'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#666</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#debd9c</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-dasharray">2,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#debd9c</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-dasharray">4,6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'bridleway' or ([highway] = 'path' and [horse] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'footway' or ([highway] = 'path' and [foot] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">salmon</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">1,3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'path' and not ([bicycle] = 'designated' or [foot] = 'designated' or [horse] = 'designated')</Filter>
      &maxscale_zoom14;  
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">0.5</CssParameter>
        <CssParameter name="stroke-dasharray">6,3</CssParameter>	
		<CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>         
    <Rule>
      <Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">blue</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">1,3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'byway'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#ffcc00</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom13;
      <Filter>[railway] = 'rail'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999999</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">8,12</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway] = 'rail'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999999</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,11,8,1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'INT-spur-siding-yard'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999999</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">0.8</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,8,11,1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway] = 'disused' or [railway] = 'abandoned' or [railway]='construction') and not [highway] != ''</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">2,4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade1'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#b37700</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-opacity">0.7</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade2'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#a87000</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade3'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.7</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade4'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,7,1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade5'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'track' and not [tracktype] != ''</Filter>
      &maxscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#996600</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
     </Rule>    
</Style>
<Style name="roads">
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom5;
      &minscale_zoom6;
      <LineSymbolizer>
        <CssParameter name="stroke">&motorway_col;</CssParameter>
        <CssParameter name="stroke-width">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom7;
      &minscale_zoom8;
      <LineSymbolizer>
       <CssParameter name="stroke">&motorway_col;</CssParameter>
       <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom9;
      &minscale_zoom9;
      <LineSymbolizer>
       <CssParameter name="stroke">&motorway_col;</CssParameter>
       <CssParameter name="stroke-width">1.4</CssParameter>
      </LineSymbolizer>
    </Rule>
   <Rule>
     <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom10;
      &minscale_zoom10;
      <LineSymbolizer>
      <CssParameter name="stroke">&motorway_col;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
   </Rule>
   <Rule>
     <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer>
      <CssParameter name="stroke">&motorway_col;</CssParameter>
      <CssParameter name="stroke-width">2.5</CssParameter>
    </LineSymbolizer>
   </Rule>
    <!-- TRUNK -->
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom5;
      &minscale_zoom6;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">0.4</CssParameter>
      </LineSymbolizer>
    </Rule>
   <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom7;
      &minscale_zoom8;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom9;
      &minscale_zoom10;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer>
        <CssParameter name="stroke">&trunk_col;</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
      </LineSymbolizer>
    </Rule>
   <!-- PRIMARY-->
   <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom7;
      &minscale_zoom8;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom9;
      &minscale_zoom9;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">1.2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom10;
      &minscale_zoom10;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer>
        <CssParameter name="stroke">&primary_col;</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <!-- SECONDARY -->
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom9;
      &minscale_zoom10;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer>
        <CssParameter name="stroke">&secondary_col;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <!-- RAIL -->
    <Rule>
      &maxscale_zoom6;
      &minscale_zoom8;
      <Filter>[railway] = 'rail'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">0.6</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom9;
      &minscale_zoom9;
      <Filter>[railway] = 'rail' and not [tunnel]='yes'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom9;
      &minscale_zoom9;
      <Filter>[railway] = 'rail' and [tunnel]='yes'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-dasharray">5,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom8;
      &minscale_zoom9;
      <Filter>[railway] = 'tram' or [railway] = 'light_rail' or [railway] = 'narrow_gauge' or [railway]='funicular'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">#ccc</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom12;
      <Filter>[railway] = 'rail' and not [tunnel]='yes'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom12;
      <Filter>[railway] = 'rail' and [tunnel]='yes'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">5,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom12;
      <Filter>[railway] = 'tram' or [railway] = 'light_rail' or [railway] = 'narrow_gauge' or [railway]='funicular'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>[railway] = 'preserved'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'preserved'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999999</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,1,8,1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>[railway] = 'INT-preserved-ssy'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'INT-preserved-ssy'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#999999</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">0.8</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,1,8,1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='monorail'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#777</CssParameter>
        <CssParameter name="stroke-width">3.0</CssParameter>
        <CssParameter name="stroke-dasharray">2,3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="trams">
    <Rule>
      <Filter>[railway] = 'tram'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">#444</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[railway] = 'tram' and not [bridge]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#444</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[railway] = 'tram' and [bridge]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#444</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="guideways">
<Rule>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer>
        <CssParameter name="stroke">#6666ff</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">8,12</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">#6666ff</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-dasharray">0,11,8,1</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="directions">
    <Rule>
      <Filter>[oneway] = 'yes'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,12,10,152</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,12,9,153</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,18,2,154</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,18,1,155</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[oneway] = '-1'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,12,10,152</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,13,9,152</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,14,2,158</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6c70d5</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">bevel</CssParameter>
        <CssParameter name="stroke-dasharray">0,15,1,158</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="cycleways_sidewalks">
    <Rule>
      <Filter>([cycleway:right] = 'track' or [cycleway] = 'track') and not ([sidewalk] = 'both' or [sidewalk] = 'right')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/ct20r.png" height="20" width="4" type="png" />
    </Rule>
    <Rule>
      <Filter>([cycleway:left] = 'track' or [cycleway] = 'track')  and not ([sidewalk] = 'both' or [sidewalk] = 'left')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/ct20l.png" height="20" width="4" type="png" />
    </Rule>
    <Rule>
      <Filter>([cycleway:right] = 'track' or [cycleway] = 'track') and not ([sidewalk] = 'both' or [sidewalk] = 'right')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/ct17r.png" height="17" width="4" type="png" />
    </Rule>
    <Rule>
      <Filter>([cycleway:left] = 'track' or [cycleway] = 'track') and not ([sidewalk] = 'both' or [sidewalk] = 'left')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/ct17l.png" height="17" width="4" type="png" />
    </Rule>
    <!-- Sidewalk -->
    <Rule>
      <Filter>([sidewalk] = 'right' or [sidewalk] = 'both') and not ([cycleway:right] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/sw20r.png" height="20" width="4" type="png" />
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'left' or [sidewalk] = 'both') and not ([cycleway:left] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/sw20l.png" height="20" width="4" type="png" />
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'right' or [sidewalk] = 'both') and not ([cycleway:right] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/sw17r.png" height="17" width="4" type="png" />
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'left' or [sidewalk] = 'both') and not ([cycleway:left] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/sw17l.png" height="17" width="4" type="png" />
    </Rule>
    <!-- Combined cycleway & sidewalk -->
    <Rule>
      <Filter>([sidewalk] = 'right' or [sidewalk] = 'both') and ([cycleway:right] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/ctsw20r.png" height="20" width="8" type="png" />
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'left' or [sidewalk] = 'both') and ([cycleway:left] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/ctsw20l.png" height="20" width="8" type="png" />
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'right' or [sidewalk] = 'both') and ([cycleway:right] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/ctsw17r.png" height="17" width="8" type="png" />
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'left' or [sidewalk] = 'both') and ([cycleway:left] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/ctsw17l.png" height="17" width="8" type="png" />
    </Rule>
</Style>
<Layer name="tunnels" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom12;">
    <StyleName>tunnels-casing</StyleName>
    <StyleName>tunnels-fill</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway from &prefix;_line where highway in ('motorway','motorway_link','trunk','trunk_link','primary','primary_link','secondary','secondary_link','tertiary','tertiary_link','residential','unclassified') and tunnel in ('yes','true','1') order by z_order) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="turning_circle-casing" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom15;">
    <StyleName>turning_circle-casing</StyleName>    
    <Datasource>
      <Parameter name="table">
      (select distinct on (p.way) p.way as way,l.highway as int_tc_type
       from &prefix;_point p
       join &prefix;_line l
        on ST_DWithin(p.way,l.way,&dwithin_node_way;)
       join (values
        ('tertiary',1),
        ('unclassified',2),
        ('residential',3),
        ('living_street',4),
        ('service',5)
       ) as v (highway,prio)
        on v.highway=l.highway
       where p.highway='turning_circle'
       order by p.way,v.prio
      ) as turning_circle
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="footbikecycle-tunnels" status="on" srs="&osm2pgsql_projection;" clear_label_cache="on" maxzoom="&max_zoom13;">
    <StyleName>footbikecycle-tunnels</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,horse,foot,bicycle from &prefix;_line where highway in ('bridleway','footway','cycleway','path') and tunnel in ('yes','true','1') order by z_order) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="tracks-tunnels" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom14;">
    <StyleName>tracks-tunnels</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,tracktype from &prefix;_line where highway='track' and tunnel in ('yes','true','1')) as tracks
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="highway-area-casing" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom14;">
    <StyleName>highway-area-casing</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,railway from &prefix;_polygon
       where highway in ('residential','unclassified','pedestrian','service','footway','track','path','platform')
          or railway='platform'
       order by z_order,way_area desc) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="minor-roads-casing" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom12;">
    <StyleName>minor-roads-casing-links</StyleName>
    <StyleName>minor-roads-casing</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel,
       case when service in ('parking_aisle','drive-through','driveway') then 'INT-minor'::text else service end as service
       from &prefix;_line
       where highway in ('motorway','motorway_link','trunk','trunk_link','primary','primary_link','secondary','secondary_link','tertiary','tertiary_link','residential','unclassified','road','service','pedestrian','raceway','living_street')
       order by z_order) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="highway-area-fill" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom11;">
    <StyleName>highway-area-fill</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,railway,aeroway from &prefix;_polygon
       where highway in ('residential','unclassified','pedestrian','service','footway','living_street','track','path','platform','services')
          or railway='platform'
          or aeroway in ('runway','taxiway','helipad')
       order by z_order,way_area desc) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="turning_circle-fill" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom15;">
    <StyleName>turning_circle-fill</StyleName>    
    <Datasource>
      <Parameter name="table">
      (select distinct on (p.way) p.way as way,l.highway as int_tc_type
       from &prefix;_point p
       join &prefix;_line l
        on ST_DWithin(p.way,l.way,&dwithin_node_way;)
       join (values
        ('tertiary',1),
        ('unclassified',2),
        ('residential',3),
        ('living_street',4),
        ('service',5)
       ) as v (highway,prio)
        on v.highway=l.highway
       where p.highway='turning_circle'
       order by p.way,v.prio
      ) as turning_circle
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="tracks-notunnel-nobridge" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom14;">
    <StyleName>tracks-notunnel-nobridge</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,tracktype from &prefix;_line where highway='track' and (bridge is null or bridge in ('no','false','0')) and (tunnel is null or tunnel in ('no','false','0'))) as tracks
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="minor-roads-fill" status="on" srs="&osm2pgsql_projection;">
    <StyleName>cycleways_sidewalks</StyleName>
    <StyleName>minor-roads-fill-links</StyleName>
    <StyleName>minor-roads-fill</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,horse,bicycle,foot,construction,aeroway,cycleway,"cycleway:right","cycleway:left",sidewalk,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel,
       case when bridge in ('yes','true','1','viaduct') then 'yes'::text else bridge end as bridge,
       case when railway in ('spur','siding')
              or (railway='rail' and service in ('spur','siding','yard'))
            then 'spur-siding-yard'::text else railway end as railway,
       case when service in ('parking_aisle','drive-through','driveway') then 'INT-minor'::text else service end as service
       from &prefix;_line
       where highway is not null
          or aeroway in ('runway','taxiway')
          or railway in ('light_rail','narrow_gauge','funicular','rail','subway','tram','spur','siding','platform','disused','abandoned','construction','miniature')
       order by z_order) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="roads" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom5;">
    <StyleName>roads</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel,
       case when railway='preserved' and service in ('spur','siding','yard') then 'INT-preserved-ssy'::text else railway end as railway
       from &prefix;_roads
       where highway is not null
          or (railway is not null and railway!='preserved' and (service is null or service not in ('spur','siding','yard')))
          or railway='preserved'
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="waterway-bridges" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom14;">
    <StyleName>waterway-bridges</StyleName>
    <Datasource>
      <Parameter name="table">(select way,name from &prefix;_line where waterway='canal' and bridge in ('yes','true','1','aqueduct') order by z_order) as water</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="access-pre_bridges" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom15;">
    <StyleName>access</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,access,highway,
       case when service in ('parking_aisle','drive-through','driveway') then 'INT-minor'::text end as service
       from &prefix;_line
       where access is not null and highway is not null
         and (bridge is null or bridge not in ('yes','true','1','viaduct'))
      ) as access
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="direction_pre_bridges" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom16;">
     <StyleName>directions</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,
       case when oneway in ('yes','true','1') then 'yes'::text else oneway end as oneway
       from &prefix;_line
       where oneway is not null
         and (highway is not null or railway is not null or waterway is not null)
         and (bridge is null or bridge not in ('yes','true','1','viaduct'))
      ) as directions
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="bridges_layer0" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom12;">
    <StyleName>bridges_casing</StyleName>
    <StyleName>bridges_casing2</StyleName>
    <StyleName>bridges_fill</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,aeroway,horse,bicycle,foot,tracktype,
       case when railway in ('spur','siding')
              or (railway='rail' and service in ('spur','siding','yard'))
            then 'INT-spur-siding-yard'::text else railway end as railway
       from &prefix;_line
       where (highway is not null
              or aeroway in ('runway','taxiway')
              or railway in ('light_rail','subway','narrow_gauge','rail','spur','siding','disused','abandoned','construction'))
         and bridge in ('yes','true','1','viaduct')
         and (layer is null or layer = '0')
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="bridges_access0" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom15;">
    <StyleName>access</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,access,highway,
       case when service in ('parking_aisle','drive-through','driveway') then 'INT-minor'::text end as service
       from &prefix;_line
       where access is not null and highway is not null
         and bridge in ('yes','true','1','viaduct')
         and (layer is null or layer in ('-5','-4','-3','-2','-1','0'))
      ) as access
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="bridges_directions0" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom16;">
     <StyleName>directions</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,
       case when oneway in ('yes','true','1') then 'yes'::text else oneway end as oneway
       from &prefix;_line
       where oneway is not null
         and (highway is not null or railway is not null or waterway is not null)
         and bridge in ('yes','true','1','viaduct')
         and (layer is null or layer in ('-5','-4','-3','-2','-1','0'))
      ) as directions
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="bridges_layer1" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom12;">
    <StyleName>bridges_casing</StyleName>
    <StyleName>bridges_casing2</StyleName>
    <StyleName>bridges_fill</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,aeroway,horse,bicycle,foot,tracktype,
       case when railway in ('spur','siding')
              or (railway='rail' and service in ('spur','siding','yard'))
            then 'INT-spur-siding-yard'::text else railway end as railway
       from &prefix;_line
       where (highway is not null
              or aeroway in ('runway','taxiway')
              or railway in ('light_rail','subway','narrow_gauge','rail','spur','siding','disused','abandoned','construction'))
         and bridge in ('yes','true','1','viaduct')
         and layer = '1'
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="bridges_access1" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom15;">
    <StyleName>access</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,access,highway,
       case when service in ('parking_aisle','drive-through','driveway') then 'INT-minor'::text end as service
       from &prefix;_line
       where access is not null and highway is not null
         and bridge in ('yes','true','1','viaduct')
         and layer = '1'
      ) as access
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="bridges_directions1" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom16;">
     <StyleName>directions</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,
       case when oneway in ('yes','true','1') then 'yes'::text else oneway end as oneway
       from &prefix;_line
       where oneway is not null
         and (highway is not null or railway is not null or waterway is not null)
         and bridge in ('yes','true','1','viaduct')
         and layer = '1'
      ) as directions
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="bridges_layer2" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom12;">
    <StyleName>bridges_casing</StyleName>
	<StyleName>bridges_casing2</StyleName>
    <StyleName>bridges_fill</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,aeroway,horse,bicycle,foot,tracktype,
       case when railway in ('spur','siding')
              or (railway='rail' and service in ('spur','siding','yard'))
            then 'INT-spur-siding-yard'::text else railway end as railway
       from &prefix;_line
       where (highway is not null
              or aeroway in ('runway','taxiway')
              or railway in ('light_rail','subway','narrow_gauge','rail','spur','siding','disused','abandoned','construction'))
         and bridge in ('yes','true','1','viaduct')
         and layer = '2'
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="bridges_access2" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom15;">
    <StyleName>access</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,access,highway,
       case when service in ('parking_aisle','drive-through','driveway') then 'INT-minor'::text end as service
       from &prefix;_line
       where access is not null and highway is not null
         and bridge in ('yes','true','1','viaduct')
         and layer = '2'
      ) as access
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="bridges_directions2" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom16;">
     <StyleName>directions</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,
       case when oneway in ('yes','true','1') then 'yes'::text else oneway end as oneway
       from &prefix;_line
       where oneway is not null
         and (highway is not null or railway is not null or waterway is not null)
         and bridge in ('yes','true','1','viaduct')
         and layer = '2'
      ) as directions
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>


<Layer name="highway-junctions" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom11;">
    <StyleName>highway-junctions</StyleName>
    <Datasource>
     <Parameter name="table">
     (select way,ref,name
      from &prefix;_point
      where highway='motorway_junction'
     ) as junctions
     </Parameter>
     &datasource-settings;
    </Datasource>
</Layer>

