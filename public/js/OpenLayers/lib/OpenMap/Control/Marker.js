/**
 * @requires OpenLayers/Control.js
 * @requires OpenLayers/Marker.js
 * @requires OpenLayers/BaseTypes/Size.js
 * @requires OpenLayers/BaseTypes/Pixel.js
 * @requires OpenLayers/Icon.js
 * @requires OpenLayers/Handler/Click.js
 */

OpenLayers.Control.Marker = OpenLayers.Class(OpenLayers.Control, {
	displayProjection: null,
    defaultHandlerOptions: {'single': false, 'double': true, 'pixelTolerance': 0, 'stopSingle': false, 'stopDouble': true},
    initialize: function(options) {
        this.handlerOptions = OpenLayers.Util.extend({}, this.defaultHandlerOptions);
        OpenLayers.Control.prototype.initialize.apply(this, arguments); 
        this.handler = new OpenLayers.Handler.Click(this, {'dblclick':this.trigger}, this.handlerOptions);
    },
    setMap: function(map){
    	OpenLayers.Control.prototype.setMap.apply(this, arguments);
    	var args = OpenLayers.Util.getParameters();
        if(args.marker){
            lonlat = new OpenLayers.LonLat(parseFloat(args.lon), parseFloat(args.lat));
            this.setMarker(lonlat);
        }
    },
    setMarker: function(lonlat, description){
        var l = lonlat.clone();
        if(this.displayProjection.projCode != this.map.getProjection()){
            l.transform(this.displayProjection, this.map.getProjectionObject());
        }
    	this.map.setCenter(l, this.map.getZoom());
    	var marker = new OpenLayers.Marker(l, this.getIcon());
    	markers.addMarker(marker);
    	if(description){
    	    openMapPopup(marker, description);
    	    marker.events.register("click", marker, function(){
        	    openMapPopup(marker, description);
            });
    	}
    },
    getIcon: function(){
        var size = new OpenLayers.Size(25, 22);
        var offset = new OpenLayers.Pixel(-25, -22);
        var icon = new OpenLayers.Icon("/images/arrow.png", size, offset);
        return icon;
    },
    getDescription: function(lonlat){
    	var href = document.location.href;
    	var params = OpenLayers.Util.getParameters(href);
        params.zoom = this.map.getZoom();
        params.lat = lonlat.lat;
        params.lon = lonlat.lon;

    	if (href.indexOf('?') != -1) {
            href = href.substring( 0, href.indexOf('?') );
        }
        params.marker = 1;
    	href += '?' + OpenLayers.Util.getParameterString(params);
        return 'Link: <input type="text" size="50" value="' + href + '"/>';
    },
    trigger: function(e) {
        var lonlat = map.getLonLatFromViewPortPx(e.xy);
        if (this.displayProjection) {
            lonlat.transform(this.map.getProjectionObject(), this.displayProjection);
        }
        this.setMarker(lonlat, this.getDescription(lonlat));        
    }
});
