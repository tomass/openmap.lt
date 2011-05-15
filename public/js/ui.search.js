(function(){
    $.widget("ui.search", {
    	options: {
    		"engine" : "http://nominatim.openstreetmap.org/search",
    		"language" : "lt",
    		"viewbox":"20.6,53.8,26.9,56.5",
    		"countrycodes":"lt"
    	},
    	
    	_query : null,
    	_hidden : false,
    	_marker : null,
    	
    	_create : function(){
    		var self = this;
    		this._form = $('<form><input type="text" class="query" name="query"/></form>').appendTo(this.element);
    		this._button = $('<input type="submit" value="Search"/>').button().appendTo(this._form);
    		this._form.submit(function(){self._onSubmit(this);return false;});
    		this._panelResults = $('<div class="searchResults"></div>').appendTo(this.element);
    		var p = this._panelResults.offset();
    		this._panelResults.dialog({
    			autoOpen:false,
    			title:null,
    			maxHeight:this.element.parent().height() - p.top - 100,
    			resizable:false,
    			draggable:false,
    			position:[p.left,p.top + 5]
    		});
    		this._panelResults.css("max-height", this._panelResults.dialog("option", "maxHeight"));
    	},
    	
    	clear : function(){
    		this._panelResults.html("");
    		this.element.data('results', null);
    	},
    	
    	setMap : function(m){
    		this.options.map = m;
    	},
    	
    	getMap : function(){
    		return this.options.map;
    	},
    	
    	_onSubmit : function(e){
    		this._button.button("disable");
    		this._query = $("input[name=query]", e).val();
    		if(!this._query){
    			return false;
    		}
    		$("input[name=query]", e).addClass("loading");
    		var self = this;
    		$.getJSON(this.options.engine, {
                "q":this._query,
                "viewbox":this.options.viewbox,
                "format":"json",
                "bounded":1,
                "limit":50,
                "accept-language":this.language,
                "countrycodes":this.options.countrycodes,
                "addressdetails":1
            }, function(d,s){self._onResponse(d,s);});
    		return false;
    	},
    	
    	_onResponse : function(data, status){
    		this._button.button("enable");
    		$("input[name=query]", this._form).removeClass("loading");
    		if(data.length == 0){
				this.clear();
				this._panelResults.append("<span>Not found</span>").dialog("open");
				return;
    		}
    		this._process(data);
    		if(data.length == 1){
    			this._onSelect(0);
    		}
    	},
    	
    	_process : function(data){
    		this.clear();
    		this.element.data('results', data);
    		var list = $("<ul></ul>").appendTo(this._panelResults);
    		var self = this;
    		$.each(data, function(key, result){
    			var link = $('<a href="#">' + self._formatAddress(result) + '</a>');
    			if(result.icon){
    				link.prepend('<img src="' + result.icon + '"/>');
    			}
    			link.click(function(){self._onSelect(key, this);return false;});
    			var row = $('<li></li>').appendTo(list);
    			row.append(link);
    		});
    		this._panelResults.dialog("option", "title", "Results: " + this._query).dialog("open");
    	},
    	
    	_formatAddress : function(r){
    		var addr = new Array();
    		var title, housenumber, street, city, postcode;
    		
    		for(var i in r.address){
    			switch(i){
	    			case r.type:
	    				title = r.address[r.type];
	    				break;
	    			case "house_number":
	    				housenumber = r.address.house_number;
	    				break;
	    			case "road":
	    			case "pedestrian":
	    				street = r.address[i];
	    				break;
	    			case "city":
	    			case "town":
	    			case "village":
	    				city = r.address[i];
	    				/*
	    				if(city == "YAHOO-HIRES-20080313"){
	        				city = "Vilnius";
	        			}
	        			*/
	    				break;
	    			case "postcode":
	    				postcode = r.address.postcode;
	    				/*
	    				if(postcode.indexOf("LT") != 0){
	        				postcode = "LT-" + postcode;
	        			}else if(postcode.indexOf("LT-") != 0){
	        				postcode = postcode.replace(" ", "-");
	        			}
	        			*/
	    				break;
	    			default:
    			}
    		}
    		
    		if(title){
    			addr.push(title);
    		}
    		if(street){
    			if(housenumber){
    				street += " " + housenumber;
    			}
    			addr.push(street);
    		}
    		if(city){
    			addr.push(city);
    		}
    		
    		if(postcode){
    			addr.push(postcode);
    		}
    		if(addr.length > 0){
    			return addr.join(", ");
    		}else{
    			return r.display_name;
    		}
       	},
    	
    	_onSelect : function(i, e){
    		$("a", this._panelResults).removeClass("active");
    		$(e).addClass("active");
    		var details = this.element.data('results')[i];
    		this._setMarker(new OpenLayers.LonLat(details.lon, details.lat));
    		var bounds = new OpenLayers.Bounds(details.boundingbox[2], details.boundingbox[0], details.boundingbox[3], details.boundingbox[1]);
    		bounds.transform(new OpenLayers.Projection("EPSG:4326"), this.getMap().getProjectionObject());
    		this.getMap().zoomToExtent(bounds, true);
    		return false;
    	},
    	
    	_setMarker : function(position){
    		var layer = this.getMap().getLayersBy("name", "Markers")[0];
    		if(!layer){
    			return;
    		}
    		if(this._marker){
    			layer.removeMarker(this._marker);
    			this._marker.destroy();
    		}
    		this._marker = new OpenLayers.Marker(position.clone().transform(new OpenLayers.Projection("EPSG:4326"), map.getProjectionObject()), this._getArrow());
    		layer.addMarker(this._marker);
    	},
    	
    	_getArrow : function(){
    		var size = new OpenLayers.Size(25, 22);
    		var offset = new OpenLayers.Pixel(-30, -27);
    		var icon = new OpenLayers.Icon("/images/arrow.png", size, offset);
    		return icon;
    	},

    	_destroy : function() {
    		this._panelResults.dialog("destroy");
    		this._form.remove();
    	}
    });
})();