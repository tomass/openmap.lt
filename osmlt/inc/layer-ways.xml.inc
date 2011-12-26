<Style name="turning_circle-casing">
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom16;
      <Filter>[int_tc_type]='tertiary'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-tert-casing.18.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-casing.16.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.16.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-casing.18.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='service'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-casing.14.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.18.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='tertiary'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-tert-casing.24.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-casing.24.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='service'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-casing.16.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.24.png" allow-overlap="true"/>
    </Rule>
</Style>
<Style name="turning_circle-fill">
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom16;
      <Filter>[int_tc_type]='tertiary'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-tert-fill.16.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.14.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-livs-fill.14.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.16.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='service'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.12.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-livs-fill.16.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='tertiary'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-tert-fill.22.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='residential' or [int_tc_type]='unclassified'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.22.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='service'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-uncl-fill.14.png" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[int_tc_type]='living_street'</Filter>
      <PointSymbolizer file="&symbols;/turning_circle-livs-fill.22.png" allow-overlap="true"/>
    </Rule>
</Style>
<Style name="highway-area-casing">
   <Rule>
      <Filter>[highway] = 'residential' or [highway]='unclassified'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="#999" stroke-width="1"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' or [highway]='service' or [highway]='footway' or [highway]='path'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="grey" stroke-width="1"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'track'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="#996600" stroke-width="2"/>
   </Rule>
    <Rule>
      <Filter>[highway] = 'platform' or [railway] = 'platform'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke="grey" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
</Style>
<Style name="highway-area-fill">
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer fill="#ccc"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'residential' or [highway]='unclassified' or [highway]='service'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer fill="#fff"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' or [highway]='footway' or [highway]='path'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer fill="#ededed"/>
   </Rule>   
   <Rule>
      <Filter>[highway] = 'track'</Filter>
      &maxscale_zoom14;
      <PolygonSymbolizer fill="#dfcc66"/>
   </Rule>
    <Rule>
      <Filter>[highway] = 'platform' or [railway] = 'platform'</Filter>
      &maxscale_zoom16;
      <PolygonSymbolizer fill="#bbbbbb" gamma=".65"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom11;
      <PolygonSymbolizer fill="#bbc"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway'</Filter>
      &maxscale_zoom13;
      <PolygonSymbolizer fill="#bbc"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'helipad'</Filter>
      &maxscale_zoom16;
      <PolygonSymbolizer fill="#bbc"/>
    </Rule>
</Style>
<Style name="highway-junctions">
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom11;
      <TextSymbolizer fontset-name="oblique-fonts" size="9" fill="#6666ff" halo-radius="1" wrap-width="12" minimum-distance="2">[ref]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom14;
      <TextSymbolizer fontset-name="oblique-fonts" size="9" fill="#6666ff" halo-radius="1" wrap-width="12" minimum-distance="2">[ref]</TextSymbolizer>
      <TextSymbolizer fontset-name="oblique-fonts" size="8" fill="#6666ff" halo-radius="1" wrap-width="2" dy="-8" minimum-distance="2" wrap-character=";">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <TextSymbolizer fontset-name="oblique-fonts" size="12" fill="#6666ff" halo-radius="1" wrap-width="12" minimum-distance="2">[ref]</TextSymbolizer>
      <TextSymbolizer fontset-name="oblique-fonts" size="11" fill="#6666ff" halo-radius="1" wrap-width="2" dy="-10" minimum-distance="2" wrap-character=";">[name]</TextSymbolizer>
    </Rule>
</Style>
<Style name="tunnels-casing">
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="3" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="6.5" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="10" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="13" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="4" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="8" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="11" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="14" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="4" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="8" stroke-dasharray="4,2"/>
    </Rule>
   <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="11" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="14" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="4" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="10" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="12" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="17" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="6" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="7.5" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#999" stroke-width="3" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="#999" stroke-width="4.5" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#999" stroke-width="8" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer stroke="#999" stroke-width="11" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="11" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="16" stroke-dasharray="4,2"/>
    </Rule>
</Style>
<Style name="tunnels-fill">
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="8.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="11" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="6.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>    
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="9" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="12" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&primary_col;" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&primary_col;" stroke-width="6.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&primary_col;" stroke-width="9" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&primary_col;" stroke-width="12" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="8" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="10" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="14" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="6.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#fff" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="#fff" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="9.4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="13" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#fff" stroke-width="6.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer stroke="#fff" stroke-width="9.4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="#fff" stroke-width="13" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
</Style>
<Style name="minor-roads-casing-links">
    <Rule>
      <Filter>[highway]='raceway'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="pink" stroke-width="1.2" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway]='raceway'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="pink" stroke-width="4" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway]='raceway'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer stroke="pink" stroke-width="7" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway]='motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="1.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway]='motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="4.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway]='motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="8" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway]='motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="11" stroke-linejoin="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="3" stroke-linejoin="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="7.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="11.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="16" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;      
      &minscale_zoom12;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="3" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;      
      &minscale_zoom14;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="7.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;      
      &minscale_zoom16;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="11.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;      
      &minscale_zoom18;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="16" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="8.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="11.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="16" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="7.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="11" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="16" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
</Style>
<Style name="minor-roads-casing">
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="3" stroke-linejoin="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="3" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;      
      &minscale_zoom12;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="3" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="6.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="7.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;      
      &minscale_zoom14;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="7.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="8.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="10" stroke-linejoin="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="11.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;      
      &minscale_zoom16;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="11.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="11.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&motorway_cas_col;" stroke-width="13" stroke-linejoin="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&trunk_cas_col;" stroke-width="16" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;      
      &minscale_zoom18;
      <LineSymbolizer stroke="&primary_cas_col;" stroke-width="16" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&secondary_cas_col;" stroke-width="16" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
   
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road') and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#999" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="7.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road') and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="#999" stroke-width="4.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road') and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#bbb" stroke-width="8" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road') and not [tunnel]='yes'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer stroke="#bbb" stroke-width="11" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="11" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([highway] = 'tertiary') and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&tertiary_cas_col;" stroke-width="16" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road') and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="#bbb" stroke-width="16" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    
    <Rule>
      <Filter>[highway] = 'service' and not ([service]='INT-minor' or [tunnel]='yes')</Filter>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer stroke="#999" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service' and [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer stroke="#999" stroke-width="2.5" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service' and not ([service]='INT-minor' or [tunnel]='yes')</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer stroke="#999" stroke-width="7" stroke-linejoin="round" stroke-linecap="round"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'service' and [tunnel]='yes'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer stroke="#999" stroke-width="7" stroke-dasharray="4,2"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'service' and [service]='INT-minor'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer stroke="#999" stroke-width="4" stroke-linejoin="round" stroke-linecap="round"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="grey" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="grey" stroke-width="2" stroke-dasharray="4,2"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="grey" stroke-width="3.6" stroke-linejoin="round" stroke-linecap="round"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="grey" stroke-width="3.6" stroke-dasharray="4,2"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="grey" stroke-width="6.5" stroke-linejoin="round" stroke-linecap="round"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="grey" stroke-width="6.5" stroke-dasharray="4,2"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and not [tunnel]='yes'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke="grey" stroke-width="9" stroke-linejoin="round" stroke-linecap="round"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian' and [tunnel]='yes'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke="grey" stroke-width="9" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom12;
      &minscale_zoom13;
      <LineSymbolizer stroke="white" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="white" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
   <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer stroke="white" stroke-width="9" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
   <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="white" stroke-width="14.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>

</Style>
<Style name="minor-roads-fill-links">
    <Rule>
      <Filter>[highway]='motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="0.5"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="6.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="9" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="7" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="11" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="15.5" stroke-linejoin="round" stroke-linecap="round"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&primary_col;" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&primary_col;" stroke-width="7" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&primary_col;" stroke-width="11" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary_link' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&primary_col;" stroke-width="15.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
   <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="8" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="11" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="15.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="4.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="9.4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary_link' and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="13" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
</Style>
<Style name="minor-roads-fill"> 
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>([highway] = 'proposed' or [highway]='construction') and not [construction] != ''</Filter>
      <LineSymbolizer stroke="#9cc" stroke-width="2"/>
      <LineSymbolizer stroke="white" stroke-width="2" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='motorway' or [construction]='motorway_link')</Filter>
      <LineSymbolizer stroke="#809bc0" stroke-width="2"/>
      <LineSymbolizer stroke="white" stroke-width="2" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='trunk' or [construction]='trunk_link')</Filter>
      <LineSymbolizer stroke="#a9dba9" stroke-width="2"/>
      <LineSymbolizer stroke="white" stroke-width="2" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='primary' or [construction]='primary_link')</Filter>
      <LineSymbolizer stroke="#ec989a" stroke-width="2"/>
      <LineSymbolizer stroke="white" stroke-width="2" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='secondary' or [construction]='secondary_link')</Filter>
      <LineSymbolizer stroke="#fed7a5" stroke-width="2"/>
      <LineSymbolizer stroke="white" stroke-width="2" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and not [construction] != ''</Filter>
      <LineSymbolizer stroke="#9cc" stroke-width="4"/>
      <LineSymbolizer stroke="white" stroke-width="3.5" stroke-dasharray="6,4"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='motorway' or [construction]='motorway_link')</Filter>
      <LineSymbolizer stroke="#809bc0" stroke-width="4"/>
      <LineSymbolizer stroke="white" stroke-width="3.5" stroke-dasharray="6,4"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='trunk' or [construction]='trunk_link')</Filter>
      <LineSymbolizer stroke="#a9dba9" stroke-width="4"/>
      <LineSymbolizer stroke="white" stroke-width="3.5" stroke-dasharray="6,4"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='primary' or [construction]='primary_link')</Filter>
      <LineSymbolizer stroke="#ec989a" stroke-width="4"/>
      <LineSymbolizer stroke="white" stroke-width="3.5" stroke-dasharray="6,4"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='secondary' or [construction]='secondary_link')</Filter>
      <LineSymbolizer stroke="#fed7a5" stroke-width="4"/>
      <LineSymbolizer stroke="white" stroke-width="3.5" stroke-dasharray="6,4"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='tertiary' or [construction]='tertiary_link')</Filter>
      <LineSymbolizer stroke="#ffffb3" stroke-width="4"/>
      <LineSymbolizer stroke="white" stroke-width="3.5" stroke-dasharray="6,4"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='residential' or [construction]='unclassified' or [construction]='living_street' or [construction]='service')</Filter>
      <LineSymbolizer stroke="#aaa" stroke-width="4"/>
      <LineSymbolizer stroke="white" stroke-width="3.5" stroke-dasharray="6,4"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and not [construction] != ''</Filter>
      <LineSymbolizer stroke="#9cc" stroke-width="8"/>
      <LineSymbolizer stroke="white" stroke-width="7" stroke-dasharray="8,6"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='motorway' or [construction]='motorway_link')</Filter>
      <LineSymbolizer stroke="#809bc0" stroke-width="8"/>
      <LineSymbolizer stroke="white" stroke-width="7" stroke-dasharray="8,6"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='trunk' or [construction]='trunk_link')</Filter>
      <LineSymbolizer stroke="#a9dba9" stroke-width="8"/>
      <LineSymbolizer stroke="white" stroke-width="7" stroke-dasharray="8,6"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='primary' or [construction]='primary_link')</Filter>
      <LineSymbolizer stroke="#ec989a" stroke-width="8"/>
      <LineSymbolizer stroke="white" stroke-width="7" stroke-dasharray="8,6"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='secondary' or [construction]='secondary_link')</Filter>
      <LineSymbolizer stroke="#fed7a5" stroke-width="8"/>
      <LineSymbolizer stroke="white" stroke-width="7" stroke-dasharray="8,6"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='tertiary' or [construction]='tertiary_link')</Filter>
      <LineSymbolizer stroke="#ffffb3" stroke-width="8"/>
      <LineSymbolizer stroke="white" stroke-width="7" stroke-dasharray="8,6"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and ([construction]='residential' or [construction]='unclassified' or [construction]='living_street' or [construction]='service')</Filter>
      <LineSymbolizer stroke="#aaa" stroke-width="8"/>
      <LineSymbolizer stroke="white" stroke-width="7" stroke-dasharray="8,6"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>([highway] = 'proposed' or [highway]='construction') and [construction]='cycleway'</Filter>
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#69f" stroke-width="1.2" stroke-dasharray="2,6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="7" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="10" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="10" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="15" stroke-linejoin="round" stroke-linecap="round"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom11;
      &minscale_zoom12;
      <LineSymbolizer stroke="&primary_col;" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&primary_col;" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule> 
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&primary_col;" stroke-width="10" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&primary_col;" stroke-width="15" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
   <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="7" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="10" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="15" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'rail' and [tunnel] = 'yes'</Filter>
      <LineSymbolizer stroke="#ffffff" stroke-width="3" stroke-linejoin="round" stroke-dasharray="1,9"/>
      <LineSymbolizer stroke="#fdfdfd" stroke-width="3" stroke-linejoin="round" stroke-dasharray="0,1,1,8"/>
      <LineSymbolizer stroke="#ececec" stroke-width="3" stroke-linejoin="round" stroke-dasharray="0,2,1,7"/>
      <LineSymbolizer stroke="#cacaca" stroke-width="3" stroke-linejoin="round" stroke-dasharray="0,3,1,6"/>
      <LineSymbolizer stroke="#afafaf" stroke-width="3" stroke-linejoin="round" stroke-dasharray="0,4,1,5"/>
      <LineSymbolizer stroke="#a1a1a1" stroke-width="3" stroke-linejoin="round" stroke-dasharray="0,5,1,4"/>
      <LineSymbolizer stroke="#9b9b9b" stroke-width="3" stroke-linejoin="round" stroke-dasharray="0,6,1,3"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway] = 'disused' or [railway] = 'abandoned' or [railway]='construction') and not [highway] != ''</Filter>
      <LineSymbolizer stroke="grey" stroke-width="2" stroke-linejoin="round" stroke-dasharray="2,4"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom13;
      <Filter>[railway] = 'rail' and not [tunnel] = 'yes'</Filter>
      <LineSymbolizer stroke="#999999" stroke-width="3" stroke-linejoin="round"/>
      <LineSymbolizer stroke="white" stroke-width="1" stroke-linejoin="round" stroke-dasharray="8,12"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway] = 'rail' and not [tunnel]='yes'</Filter>
      <LineSymbolizer stroke="#999999" stroke-width="3" stroke-linejoin="round"/>
      <LineSymbolizer stroke="white" stroke-width="1" stroke-linejoin="round" stroke-dasharray="0,11,8,1"/>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom12;
      <Filter>[railway] = 'spur-siding-yard'</Filter>
      <LineSymbolizer stroke="#aaa" stroke-width="1" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'spur-siding-yard' and [tunnel] = 'yes'</Filter>
      <LineSymbolizer stroke="#ffffff" stroke-width="2" stroke-linejoin="round" stroke-dasharray="1,9"/>
      <LineSymbolizer stroke="#fdfdfd" stroke-width="2" stroke-linejoin="round" stroke-dasharray="0,1,1,8"/>
      <LineSymbolizer stroke="#ececec" stroke-width="2" stroke-linejoin="round" stroke-dasharray="0,2,1,7"/>
      <LineSymbolizer stroke="#cacaca" stroke-width="2" stroke-linejoin="round" stroke-dasharray="0,3,1,6"/>
      <LineSymbolizer stroke="#afafaf" stroke-width="2" stroke-linejoin="round" stroke-dasharray="0,4,1,5"/>
      <LineSymbolizer stroke="#a1a1a1" stroke-width="2" stroke-linejoin="round" stroke-dasharray="0,5,1,4"/>
      <LineSymbolizer stroke="#9b9b9b" stroke-width="2" stroke-linejoin="round" stroke-dasharray="0,6,1,3"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'spur-siding-yard' and not [tunnel] = 'yes'</Filter>
      <LineSymbolizer stroke="#999999" stroke-width="2" stroke-linejoin="round"/>
      <LineSymbolizer stroke="white" stroke-width="0.8" stroke-linejoin="round" stroke-dasharray="0,8,11,1"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway]='narrow_gauge' or [railway]='funicular') and not [tunnel]='yes'</Filter>
      <LineSymbolizer stroke="#666" stroke-width="2"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway]='narrow_gauge' or [railway]='funicular') and [tunnel]='yes'</Filter>
      <LineSymbolizer stroke="#666" stroke-width="5" stroke-dasharray="5,3"/>
      <LineSymbolizer stroke="#fff" stroke-width="4"/>
      <LineSymbolizer stroke="#aaa" stroke-width="1.5"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom18;
      <Filter>[railway]='miniature'</Filter>
      <LineSymbolizer stroke="#999" stroke-width="1.2"/>
      <LineSymbolizer stroke="#999" stroke-width="3" stroke-dasharray="1,10"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[railway]='tram' and [tunnel]='yes'</Filter>
      <LineSymbolizer stroke="#444" stroke-width="1" stroke-dasharray="5,3"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom18;
      <Filter>[railway]='tram' and [tunnel]='yes'</Filter>
      <LineSymbolizer stroke="#444" stroke-width="2" stroke-dasharray="5,3"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway]='light_rail' and [tunnel] = 'yes'</Filter>
      <LineSymbolizer stroke="#666" stroke-width="2" stroke-dasharray="5,3"/>
    </Rule>
     <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway]='light_rail' and not [tunnel] = 'yes'</Filter>
      <LineSymbolizer stroke="#666" stroke-width="2"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom18;
      <Filter>[railway]='subway' and [tunnel] = 'yes'</Filter>
      <LineSymbolizer stroke="#999" stroke-width="2" stroke-dasharray="5,3"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom18;
      <Filter>[railway]='subway' and not [tunnel] = 'yes'</Filter>
      <LineSymbolizer stroke="#999" stroke-width="2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom10;
      &minscale_zoom12;
      <LineSymbolizer stroke="#bbb" stroke-width="1"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#ddd" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="#ddd" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#ddd" stroke-width="6.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer stroke="#ddd" stroke-width="9.4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="#ddd" stroke-width="13" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#fff" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="#fff" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#fff" stroke-width="6.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer stroke="#fff" stroke-width="9.4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'unclassified') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="#fff" stroke-width="13" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom12;
      &minscale_zoom13;
      <LineSymbolizer stroke="#ccc" stroke-width="1.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="#ccc" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#ccc" stroke-width="4.7" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer stroke="#ccc" stroke-width="7.4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'living_street'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="#ccc" stroke-width="13" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="4.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="9.4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' and not [tunnel]='yes'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="13" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service' and not [service]='INT-minor'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#bbbbbb" stroke-width="1"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service' and not [service]='INT-minor'</Filter>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer stroke="white" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'service' and not [service]='INT-minor'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer stroke="white" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'service' and [service]='INT-minor'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer stroke="#fff" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
   </Rule>
   <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#ededed" stroke-width="1.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="#ededed" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#ededed" stroke-width="5.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke="#ededed" stroke-width="8" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
       <Filter>[highway] = 'platform' or [railway] = 'platform'</Filter>
       &maxscale_zoom16;
       <LineSymbolizer stroke="grey" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'steps'</Filter>
      &maxscale_zoom15;
      <LineSymbolizer stroke="salmon" stroke-width="5.0" stroke-dasharray="2,1"/>
    </Rule>  
    <Rule>
      <Filter>([highway] = 'bridleway' or ([highway] = 'path' and [horse] = 'designated')) and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer stroke="#fff" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="green" stroke-width="1.2" stroke-dasharray="4,2"/>
    </Rule>  
    <Rule>
      <Filter>([highway] = 'footway' or ([highway] = 'path' and [foot] = 'designated' and not [bicycle] = 'designated')) and not [tunnel]='yes'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer stroke="#fff" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="salmon" stroke-width="1.5" stroke-dasharray="1,3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>   
    <Rule>
      <Filter>[highway] = 'path' and not ([bicycle] = 'designated' or [foot] = 'designated' or [horse] = 'designated') and not [tunnel] = 'yes'</Filter> 
      &maxscale_zoom13;
      <LineSymbolizer stroke="white" stroke-width="1.0" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
     <LineSymbolizer stroke="black" stroke-width="0.5" stroke-dasharray="6,3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
       <Filter>[highway] = 'platform' or [railway] = 'platform'</Filter>
       &maxscale_zoom16;
       <LineSymbolizer stroke="#bbbbbb" stroke-width="4" stroke-linejoin="round" stroke-linecap="round"/>
     </Rule>
    <Rule>
      <Filter>[highway] = 'steps'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="#fff" stroke-width="6" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="salmon" stroke-width="2.0" stroke-dasharray="1,3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated' and not [foot] = 'designated')) and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="blue" stroke-width="1.2" stroke-dasharray="1,3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([highway] = 'path' and [bicycle] = 'designated' and [foot] = 'designated') and not [tunnel] = 'yes'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="blue" stroke-width="1.2" stroke-dasharray="1,3,0,4" stroke-linejoin="round" stroke-linecap="round"/>
      <LineSymbolizer stroke="salmon" stroke-width="1.2" stroke-dasharray="0,4,1,3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'byway'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer stroke="white" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#ffcc00" stroke-width="1.5" stroke-dasharray="3,4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'track'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="white" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#996600" stroke-width="1.2" stroke-dasharray="3,4" stroke-linejoin="round" stroke-linecap="round"/>
     </Rule>    
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#fff" stroke-width="3.5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#debd9c" stroke-width="2.5" stroke-dasharray="2,4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="#fff" stroke-width="5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#debd9c" stroke-width="4" stroke-dasharray="4,6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer stroke="#bbc" stroke-width="2"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="#bbc" stroke-width="4"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#bbc" stroke-width="7"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'runway' and not [bridge]='yes'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="#bbc" stroke-width="18"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway'</Filter>
      &maxscale_zoom11;
      &minscale_zoom13;
      <LineSymbolizer stroke="#bbc" stroke-width="1"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway' and not [bridge]='yes'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="#bbc" stroke-width="4"/>
    </Rule>
    <Rule>
      <Filter>[aeroway] = 'taxiway' and not [bridge]='yes'</Filter>
      &maxscale_zoom15;
      <LineSymbolizer stroke="#bbc" stroke-width="6"/>
    </Rule>
    <!--Rule>
      <ElseFilter/>
      &maxscale_zoom9;
      &minscale_zoom18;
      <LineSymbolizer stroke="black" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-dasharray="4,4"/>
    </Rule-->
</Style>
<Style name="access">
     <Rule>
      <Filter>[access] = 'permissive' and ([highway]='unclassified' or [highway]='residential' or [highway]='footway')</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#cf9" stroke-width="6" stroke-dasharray="6,8" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
     <Rule>
      <Filter>[access] = 'permissive' and ([highway] = 'service' and not [service] = 'INT-minor')</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#cf9" stroke-width="3" stroke-dasharray="6,8" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
     <Rule>
      <Filter>[access] = 'permissive' and ([highway]='unclassified' or [highway]='residential' or [highway]='footway' or [highway]='service')</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke="#cf9" stroke-width="6" stroke-dasharray="6,8" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[access]='destination' and ([highway]='unclassified' or [highway]='residential')</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#c2e0ff" stroke-width="6" stroke-dasharray="6,8" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[access]='destination' and ([highway] = 'service' and not [service] = 'INT-minor')</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#c2e0ff" stroke-width="3" stroke-dasharray="6,8" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[access]='destination' and ([highway]='unclassified' or [highway]='residential' or [highway]='service')</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke="#c2e0ff" stroke-width="6" stroke-dasharray="6,8" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([access] = 'private' or [access] = 'no') and not [highway] = 'service'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#efa9a9" stroke-width="6" stroke-dasharray="6,8" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>([access] = 'private' or [access] = 'no') and ([highway] = 'service' and not [service] = 'INT-minor')</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#efa9a9" stroke-width="3" stroke-dasharray="6,8" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[access] = 'private' or [access] = 'no'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke="#efa9a9" stroke-width="6" stroke-dasharray="6,8" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
</Style>
<Style name="footbikecycle-tunnels">
    <Rule>
      <Filter>[highway] = 'bridleway' or ([highway] = 'path' and [horse] = 'designated')</Filter>
      &maxscale_zoom13;
      <LineSymbolizer stroke="grey" stroke-width="5" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="#fff" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
      <LineSymbolizer stroke="green" stroke-width="2" stroke-dasharray="4,2" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'footway' or ([highway] = 'path' and [foot] = 'designated')</Filter>
      &maxscale_zoom13;
      <LineSymbolizer stroke="grey" stroke-width="5.5" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="#fff" stroke-width="3.5" stroke-linejoin="round" stroke-linecap="round"/>
      <LineSymbolizer stroke="salmon" stroke-width="2.5" stroke-dasharray="1,3" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'path' and not ([bicycle] = 'designated' or [foot] = 'designated' or [horse] = 'designated')</Filter>
      &maxscale_zoom13;
      <LineSymbolizer stroke="grey" stroke-width="5.5" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="1.0" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
     <LineSymbolizer stroke="black" stroke-width="0.5" stroke-dasharray="6,3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
      &maxscale_zoom13;
      <LineSymbolizer stroke="grey" stroke-width="5" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
      <LineSymbolizer stroke="blue" stroke-width="2" stroke-dasharray="1,3" stroke-opacity="0.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
</Style>
<Style name="tracks-notunnel-nobridge">
    <Rule>
      <Filter>[tracktype]='grade1'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3.5" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#b37700" stroke-width="2" stroke-opacity="0.7"/>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade2'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#a87000" stroke-width="1.5" stroke-dasharray="9,4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.8"/>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade3'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#996600" stroke-width="1.5" stroke-dasharray="3,4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.8"/>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade4'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#996600" stroke-width="2" stroke-dasharray="4,7,1,5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.8"/>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade5'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#996600" stroke-width="2" stroke-dasharray="1,5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.8"/>
    </Rule>
    <Rule>
      <ElseFilter/>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#996600" stroke-width="1.5" stroke-dasharray="3,4" stroke-linejoin="round" stroke-linecap="round"/>
     </Rule>    
</Style>
<Style name="tracks-tunnels">
    <Rule>
     <Filter>[tracktype]='grade1'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer stroke="grey" stroke-width="5" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="3.5"/>
      <LineSymbolizer stroke="#b37700" stroke-width="2" stroke-opacity="0.5"/>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade2'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer stroke="grey" stroke-width="4.5" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
      <LineSymbolizer stroke="#a87000" stroke-width="1.5" stroke-dasharray="3,4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.5"/>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade3'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer stroke="grey" stroke-width="4.5" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="3.5" stroke-linejoin="round" stroke-linecap="round"/>
      <LineSymbolizer stroke="#996600" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.5"/>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade4'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer stroke="grey" stroke-width="4.5" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
      <LineSymbolizer stroke="#996600" stroke-width="2" stroke-dasharray="4,7,1,5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.5"/>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade5'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer stroke="grey" stroke-width="4.5" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
      <LineSymbolizer stroke="#996600" stroke-width="2" stroke-dasharray="1,5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.5"/>
    </Rule>
    <Rule>
      <ElseFilter/>
      &maxscale_zoom14;
     <LineSymbolizer stroke="grey" stroke-width="4.5" stroke-dasharray="4,2"/>
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
      <LineSymbolizer stroke="#996600" stroke-width="1.5" stroke-dasharray="3,4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.5"/>
     </Rule>    
</Style>
<Style name="waterway-bridges">
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom16;
      <LineSymbolizer stroke="#000" stroke-width="7" stroke-linejoin="round"/>
      <LineSymbolizer stroke="#b5d0d0" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#6699cc" halo-radius="1" placement="line">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="#000" stroke-width="11" stroke-linejoin="round"/>
      <LineSymbolizer stroke="#b5d0d0" stroke-width="10" stroke-linejoin="round" stroke-linecap="round"/>
      <TextSymbolizer fontset-name="book-fonts" size="9" fill="#6699cc" halo-radius="1" placement="line">[name]</TextSymbolizer>
    </Rule>
</Style>
<Style name="bridges_casing">
     <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
        <LineSymbolizer stroke="#506077" stroke-width="3"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
        <LineSymbolizer stroke="black" stroke-width="6.5"/>
    </Rule>    
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
        <LineSymbolizer stroke="black" stroke-width="9"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
        <LineSymbolizer stroke="black" stroke-width="12"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
        <LineSymbolizer stroke="#477147" stroke-width="4"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
        <LineSymbolizer stroke="black" stroke-width="8"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
        <LineSymbolizer stroke="black" stroke-width="11"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
        <LineSymbolizer stroke="black" stroke-width="16"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
        <LineSymbolizer stroke="#8d4346" stroke-width="4"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
        <LineSymbolizer stroke="black" stroke-width="8"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
        <LineSymbolizer stroke="black" stroke-width="11"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
        <LineSymbolizer stroke="black" stroke-width="16"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway]='secondary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="black" stroke-width="10"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway]='secondary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="black" stroke-width="12"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway]='secondary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="black" stroke-width="16"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="black" stroke-width="7.5"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="black" stroke-width="11"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="black" stroke-width="16"/>
    </Rule>
    <Rule>

      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="black" stroke-width="4.5"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="black" stroke-width="9"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer stroke="black" stroke-width="11"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified' or [highway] = 'road'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="black" stroke-width="16"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service'</Filter>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer stroke="black" stroke-width="3"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer stroke="black" stroke-width="8"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="black" stroke-width="2.2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="black" stroke-width="3.8"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="black" stroke-width="7"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke="black" stroke-width="9.5"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='subway'</Filter>
      <LineSymbolizer stroke="black" stroke-width="5.5"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='light_rail' or [railway]='narrow_gauge'</Filter>
      <LineSymbolizer stroke="#555" stroke-width="5.5"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="black" stroke-width="5"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="black" stroke-width="6.5"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'bridleway' or ([highway] = 'path' and [horse] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="black" stroke-width="5.5"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'footway' or ([highway] = 'path' and [foot] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="black" stroke-width="6"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'path' and not ([bicycle] = 'designated' or [foot] = 'designated' or [horse] = 'designated')</Filter>
      &maxscale_zoom14;  
      <LineSymbolizer stroke="black" stroke-width="4"/>      
    </Rule>         
    <Rule>
      <Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="black" stroke-width="5.5"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'byway'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="black" stroke-width="5.5"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'rail'</Filter>
      <LineSymbolizer stroke="black" stroke-width="6.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'INT-spur-siding-yard'</Filter>
      <LineSymbolizer stroke="black" stroke-width="5.7" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway] = 'disused' or [railway] = 'abandoned' or [railway]='construction') and not [highway] != ''</Filter>
      <LineSymbolizer stroke="black" stroke-width="6"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade1'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer stroke="black" stroke-width="5"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade2'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer stroke="black" stroke-width="4.5"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade3'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer stroke="black" stroke-width="4.5"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade4'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer stroke="black" stroke-width="4.5"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade5'</Filter>
     &maxscale_zoom14;
     <LineSymbolizer stroke="black" stroke-width="4.5"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'track' and not [tracktype] != ''</Filter>
      &maxscale_zoom14;
     <LineSymbolizer stroke="black" stroke-width="4.5"/>
     </Rule>    
</Style>
<Style name="bridges_casing2">
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='subway'</Filter>
      <LineSymbolizer stroke="white" stroke-width="4"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='light_rail' or [railway]='narrow_gauge'</Filter>
      <LineSymbolizer stroke="white" stroke-width="4"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="white" stroke-width="4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'bridleway' or ([highway] = 'path' and [horse] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'footway' or ([highway] = 'path' and [foot] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="4.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'path' and not ([bicycle] = 'designated' or [foot] = 'designated' or [horse] = 'designated')</Filter>
      &maxscale_zoom14;  
      <LineSymbolizer stroke="white" stroke-width="2.5" stroke-linejoin="round" stroke-linecap="round"/>       
    </Rule>         
    <Rule>
      <Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'byway'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'rail'</Filter>
      <LineSymbolizer stroke="white" stroke-width="5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'INT-spur-siding-yard'</Filter>
      <LineSymbolizer stroke="white" stroke-width="4" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway] = 'disused' or [railway] = 'abandoned' or [railway]='construction') and not [highway] != ''</Filter>
      <LineSymbolizer stroke="white" stroke-width="4.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade1'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3.5"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade2'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade3'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade4'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade5'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'track' and not [tracktype] != ''</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
     </Rule>    
</Style>
<Style name="bridges_fill">
     <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>   
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="5.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>   
    <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="7.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
   <Rule>
      <Filter>[highway] = 'motorway' or [highway]='motorway_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="10" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="7" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="9.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway]='trunk_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="14.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer stroke="&primary_col;" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&primary_col;" stroke-width="7" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>   
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&primary_col;" stroke-width="9.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway]='primary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&primary_col;" stroke-width="14.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="9" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="10.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>  
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="14.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="9.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'tertiary' or [highway]='tertiary_link'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="&tertiary_col;" stroke-width="14" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="#ddd" stroke-width="3.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="#ddd" stroke-width="9.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'road'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="#ddd" stroke-width="14" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="white" stroke-width="3.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
   <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="white" stroke-width="7.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'</Filter>
      &maxscale_zoom16;
      &minscale_zoom16;
      <LineSymbolizer stroke="white" stroke-width="9.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="white" stroke-width="14" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service'</Filter>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer stroke="white" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'service'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer stroke="white" stroke-width="6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#ededed" stroke-width="1.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom14;
      &minscale_zoom14;
      <LineSymbolizer stroke="#ededed" stroke-width="3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom15;
      &minscale_zoom15;
      <LineSymbolizer stroke="#ededed" stroke-width="5.5" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'pedestrian'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke="#ededed" stroke-width="8" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='subway'</Filter>
      <LineSymbolizer stroke="#999" stroke-width="2"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='light_rail' or [railway]='narrow_gauge'</Filter>
      <LineSymbolizer stroke="#666" stroke-width="2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#debd9c" stroke-width="3" stroke-dasharray="2,4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'unsurfaced'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="#debd9c" stroke-width="4" stroke-dasharray="4,6" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'bridleway' or ([highway] = 'path' and [horse] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="green" stroke-width="1.5" stroke-dasharray="4,2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'footway' or ([highway] = 'path' and [foot] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="salmon" stroke-width="2" stroke-dasharray="1,3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'path' and not ([bicycle] = 'designated' or [foot] = 'designated' or [horse] = 'designated')</Filter>
      &maxscale_zoom14;  
      <LineSymbolizer stroke="black" stroke-width="0.5" stroke-dasharray="6,3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>         
    <Rule>
      <Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="blue" stroke-width="1.5" stroke-dasharray="1,3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'byway'</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="#ffcc00" stroke-width="1.5" stroke-dasharray="3,4" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom13;
      <Filter>[railway] = 'rail'</Filter>
      <LineSymbolizer stroke="#999999" stroke-width="3" stroke-linejoin="round"/>
      <LineSymbolizer stroke="white" stroke-width="1" stroke-linejoin="round" stroke-dasharray="8,12"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway] = 'rail'</Filter>
      <LineSymbolizer stroke="#999999" stroke-width="3" stroke-linejoin="round"/>
      <LineSymbolizer stroke="white" stroke-width="1" stroke-linejoin="round" stroke-dasharray="0,11,8,1"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'INT-spur-siding-yard'</Filter>
      <LineSymbolizer stroke="#999999" stroke-width="2" stroke-linejoin="round"/>
      <LineSymbolizer stroke="white" stroke-width="0.8" stroke-linejoin="round" stroke-dasharray="0,8,11,1"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>([railway] = 'disused' or [railway] = 'abandoned' or [railway]='construction') and not [highway] != ''</Filter>
      <LineSymbolizer stroke="grey" stroke-width="2" stroke-linejoin="round" stroke-dasharray="2,4"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade1'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer stroke="#b37700" stroke-width="2" stroke-opacity="0.7"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade2'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer stroke="#a87000" stroke-width="1.5" stroke-dasharray="3,4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.8"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade3'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer stroke="#996600" stroke-width="2" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.7"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade4'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer stroke="#996600" stroke-width="2" stroke-dasharray="4,7,1,5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.8"/>
    </Rule>
    <Rule>
     <Filter>[highway] = 'track' and [tracktype] = 'grade5'</Filter>
     &maxscale_zoom14;
      <LineSymbolizer stroke="#996600" stroke-width="2" stroke-dasharray="1,5" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.8"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'track' and not [tracktype] != ''</Filter>
      &maxscale_zoom14;
      <LineSymbolizer stroke="#996600" stroke-width="1.5" stroke-dasharray="3,4" stroke-linejoin="round" stroke-linecap="round"/>
     </Rule>    
</Style>
<Style name="roads">
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom5;
      &minscale_zoom6;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="0.5"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom7;
      &minscale_zoom8;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="1"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom9;
      &minscale_zoom9;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="1.4"/>
    </Rule>
   <Rule>
     <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom10;
      &minscale_zoom10;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="2"/>
   </Rule>
   <Rule>
     <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer stroke="&motorway_col;" stroke-width="2.5"/>
   </Rule>
    <!-- TRUNK -->
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom5;
      &minscale_zoom6;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="0.4"/>
    </Rule>
   <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom7;
      &minscale_zoom8;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="1"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom9;
      &minscale_zoom10;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer stroke="&trunk_col;" stroke-width="2.5"/>
    </Rule>
   <!-- PRIMARY-->
   <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom7;
      &minscale_zoom8;
      <LineSymbolizer stroke="&primary_col;" stroke-width="0.5"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom9;
      &minscale_zoom9;
      <LineSymbolizer stroke="&primary_col;" stroke-width="1.2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom10;
      &minscale_zoom10;
      <LineSymbolizer stroke="&primary_col;" stroke-width="2"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link'</Filter>
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer stroke="&primary_col;" stroke-width="2.5"/>
    </Rule>
    <!-- SECONDARY -->
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom9;
      &minscale_zoom10;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="1"/>
    </Rule>
    <Rule>
      <Filter>[highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer stroke="&secondary_col;" stroke-width="2"/>
    </Rule>
    <!-- RAIL -->
    <Rule>
      &maxscale_zoom6;
      &minscale_zoom8;
      <Filter>[railway] = 'rail'</Filter>
       <LineSymbolizer stroke="#aaa" stroke-width="0.6"/>
    </Rule>
    <Rule>
      &maxscale_zoom9;
      &minscale_zoom9;
      <Filter>[railway] = 'rail' and not [tunnel]='yes'</Filter>
       <LineSymbolizer stroke="#aaa" stroke-width="1"/>
    </Rule>
    <Rule>
      &maxscale_zoom9;
      &minscale_zoom9;
      <Filter>[railway] = 'rail' and [tunnel]='yes'</Filter>
       <LineSymbolizer stroke="#aaa" stroke-width="1" stroke-dasharray="5,2"/>
    </Rule>
    <Rule>
      &maxscale_zoom8;
      &minscale_zoom9;
      <Filter>[railway] = 'tram' or [railway] = 'light_rail' or [railway] = 'narrow_gauge' or [railway]='funicular'</Filter>
       <LineSymbolizer stroke="#ccc" stroke-width="1"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom12;
      <Filter>[railway] = 'rail' and not [tunnel]='yes'</Filter>
       <LineSymbolizer stroke="#aaa" stroke-width="2"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom12;
      <Filter>[railway] = 'rail' and [tunnel]='yes'</Filter>
       <LineSymbolizer stroke="#aaa" stroke-width="2" stroke-dasharray="5,2"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom12;
      <Filter>[railway] = 'tram' or [railway] = 'light_rail' or [railway] = 'narrow_gauge' or [railway]='funicular'</Filter>
       <LineSymbolizer stroke="#aaa" stroke-width="1"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>[railway] = 'preserved'</Filter>
      <LineSymbolizer stroke="#aaa" stroke-width="1.5" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'preserved'</Filter>
      <LineSymbolizer stroke="#999999" stroke-width="3" stroke-linejoin="round"/>
      <LineSymbolizer stroke="white" stroke-width="1" stroke-linejoin="round" stroke-dasharray="0,1,8,1"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>[railway] = 'INT-preserved-ssy'</Filter>
      <LineSymbolizer stroke="#aaa" stroke-width="1" stroke-linejoin="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <Filter>[railway] = 'INT-preserved-ssy'</Filter>
      <LineSymbolizer stroke="#999999" stroke-width="2" stroke-linejoin="round"/>
      <LineSymbolizer stroke="white" stroke-width="0.8" stroke-linejoin="round" stroke-dasharray="0,1,8,1"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway]='monorail'</Filter>
      <LineSymbolizer stroke="#fff" stroke-width="4" stroke-linejoin="round" stroke-linecap="round" stroke-opacity="0.4"/>
      <LineSymbolizer stroke="#777" stroke-width="3.0" stroke-dasharray="2,3" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
</Style>
<Style name="trams">
    <Rule>
      <Filter>[railway] = 'tram'</Filter>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer stroke="#444" stroke-width="1"/>
    </Rule>
    <Rule>
      <Filter>[railway] = 'tram' and not [bridge]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer stroke="#444" stroke-width="2"/>
    </Rule>
    <Rule>
      <Filter>[railway] = 'tram' and [bridge]='yes'</Filter>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer stroke="black" stroke-width="5"/>
      <LineSymbolizer stroke="white" stroke-width="4"/>
      <LineSymbolizer stroke="#444" stroke-width="2"/>
    </Rule>
</Style>
<Style name="guideways">
<Rule>
      &maxscale_zoom13;
      &minscale_zoom13;
      <LineSymbolizer stroke="#6666ff" stroke-width="3" stroke-linejoin="round"/>
      <LineSymbolizer stroke="white" stroke-width="1" stroke-linejoin="round" stroke-dasharray="8,12"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <LineSymbolizer stroke="#6666ff" stroke-width="3" stroke-linejoin="round"/>
      <LineSymbolizer stroke="white" stroke-width="1" stroke-linejoin="round" stroke-dasharray="0,11,8,1"/>
    </Rule>
</Style>
<Style name="directions">
    <Rule>
      <Filter>[oneway] = 'yes'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke="#6c70d5" stroke-width="1" stroke-linejoin="bevel" stroke-dasharray="0,12,10,152"/>
      <LineSymbolizer stroke="#6c70d5" stroke-width="2" stroke-linejoin="bevel" stroke-dasharray="0,12,9,153"/>
      <LineSymbolizer stroke="#6c70d5" stroke-width="3" stroke-linejoin="bevel" stroke-dasharray="0,18,2,154"/>
      <LineSymbolizer stroke="#6c70d5" stroke-width="4" stroke-linejoin="bevel" stroke-dasharray="0,18,1,155"/>
    </Rule>
    <Rule>
      <Filter>[oneway] = '-1'</Filter>
      &maxscale_zoom16;
      <LineSymbolizer stroke="#6c70d5" stroke-width="1" stroke-linejoin="bevel" stroke-dasharray="0,12,10,152"/>
      <LineSymbolizer stroke="#6c70d5" stroke-width="2" stroke-linejoin="bevel" stroke-dasharray="0,13,9,152"/>
      <LineSymbolizer stroke="#6c70d5" stroke-width="3" stroke-linejoin="bevel" stroke-dasharray="0,14,2,158"/>
      <LineSymbolizer stroke="#6c70d5" stroke-width="4" stroke-linejoin="bevel" stroke-dasharray="0,15,1,158"/>
    </Rule>
</Style>
<Style name="cycleways_sidewalks">
    <Rule>
      <Filter>([cycleway:right] = 'track' or [cycleway] = 'track') and not ([sidewalk] = 'both' or [sidewalk] = 'right')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/ct20r.png"/>
    </Rule>
    <Rule>
      <Filter>([cycleway:left] = 'track' or [cycleway] = 'track')  and not ([sidewalk] = 'both' or [sidewalk] = 'left')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/ct20l.png"/>
    </Rule>
    <Rule>
      <Filter>([cycleway:right] = 'track' or [cycleway] = 'track') and not ([sidewalk] = 'both' or [sidewalk] = 'right')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/ct17r.png"/>
    </Rule>
    <Rule>
      <Filter>([cycleway:left] = 'track' or [cycleway] = 'track') and not ([sidewalk] = 'both' or [sidewalk] = 'left')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/ct17l.png"/>
    </Rule>
    <!-- Sidewalk -->
    <Rule>
      <Filter>([sidewalk] = 'right' or [sidewalk] = 'both') and not ([cycleway:right] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/sw20r.png"/>
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'left' or [sidewalk] = 'both') and not ([cycleway:left] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/sw20l.png"/>
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'right' or [sidewalk] = 'both') and not ([cycleway:right] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/sw17r.png"/>
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'left' or [sidewalk] = 'both') and not ([cycleway:left] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/sw17l.png"/>
    </Rule>
    <!-- Combined cycleway & sidewalk -->
    <Rule>
      <Filter>([sidewalk] = 'right' or [sidewalk] = 'both') and ([cycleway:right] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/ctsw20r.png"/>
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'left' or [sidewalk] = 'both') and ([cycleway:left] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/ctsw20l.png"/>
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'right' or [sidewalk] = 'both') and ([cycleway:right] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/ctsw17r.png"/>
    </Rule>
    <Rule>
      <Filter>([sidewalk] = 'left' or [sidewalk] = 'both') and ([cycleway:left] = 'track' or [cycleway] = 'track')</Filter>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LinePatternSymbolizer file="&symbols;/ctsw17l.png"/>
    </Rule>
</Style>
<Layer name="tunnels" status="on" maxzoom="&max_zoom12;" cache-features="on">
    <StyleName>tunnels-casing</StyleName>
    <StyleName>tunnels-fill</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway from &prefix;_line where highway in ('motorway','motorway_link','trunk','trunk_link','primary','primary_link','secondary','secondary_link','tertiary','tertiary_link','residential','unclassified') and tunnel in ('yes','true','1') order by z_order) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="turning_circle-casing" status="on" maxzoom="&max_zoom15;">
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
<Layer name="footbikecycle-tunnels" status="on" clear-label-cache="on" maxzoom="&max_zoom13;">
    <StyleName>footbikecycle-tunnels</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,horse,foot,bicycle from &prefix;_line where highway in ('bridleway','footway','cycleway','path') and tunnel in ('yes','true','1') order by z_order) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="tracks-tunnels" status="on" maxzoom="&max_zoom14;">
    <StyleName>tracks-tunnels</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,tracktype from &prefix;_line where highway='track' and tunnel in ('yes','true','1')) as tracks
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="highway-area-casing" status="on" maxzoom="&max_zoom14;">
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
<Layer name="minor-roads-casing" status="on" maxzoom="&max_zoom12;" cache-features="on">
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
<Layer name="highway-area-fill" status="on" maxzoom="&max_zoom11;">
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
<Layer name="turning_circle-fill" status="on" maxzoom="&max_zoom15;">
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
<Layer name="tracks-notunnel-nobridge" status="on" maxzoom="&max_zoom14;">
    <StyleName>tracks-notunnel-nobridge</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,tracktype from &prefix;_line where highway='track' and (bridge is null or bridge in ('no','false','0')) and (tunnel is null or tunnel in ('no','false','0'))) as tracks
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="minor-roads-fill" status="on" cache-features="on">
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
<Layer name="roads" status="on" maxzoom="&max_zoom5;">
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
<Layer name="waterway-bridges" status="on" maxzoom="&max_zoom14;">
    <StyleName>waterway-bridges</StyleName>
    <Datasource>
      <Parameter name="table">(select way,name from &prefix;_line where waterway='canal' and bridge in ('yes','true','1','aqueduct') order by z_order) as water</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="access-pre_bridges" status="on" maxzoom="&max_zoom15;">
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
<Layer name="direction_pre_bridges" status="on" maxzoom="&max_zoom16;">
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
<Layer name="bridges_layer0" status="on" maxzoom="&max_zoom12;" cache-features="on">
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
<Layer name="bridges_access0" status="on" maxzoom="&max_zoom15;">
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
<Layer name="bridges_directions0" status="on" maxzoom="&max_zoom16;">
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
<Layer name="bridges_layer1" status="on" maxzoom="&max_zoom12;" cache-features="on">
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
<Layer name="bridges_access1" status="on" maxzoom="&max_zoom15;">
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
<Layer name="bridges_directions1" status="on" maxzoom="&max_zoom16;">
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
<Layer name="bridges_layer2" status="on" maxzoom="&max_zoom12;" cache-features="on">
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
<Layer name="bridges_access2" status="on" maxzoom="&max_zoom15;">
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
<Layer name="bridges_directions2" status="on" maxzoom="&max_zoom16;">
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
<Layer name="highway-junctions" status="on" maxzoom="&max_zoom11;">
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
