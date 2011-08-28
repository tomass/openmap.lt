/**
 * Class: OpenLayers.Layer.OSM.Osmarender
 * 
 * Inherits from: - <OpenLayers.Layer.OSM>
 *
 * @requires OpenLayers/Layer/XYZ.js
 */
OpenLayers.Layer.OSM.Osmarender = OpenLayers.Class(OpenLayers.Layer.OSM, {
    /**
     * Constructor: OpenLayers.Layer.OSM.Osmarender
     * 
     * Parameters: name - {String} options - {Object} Hashtable of extra options
     * to tag onto the layer
     */
    initialize : function(name, options) {
        var url = [ "http://a.tah.openstreetmap.org/Tiles/tile/${z}/${x}/${y}.png", "http://b.tah.openstreetmap.org/Tiles/tile/${z}/${x}/${y}.png", "http://c.tah.openstreetmap.org/Tiles/tile/${z}/${x}/${y}.png" ];
        options = OpenLayers.Util.extend({
            numZoomLevels : 19
        }, options);
        var newArguments = [ name, url, options ];
        OpenLayers.Layer.OSM.prototype.initialize.apply(this, newArguments);
    },

    CLASS_NAME : "OpenLayers.Layer.OSM.Osmarender"
});