/**
 * Class: OpenLayers.Layer.OSM.Transport
 * 
 * Inherits from: - <OpenLayers.Layer.OSM>
 *
 * @requires OpenLayers/Layer/XYZ.js
 */
OpenLayers.Layer.OSM.Transport = OpenLayers.Class(OpenLayers.Layer.OSM, {
    initialize : function(name, options, base) {
        var url = base + "/${z}/${x}/${y}.png";
        options = OpenLayers.Util.extend({
            isBaseLayer : false,
            type : 'png',
            numZoomLevels : 19,
            displayOutsideMaxExtent : true,
            visibility : false,
            tileLoadingDelay : 0
        }, options);
        var newArguments = [ name, url, options ];
        OpenLayers.Layer.OSM.prototype.initialize.apply(this, newArguments);
    },
    addTile : function(b, p) {
        var t = OpenLayers.Layer.OSM.prototype.addTile.apply(this, arguments);
        t.frame.style.backgroundImage = "url(http://openmap.lt/tiles/grey.png)";
        return t;
    },
    CLASS_NAME : "OpenLayers.Layer.OSM.Transport"
});