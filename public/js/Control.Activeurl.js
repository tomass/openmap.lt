/**
 * Control.Permalink
 */
OpenLayers.Control.Activeurl = OpenLayers.Class(OpenLayers.Control, {
	argParserClass : OpenLayers.Control.ArgParser,
	base : "",
	displayProjection : null,
	params : null,

	initialize : function() {
		OpenLayers.Control.prototype.initialize.apply(this, []);
		this.base = document.location.href;
		this.params = this.parseParams();
	},
	destroy : function() {
		this.map.events.unregister("moveend", this, this.update);
		this.map.events.unregister("changelayer", this, this.update);
		this.map.events.unregister("changebaselayer", this, this.update);
		OpenLayers.Control.prototype.destroy.apply(this, arguments)
	},
	setMap : function(d) {
		OpenLayers.Control.prototype.setMap.apply(this, arguments);
		for ( var b = 0, a = this.map.controls.length; b < a; b++) {
			var c = this.map.controls[b];
			if (c.CLASS_NAME == this.argParserClass.CLASS_NAME) {
				if (c.displayProjection != this.displayProjection) {
					this.displayProjection = c.displayProjection;
				}
				break;
			}
		}
		if (b == this.map.controls.length) {
			this.map.addControl(new this.argParserClass({
				displayProjection : this.displayProjection
			}))
		}
		if(this.params){
			this.set(this.params);
		}
	},
	set : function(params){
		if(params.zoom){
			this.map.zoomTo(params.zoom);
		}
		if(params.lat && params.lon){
			var l = new OpenLayers.LonLat(params.lon, params.lat);
			l = l.transform(epsg4326, this.map.getProjectionObject());
			this.map.panTo(l);
		}
		if(params.layers){
			this.setLayers(params.layers);
		}
	},
	setLayers : function(keys){
		keys = keys.split(/:/);
		var baseCode = keys.shift();
		var baseLayer = this.map.getLayersBy("layerCode", baseCode);
		this.map.setBaseLayer(baseLayer[0]);
		for(var i in keys){
			var layers = this.map.getLayersBy("layerCode", keys[i]);
			for(var l in layers){
				layers[l].setVisibility(true);
			}
		}
	},
	draw : function() {
		OpenLayers.Control.prototype.draw.apply(this, arguments);
		this.map.events.on({
			moveend : this.update,
			changelayer : this.update,
			changebaselayer : this.update,
			scope : this
		});
		this.update();
		return this.div
	},
	update : function() {
		var params = this.createParams();
		var loc = (Math.round(params.lat * 100000) / 100000) + "|" + (Math.round(params.lon * 100000) / 100000) + "|" + params.zoom + "|" + params.maplayers;
		setLocationParam("l", loc);
	},
	createParams : function(center, l, layers) {
		center = center || this.map.getCenter();
		var params = OpenLayers.Util.getParameters(this.base);
		if (center) {
			params.zoom = l || this.map.getZoom();
			var h = (center.lon / 20037508.34) * 180;
			var f = (center.lat / 20037508.34) * 180;
			f = 180 / Math.PI * (2 * Math.atan(Math.exp(f * Math.PI / 180)) - Math.PI / 2);
			params.lat = f;
			params.lon = h;
			layers = layers || this.map.layers;
			params.maplayers = this.map.baseLayer.layerCode;
			for ( var i in layers) {
				var layer = layers[i];
				if(typeof layer.keyid == "undefined" || !layer.getVisibility() || layer.isBaseLayer){
					continue;
				}
				params.maplayers += ((params.maplayers != "") ? ":" : "") + layer.layerCode;
			}
		}
		return params;
	},
	parseParams : function(){
		if(window.location.hash == ""){
			return false;
		}
		var h = window.location.hash;
		if(OpenLayers.String.contains(h, "#l=")){
			h = h.substr(3);
		}
		var params = h.split(/\|/);
		if(params.length != 4){
			return false;
		}
		return {
			lat : params[0],
			lon : params[1],
			zoom : params[2],
			layers : params[3]
		};
	},
	CLASS_NAME : "OpenLayers.Control.Activeurl"
});
