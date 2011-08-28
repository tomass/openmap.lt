<?php
header('Cache-Control: public, max-age=60', true);

?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html style="height:100%;">
<head>
<base href="/"/>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
<meta name="description" content="Open and free map"/>
<meta name="keywords" content="map, maps, globe, europe, public transport"/>
<title>Open and free map</title>
<link rel="stylesheet" type="text/css" href="/css/map.css"/>
<link rel="stylesheet" type="text/css" href="/css/ui/overcast/jquery-ui-1.8.14.custom.css"/>
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.6.2/jquery.min.js"></script>
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8.14/jquery-ui.min.js"></script>
<script type="text/javascript" src="/js/OpenLayers-2.11-latest.min.js"></script>
</head>
<body style="height:100%;margin:0;">
<div id="searchPanel"></div>
<div id="buttonsPanel"></div>
<div id="map" style="height:100%;width:100%;"></div>
<script type="text/javascript" src="/js/jquery.cookie.js"></script>
<script type="text/javascript" src="/js/map.js?201108282200"></script>
<script type="text/javascript" src="/js/startposition.js"></script>
<script type="text/javascript" src="/js/ui.search.js"></script>
<script type="text/javascript" src="/js/ui.switcher.js"></script>
<script type="text/javascript">
//<![CDATA[
$(function(){
    map = createMap("map");
    map.addControl(new OpenLayers.Control.MousePosition());
    map.addControl(new OpenLayers.Control.Activeurl());
    if(map.getZoom() == 0){
    	setMapExtent(new OpenLayers.Bounds(-10, 35, 50, 70));
        Startposition(map);
    }
    $("#searchPanel").search({map:map});
    $("#buttonsPanel").switcher({map:map});
});
//]]>
</script>
<script type="text/javascript">
//<![CDATA[
var _gaq = _gaq || [];_gaq.push(['_setAccount', 'UA-18331326-1']);_gaq.push(['_trackPageview']);
(function(){
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
})();
//]]>
</script>
<div style="display:none;">Open and free map</div>
</body>
</html>
