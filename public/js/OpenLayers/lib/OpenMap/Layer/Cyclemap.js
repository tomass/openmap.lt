/**
 * Class: OpenLayers.Layer.OSM.CycleMap
 * 
 * Inherits from: - <OpenLayers.Layer.OSM>
 *
 * @requires OpenLayers/Layer/XYZ.js
 */
OpenLayers.Layer.OSM.CycleMap = OpenLayers.Class(OpenLayers.Layer.OSM, {
    /**
     * Constructor: OpenLayers.Layer.OSM.CycleMap
     * 
     * Parameters: name - {String} options - {Object} Hashtable of extra options
     * to tag onto the layer
     */
    initialize : function(name, options, base) {
        var url = base + "/${z}/${x}/${y}.png";
        options = OpenLayers.Util.extend({
            numZoomLevels : 17
        }, options);
        var newArguments = [ name, url, options ];
        OpenLayers.Layer.OSM.prototype.initialize.apply(this, newArguments);
    },
    CLASS_NAME : "OpenLayers.Layer.OSM.CycleMap"
});