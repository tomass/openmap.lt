/**
 * Class: OpenLayers.Layer.OSM.Lt
 * 
 * Inherits from: - <OpenLayers.Layer.OSM>
 *
 * @requires OpenLayers/Layer/XYZ.js
 */
OpenLayers.Layer.OSM.Lt = OpenLayers.Class(OpenLayers.Layer.OSM, {
    initialize : function(name, options, base) {
        var url = [ base + "/${z}/${x}/${y}.png" ];
        options = OpenLayers.Util.extend({
            numZoomLevels : 19,
            transitionEffect : "resize",
            buffer : 0
            //maxExtent : new OpenLayers.Bounds(2200000, 7100000, 3100000, 7700000),
            //displayOutsideMaxExtent : false
        }, options);
        var newArguments = [ name, url, options ];
        OpenLayers.Layer.OSM.prototype.initialize.apply(this, newArguments);
    },
    CLASS_NAME : "OpenLayers.Layer.OSM.Lt"
});