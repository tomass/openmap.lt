/**
 * Class: OpenLayers.Layer.OSM.Mapnik
 * 
 * Inherits from: - <OpenLayers.Layer.OSM>
 *
 * @requires OpenLayers/Layer/XYZ.js
 */
OpenLayers.Layer.OSM.Mapnik = OpenLayers.Class(OpenLayers.Layer.OSM, {
    /**
     * Constructor: OpenLayers.Layer.OSM.Mapnik
     * 
     * Parameters: name - {String} options - {Object} Hashtable of extra options
     * to tag onto the layer
     */
    initialize : function(name, options, base) {
        var url = [ base + "/${z}/${x}/${y}.png" ];
        options = OpenLayers.Util.extend({
            numZoomLevels : 19,
            transitionEffect : "resize",
            buffer : 0
        }, options);
        var newArguments = [ name, url, options ];
        OpenLayers.Layer.OSM.prototype.initialize.apply(this, newArguments);
    },

    CLASS_NAME : "OpenLayers.Layer.OSM.Mapnik"
});