<!ENTITY % settings SYSTEM "settings.xml.inc">
%settings;
<!ENTITY datasource-settings SYSTEM "datasource-settings.xml.inc">
<!ENTITY fontset-settings SYSTEM "fontset-settings.xml.inc">
<!ENTITY srs900913 "+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
<!ENTITY srsmercator "+proj=merc +datum=WGS84 +over">
<!ENTITY srs4326 "+init=epsg:4326">

<!ENTITY maxscale_zoom0 "<MaxScaleDenominator>250000000000</MaxScaleDenominator>">
<!ENTITY maxscale_zoom1 "<MaxScaleDenominator>500000000</MaxScaleDenominator>">
<!ENTITY minscale_zoom1 "<MinScaleDenominator>200000000</MinScaleDenominator>">
<!ENTITY maxscale_zoom2 "<MaxScaleDenominator>200000000</MaxScaleDenominator>">
<!ENTITY minscale_zoom2 "<MinScaleDenominator>100000000</MinScaleDenominator>">
<!ENTITY maxscale_zoom3 "<MaxScaleDenominator>100000000</MaxScaleDenominator>">
<!ENTITY minscale_zoom3 "<MinScaleDenominator>50000000</MinScaleDenominator>">
<!ENTITY maxscale_zoom4 "<MaxScaleDenominator>50000000</MaxScaleDenominator>">
<!ENTITY minscale_zoom4 "<MinScaleDenominator>25000000</MinScaleDenominator>">
<!ENTITY maxscale_zoom5 "<MaxScaleDenominator>25000000</MaxScaleDenominator>">
<!ENTITY minscale_zoom5 "<MinScaleDenominator>12500000</MinScaleDenominator>">
<!ENTITY maxscale_zoom6 "<MaxScaleDenominator>12500000</MaxScaleDenominator>">
<!ENTITY minscale_zoom6 "<MinScaleDenominator>6500000</MinScaleDenominator>">
<!ENTITY maxscale_zoom7 "<MaxScaleDenominator>6500000</MaxScaleDenominator>">
<!ENTITY minscale_zoom7 "<MinScaleDenominator>3000000</MinScaleDenominator>">
<!ENTITY maxscale_zoom8 "<MaxScaleDenominator>3000000</MaxScaleDenominator>">
<!ENTITY minscale_zoom8 "<MinScaleDenominator>1500000</MinScaleDenominator>">
<!ENTITY maxscale_zoom9 "<MaxScaleDenominator>1500000</MaxScaleDenominator>">
<!ENTITY minscale_zoom9 "<MinScaleDenominator>750000</MinScaleDenominator>">
<!ENTITY maxscale_zoom10 "<MaxScaleDenominator>750000</MaxScaleDenominator>">
<!ENTITY minscale_zoom10 "<MinScaleDenominator>400000</MinScaleDenominator>">
<!ENTITY maxscale_zoom11 "<MaxScaleDenominator>400000</MaxScaleDenominator>">
<!ENTITY minscale_zoom11 "<MinScaleDenominator>200000</MinScaleDenominator>">
<!ENTITY maxscale_zoom12 "<MaxScaleDenominator>200000</MaxScaleDenominator>">
<!ENTITY minscale_zoom12 "<MinScaleDenominator>100000</MinScaleDenominator>">
<!ENTITY maxscale_zoom13 "<MaxScaleDenominator>100000</MaxScaleDenominator>">
<!ENTITY minscale_zoom13 "<MinScaleDenominator>50000</MinScaleDenominator>">
<!ENTITY maxscale_zoom14 "<MaxScaleDenominator>50000</MaxScaleDenominator>">
<!ENTITY minscale_zoom14 "<MinScaleDenominator>25000</MinScaleDenominator>">
<!ENTITY maxscale_zoom15 "<MaxScaleDenominator>25000</MaxScaleDenominator>">
<!ENTITY minscale_zoom15 "<MinScaleDenominator>12500</MinScaleDenominator>">
<!ENTITY maxscale_zoom16 "<MaxScaleDenominator>12500</MaxScaleDenominator>">
<!ENTITY minscale_zoom16 "<MinScaleDenominator>5000</MinScaleDenominator>">
<!ENTITY maxscale_zoom17 "<MaxScaleDenominator>5000</MaxScaleDenominator>">
<!ENTITY minscale_zoom17 "<MinScaleDenominator>2500</MinScaleDenominator>">
<!ENTITY maxscale_zoom18 "<MaxScaleDenominator>2500</MaxScaleDenominator>">
<!ENTITY minscale_zoom18 "<MinScaleDenominator>50</MinScaleDenominator>">

<!ENTITY thin_lines_max_scale "2500000">

<!ENTITY bus_color "#191974">
<!ENTITY ferry_color "#32afe8">
<!ENTITY lightrail_color "#197419">
<!ENTITY sharetaxi_color "#741974">
<!ENTITY subway_color "#3232e8">
<!ENTITY train_color "#000">
<!ENTITY tram_color "#e88d32">
<!ENTITY troll_color "#e83232">

<!ENTITY width_low "1">
<!ENTITY width_mid "2">
<!ENTITY width_high "5">
<!ENTITY opacity_low "0.7">
<!ENTITY opacity_mid "0.9">
<!ENTITY opacity_high "1">

<!ENTITY line_low_zoom 'stroke-width="1" stroke-opacity="0.7"'>
<!ENTITY line_mid_zoom 'stroke-width="2" stroke-opacity="0.9"'>
<!ENTITY line_high_zoom 'stroke-width="5" stroke-opacity="1"'>

<!ENTITY % layers SYSTEM "layers.xml.inc">
%layers;
