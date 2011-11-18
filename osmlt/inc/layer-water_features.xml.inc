<Style name="dam">
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <LineSymbolizer stroke="#444" stroke-width="2" stroke-linejoin="round" stroke-linecap="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="#222" halo-radius="1"/>
    </Rule>
</Style>
<Style name="marinas-area">
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer stroke="blue" stroke-width="1" stroke-dasharray="6,2" stroke-opacity="0.5"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <LineSymbolizer stroke="blue" stroke-width="2" stroke-dasharray="6,2" stroke-opacity="0.5"/>
    </Rule>
</Style>
<Style name="piers-area">
    <Rule>
      &maxscale_zoom12;
      <PolygonSymbolizer fill="#f2efe9"/>
    </Rule>
</Style>
<Style name="piers">
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom12;
      <Filter>[man_made]='breakwater' or [man_made]='groyne'</Filter>
      <LineSymbolizer stroke="#aaa" stroke-width="1"/>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom12;
      <Filter>[man_made]='pier'</Filter>
      <LineSymbolizer stroke="#f2efe9" stroke-width="1.5"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>[man_made]='breakwater' or [man_made]='groyne'</Filter>
      <LineSymbolizer stroke="#aaa" stroke-width="2"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>[man_made]='pier'</Filter>
      <LineSymbolizer stroke="#f2efe9" stroke-width="3"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[man_made]='breakwater' or [man_made]='groyne'</Filter>
      <LineSymbolizer stroke="#aaa" stroke-width="4"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[man_made]='pier'</Filter>
      <LineSymbolizer stroke="#f2efe9" stroke-width="7"/>
    </Rule>
</Style>
<Style name="locks">
<Rule>
      &maxscale_zoom17;
      &minscale_zoom18;
      <Filter>[waterway]='lock_gate'</Filter>
      <PointSymbolizer file="&symbols;/lock_gate.png"/>
</Rule>
</Style>
<Layer name="dam" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom13;">
    <StyleName>dam</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,name from &prefix;_line where waterway='dam') as dam</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="marinas-area" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom14;">
    <StyleName>marinas-area</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way from &prefix;_polygon where leisure ='marina') as marinas
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="piers-area" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom12;">
    <StyleName>piers-area</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,man_made from &prefix;_polygon where man_made in ('pier','breakwater','groyne')) as piers
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="piers" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom11;">
     <StyleName>piers</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,man_made from &prefix;_line where man_made in ('pier','breakwater','groyne')) as piers
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="locks" status="on" srs="&osm2pgsql_projection;" maxzoom="&max_zoom17;">
     <StyleName>locks</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,waterway from &prefix;_point where waterway='lock_gate') as locks
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>


