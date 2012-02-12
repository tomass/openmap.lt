<Style name="cliffs">
    <Rule>
        &maxscale_zoom13;
        &minscale_zoom14;
        <Filter>[natural] = 'cliff'</Filter>
        <LinePatternSymbolizer file="&symbols;/cliff.png"/>
    </Rule>
    <Rule>
        &maxscale_zoom15;
        <Filter>[natural] = 'cliff'</Filter>
        <LinePatternSymbolizer file="&symbols;/cliff2.png"/>
    </Rule>
    <Rule>
        &maxscale_zoom15;
        <Filter>[man_made] = 'embankment'</Filter>
        <LinePatternSymbolizer file="&symbols;/cliff.png"/>
    </Rule>
</Style>
<Style name="barriers">
    <Rule>
        &maxscale_zoom14;
        <Filter>[barrier] = 'embankment'</Filter>
        <LineSymbolizer stroke="#444" stroke-width="0.4"/>
    </Rule>
    <Rule>
        &maxscale_zoom16;
        <Filter>[natural]='hedge' or [barrier] = 'hedge'</Filter>
        <LineSymbolizer stroke="#aed1a0" stroke-width="3"/>
    </Rule>
    <Rule>
        &maxscale_zoom16;
        <Filter>[barrier] != '' and not ([barrier] = 'hedge' or [barrier] = 'embankment')</Filter>
        <LineSymbolizer stroke="#444" stroke-width="0.4"/>
    </Rule>
</Style>
<Style name="barriers_area">
    <Rule>
        <Filter>[natural]='hedge' or [barrier] = 'hedge'</Filter>
        &maxscale_zoom16;
        <PolygonSymbolizer fill="#aed1a0"/>
    </Rule>
    <Rule>
        &maxscale_zoom16;
        <Filter>[barrier] != '' and not [barrier] = 'hedge'</Filter>
        <LineSymbolizer stroke="#444" stroke-width="0.4"/>
    </Rule>
</Style>

<Layer name="line features" maxzoom="&max_zoom13;">
    <StyleName>cliffs</StyleName>
    <StyleName>barriers</StyleName>
    <Datasource>
        <Parameter name="table">
        (select way,barrier,"natural",man_made from &prefix;_line where barrier is not null or "natural" in ('hedge','cliff') or man_made='embankment') as roads
        </Parameter>
        &datasource-settings;
    </Datasource>
</Layer>
<Layer name="polygon barriers" maxzoom="&max_zoom16;">
    <StyleName>barriers_area</StyleName>
    <Datasource>
        <Parameter name="table">(select way,barrier,"natural" from &prefix;_polygon where barrier is not null or "natural"='hedge') as barriers</Parameter>
        &datasource-settings;
    </Datasource>
</Layer>
