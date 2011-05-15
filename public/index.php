<?php
header('Cache-Control: public, max-age=60', true);

?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html style="height:100%;">
<head>
<base href="/"/>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
<meta name="description" content="Atviras ir nemokamas žemėlapis"/>
<meta name="keywords" content="žemėlapis, žemėlapiai, map, maps, lt, lietuva, vilnius, kaunas, klaipėda"/>
<title>Atviras ir nemokamas žemėlapis</title>
<link rel="stylesheet" type="text/css" href="/css/map.css"/>
<link rel="stylesheet" type="text/css" href="/css/ui/overcast/jquery-ui-1.8.11.custom.css"/>
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.5.1/jquery.min.js"></script>
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8.11/jquery-ui.min.js"></script>
<script type="text/javascript" src="/js/OpenLayers.min.js"></script>
</head>
<body style="height:100%;margin:0;">
<div id="searchPanel"></div>
<div id="map" style="height:100%;width:100%;"></div>
<script type="text/javascript" src="/js/map.js"></script>
<script type="text/javascript" src="/js/osb/osblayer.min.js"></script>
<script type="text/javascript" src="/js/startposition.js"></script>
<script type="text/javascript" src="/js/ui.search.js"></script>
<script type="text/javascript">
//<![CDATA[
$(function(){
    OpenLayers.Lang.setCode("lt");
    map = createMap("map");
    map.addControl(new OpenLayers.Control.LoadingPanel());
    map.addControl(new OpenLayers.Control.MousePosition());
    var osbLayer = new OpenLayers.Layer.OpenStreetBugs("OpenStreetBugs", {permalink:"http://openmap.lt/", visibility:false});
    map.addLayer(osbLayer);
    var osbControl = new OpenLayers.Control.OpenStreetBugs(osbLayer);
    map.addControl(osbControl);
    //osbControl.activate();
    if(map.getZoom() == 0){
    	setMapExtent(new OpenLayers.Bounds(20.6,53.8,26.9,56.5));
	    Startposition(map);
    }
    $("#searchPanel").search({"map":map});
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
<div style="display:none;">Atviras ir nemokamas žemėlapis.</div>
</body>
</html>
