
<!-- low zoom -->

<Style name="routes">
	<Rule>
		<!-- bus -->
		<Filter>[route] = 'bus'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- bus + taxi -->
		<Filter>[route] = 'bus, share_taxi'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- bus + tram -->
		<Filter>[route] = 'bus, tram'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- bus + troll -->
		<Filter>[route] = 'bus, trolleybus'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- ferry -->
		<Filter>[route] = 'ferry'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&ferry_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- light_rail -->
		<Filter>[route] = 'light_rail'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&lightrail_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
        <Rule>
                <!-- light rail + train -->
                <Filter>[route] = 'light_rail, train'</Filter>
                &maxscale_zoom3;
                &minscale_zoom10;
                <LineSymbolizer stroke="&lightrail_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
                <LineSymbolizer stroke="&train_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
        </Rule>
	<Rule>
		<!-- share_taxi -->
		<Filter>[route] = 'share_taxi'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- subway -->
		<Filter>[route] = 'subway'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&subway_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- subway + tram -->
		<Filter>[route] = 'subway, tram'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&subway_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- train -->
		<Filter>[route] = 'train'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&train_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- tram -->
		<Filter>[route] = 'tram'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- trolleybus -->
		<Filter>[route] = 'trolleybus'</Filter>
		&maxscale_zoom3;
		&minscale_zoom10;
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_low;" stroke-opacity="&opacity_low;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>


<!-- mid zoom -->


	<Rule>
		<!-- bus -->
		<Filter>[route] = 'bus'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!--  bus + taxi -->
		<Filter>[route] = 'bus, share_taxi'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- bus + taxi + tram -->
		<Filter>[route] = 'bus, share_taxi, tram'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,14"/>
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,7"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,14,7,0"/>
	</Rule>
	<Rule>
		<!-- bus + taxi + tram + troll -->
		<Filter>[route] = 'bus, share_taxi, tram, trolleybus'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,21"/>
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,14"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,14,7,7"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,21,7,0"/>
	</Rule>
	<Rule>
		<!-- bus + taxi + troll -->
		<Filter>[route] = 'bus, share_taxi, trolleybus'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,14"/>
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,7"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,14,7,0"/>
	</Rule>
	<Rule>
		<!-- bus + tram -->
		<Filter>[route] = 'bus, tram'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- bus + tram + troll -->
		<Filter>[route] = 'bus, tram, trolleybus'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,14"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,7"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,14,7,0"/>
	</Rule>
	<Rule>
		<!--  bus + troll -->
		<Filter>[route] = 'bus, trolleybus'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>

	<Rule>
		<!-- ferry -->
		<Filter>[route] = 'ferry'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&ferry_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- light_rail -->
		<Filter>[route] = 'light_rail'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&lightrail_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- light_rail + train -->
		<Filter>[route] = 'light_rail, train'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&lightrail_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
		<LineSymbolizer stroke="&train_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
	</Rule>

	<Rule>
		<!-- share taxi -->
		<Filter>[route] = 'share_taxi'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- share taxi + tram -->
		<Filter>[route] = 'share_taxi, tram'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- share taxi + troll -->
		<Filter>[route] = 'share_taxi, trolleybus'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
	</Rule>

	<Rule>
		<!-- subway -->
		<Filter>[route] = 'subway'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&subway_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- subway + train -->
		<Filter>[route] = 'subway, train'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&subway_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
		<LineSymbolizer stroke="&train_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
	</Rule>
	<Rule>
		<!-- subway + tram -->
		<Filter>[route] = 'subway, tram'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&subway_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>

	<Rule>
		<!-- train -->
		<Filter>[route] = 'train'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&train_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- train + tram -->
		<Filter>[route] = 'train, tram'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&train_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
	</Rule>

	<Rule>
		<!-- tram -->
		<Filter>[route] = 'tram'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- tram + troll -->
		<Filter>[route] = 'tram, trolleybus'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
	</Rule>

	<Rule>
		<!-- trolleybus -->
		<Filter>[route] = 'trolleybus'</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_mid;" stroke-opacity="&opacity_mid;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>



<!-- Near Zoom -->


	<Rule>
		<!-- bus -->
		<Filter>[route] = 'bus'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- bus + taxi -->
		<Filter>[route] = 'bus, share_taxi'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- bus + taxi + tram -->
		<Filter>[route] = 'bus, share_taxi, tram'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,14"/>
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,7"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,14,7,0"/>
	</Rule>
	<Rule>
		<!-- bus + taxi + tram + troll -->
		<Filter>[route] = 'bus, share_taxi, tram, trolleybus'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,21"/>
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,14"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,14,7,7"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,21,7,0"/>
	</Rule>
	<Rule>
		<!-- bus + taxi + troll -->
		<Filter>[route] = 'bus, share_taxi, trolleybus'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,14"/>
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,7"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,14,7,0"/>
	</Rule>
	<Rule>
		<!-- bus + tram -->
		<Filter>[route] = 'bus, tram'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- bus + tram + troll -->
		<Filter>[route] = 'bus, tram, trolleybus'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,14"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,7"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,14,7,0"/>
	</Rule>
	<Rule>
		<!-- bus + troll -->
		<Filter>[route] = 'bus, trolleybus'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&bus_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- ferry -->
		<Filter>[route] = 'ferry'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&ferry_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- light rail -->
		<Filter>[route] = 'light_rail'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&lightrail_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- light rail + train -->
		<Filter>[route] = 'light_rail, train'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&lightrail_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
		<LineSymbolizer stroke="&train_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
	</Rule>
	<Rule>
		<!-- light rail + tram -->
		<Filter>[route] = 'light_rail, tram'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&lightrail_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
	</Rule>
	<Rule>
		<!-- share taxi -->
		<Filter>[route] = 'share_taxi'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- taxi + tram -->
		<Filter>[route] = 'share_taxi, tram'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- taxi + troll -->
		<Filter>[route] = 'share_taxi, trolleybus'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&sharetaxi_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&troll_color;"  stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- subway -->
		<Filter>[route] = 'subway'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&subway_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- subway + train -->
		<Filter>[route] = 'subway, train'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&subway_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
		<LineSymbolizer stroke="&train_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
	</Rule>
	<Rule>
		<!-- subway + tram -->
		<Filter>[route] = 'subway, tram'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&subway_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
	</Rule>
	<Rule>
		<!-- train -->
		<Filter>[route] = 'train'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&train_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- train + tram -->
		<Filter>[route] = 'train, tram'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&train_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
	</Rule>
	<Rule>
		<!-- tram -->
		<Filter>[route] = 'tram'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
	<Rule>
		<!-- tram + trolleybus -->
		<Filter>[route] = 'tram, trolleybus'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&tram_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="0,7,7,0"/>
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="butt" stroke-dasharray="7,7"/>
	</Rule>
	<Rule>
		<!-- trolleybus -->
		<Filter>[route] = 'trolleybus'</Filter>
		&maxscale_zoom13;
		&minscale_zoom18;
		<LineSymbolizer stroke="&troll_color;" stroke-width="&width_high;" stroke-opacity="&opacity_high;" stroke-linejoin="round" stroke-linecap="round"/>
	</Rule>
</Style>
<Layer name="routes" status="on" srs="&osm2pgsql_projection;" minzoom="50" maxzoom="25000000">
    <StyleName>routes</StyleName>
    <Datasource>
      <Parameter name="table">(select * from &prefix;_line where type = 'route' order by z_order) as roads</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="routes-poly" status="on" srs="&osm2pgsql_projection;" minzoom="50" maxzoom="25000000">
    <StyleName>routes</StyleName>
    <Datasource>
      <Parameter name="table">(select * from &prefix;_polygon where type = 'route' order by z_order) as roads</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
