/**
 * Namespace: Util.OSM
 */
OpenLayers.Util.OSM = {};

/**
 * Constant: MISSING_TILE_URL {String} URL of image to display for missing tiles
 */
OpenLayers.Util.OSM.MISSING_TILE_URL = "/images/404.png";

/**
 * Property: originalOnImageLoadError {Function} Original onImageLoadError
 * function.
 */
OpenLayers.Util.OSM.originalOnImageLoadError = OpenLayers.Util.onImageLoadError;

/**
 * Function: onImageLoadError
 */
OpenLayers.Util.onImageLoadError = function() {
    if (this.src.match(/^http:\/\/[abc]\.[a-z]+\.openstreetmap\.org\//)) {
        this.src = OpenLayers.Util.OSM.MISSING_TILE_URL;
    } else if (this.src.match(/^http:\/\/[def]\.tah\.openstreetmap\.org\//)) {
        // do nothing - this layer is transparent
    } else {
        OpenLayers.Util.OSM.originalOnImageLoadError;
    }
};

var epsg4326 = new OpenLayers.Projection("EPSG:4326");
var map;
var markers;
var vectors;
var popup;
OpenLayers.DOTS_PER_INCH = detectResolution();

function createMap(divName, options) {
    options = options || {};
    var map = new OpenLayers.Map(divName, {
        controls : options.controls || [ new OpenLayers.Control.ArgParser(), new OpenLayers.Control.Attribution(), new OpenLayers.Control.Navigation(), new OpenLayers.Control.PanZoomBar(), new OpenLayers.Control.ScaleLine({
            geodesic : true
        }) ],
        units : "m",
        numZoomLevels : 20,
        displayProjection : epsg4326,
        maxResolution : 156543.0339,
        theme : "http://openmap.lt/css/theme/openmap/style.css"
    });
    var mapnik = new OpenLayers.Layer.OSM.Mapnik("Mapnik", {
    	keyid : "mapnik",
        displayOutsideMaxExtent : true,
        wrapDateLine : true,
        layerCode : "M"
    }, "http://tiles.openmap.lt");
    map.addLayer(mapnik);
    map.addLayer(new OpenLayers.Layer.OSM.Lt("Lt", {keyid:"lt",layerCode:"L"}, "http://osmlt.openmap.lt"));
    var osmarender = new OpenLayers.Layer.OSM.Osmarender("Osmarender", {
        keyid : "osmarender",
        displayOutsideMaxExtent : true,
        wrapDateLine : true,
        layerCode : "O"
    });
    map.addLayer(osmarender);
    var cycle = new OpenLayers.Layer.OSM.CycleMap("Cycle Map", {
        keyid : "cycle",
        displayOutsideMaxExtent : true,
        wrapDateLine : true,
        layerCode : "C"
    }, "http://cycle.openmap.lt/cycle");
    map.addLayer(cycle);
    map.addLayer(new OpenLayers.Layer.XYZ("Empty", "http://openmap.lt/tiles/blank.png", {
        sphericalMercator : true,
        numZoomLevels : 19,
        keyid : "empty",
        layerCode : "E"
    }));
    map.addLayer(new OpenLayers.Layer.OSM.Transport("Public transport", {
        keyid : "transport",
        layerCode : "T"
    }, "http://pt.openmap.lt"));
    // TODO retrive numZoomLevels from map
    var numZoomLevels = Math.max(mapnik.numZoomLevels, osmarender.numZoomLevels);
    markers = new OpenLayers.Layer.Markers("Markers", {
        displayInLayerSwitcher : false,
        numZoomLevels : numZoomLevels,
        maxExtent : new OpenLayers.Bounds(-20037508, -20037508, 20037508, 20037508),
        maxResolution : 156543,
        units : "m",
        projection : "EPSG:900913"
    });
    map.addLayer(markers);
    map.addControl(new OpenLayers.Control.Marker());
    return map;
};

function getArrowIcon() {
    var size = new OpenLayers.Size(25, 22);
    var offset = new OpenLayers.Pixel(-30, -27);
    var icon = new OpenLayers.Icon("/images/arrow.png", size, offset);
    return icon;
};

function addMarkerToMap(position, icon, description) {
    var marker = new OpenLayers.Marker(position.clone().transform(epsg4326, map.getProjectionObject()), icon);
    markers.addMarker(marker);
    if (description) {
        marker.events.register("mouseover", marker, function() {
            openMapPopup(marker, description);
        });
        marker.events.register("mouseout", marker, function() {
            closeMapPopup();
        });
    }
    return marker;
};

function addObjectToMap(url, zoom, callback) {
    var layer = new OpenLayers.Layer.GML("Objects", url, {
        format : OpenLayers.Format.OSM,
        style : {
            strokeColor : "blue",
            strokeWidth : 3,
            strokeOpacity : 0.5,
            fillOpacity : 0.2,
            fillColor : "lightblue",
            pointRadius : 6
        },
        projection : new OpenLayers.Projection("EPSG:4326"),
        displayInLayerSwitcher : true
    });
    map.addLayer(layer);
    layer.loadGML();
};

function addBoxToMap(boxbounds) {
    if (!vectors) {
        // Be aware that IE requires Vector layers be initialised on page load,
        // and not under deferred script conditions
        vectors = new OpenLayers.Layer.Vector("Boxes", {
            displayInLayerSwitcher : true
        });
        map.addLayer(vectors);
    }
    var geometry = boxbounds.toGeometry().transform(epsg4326, map.getProjectionObject());
    var box = new OpenLayers.Feature.Vector(geometry, {}, {
        strokeWidth : 2,
        strokeColor : '#ee9900',
        fillOpacity : 0
    });
    vectors.addFeatures(box);
    return box;
};

function openMapPopup(marker, description) {
    closeMapPopup();
    popup = new OpenLayers.Popup.FramedCloud("popup", marker.lonlat, null, description, marker.icon, true);
    popup.setBackgroundColor("#E3FFC5");
    map.addPopup(popup);
    return popup;
};

function closeMapPopup() {
    if (popup) {
        map.removePopup(popup);
        delete popup;
    }
};

function removeMarkerFromMap(marker) {
    markers.removeMarker(marker);
};

function removeBoxFromMap(box) {
    vectors.removeFeature(box);
};

function getMapCenter() {
    return map.getCenter().clone().transform(map.getProjectionObject(), epsg4326);
};

function setMapCenter(center, zoom) {
    zoom = parseInt(zoom);
    var numzoom = map.getNumZoomLevels();
    if (zoom >= numzoom) {
        zoom = numzoom - 1;
    }
    map.setCenter(center.clone().transform(epsg4326, map.getProjectionObject()), zoom);
};

function setMapExtent(extent) {
    map.zoomToExtent(extent.clone().transform(epsg4326, map.getProjectionObject()));
};

function getMapExtent() {
    return map.getExtent().clone().transform(map.getProjectionObject(), epsg4326);
};

function getMapZoom() {
    return map.getZoom();
};

function getEventPosition(event) {
    return map.getLonLatFromViewPortPx(event.xy).clone().transform(map.getProjectionObject(), epsg4326);
};

function getMapLayers() {
    var layerConfig = "";
    for ( var layers = map.getLayersBy("isBaseLayer", true), i = 0; i < layers.length; i++) {
        layerConfig += layers[i] == map.baseLayer ? "B" : "0";
    }
    for ( var layers = map.getLayersBy("isBaseLayer", false), i = 0; i < layers.length; i++) {
        layerConfig += layers[i].getVisibility() ? "T" : "F";
    }
    return layerConfig;
};

function scaleToZoom(scale) {
    return Math.log(360.0 / (scale * 512.0)) / Math.log(2.0);
};

function detectResolution() {
    var div = document.createElement("div");
    div.id = "dpi";
    div.style.height = "1in";
    div.style.left = div.style.top = "-100%";
    div.style.position = "absolute";
    document.body.appendChild(div);
    var res = document.getElementById("dpi").offsetHeight;
    document.body.removeChild(div);
    return res;
};
