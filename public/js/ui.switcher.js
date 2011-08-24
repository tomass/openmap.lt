/**
 * UI OpenLayer layer switcher
 */
(function(){
    $.widget("ui.switcher", {
    	_create : function(){
    		var base = $('<div id="ui-switcher-buttons-base" class="buttons-base"></div>').appendTo(this.element);
    		var over = $('<div id="ui-switcher-buttons-overlays" class="buttons-over"></div>').appendTo(this.element);
    		var layers = this.getMap().layers;
    		for(var i in layers){
    			var l = layers[i];
    			if(typeof l.layerCode == 'undefined'){
    				continue;
    			}
    			var id = 'ui-switcher-layer-' + l.keyid;
    			if(l.isBaseLayer){
    				var input = $('<input type="radio"/>')
    					.attr('name', 'baseLayer')
    					.appendTo(base);
    				$('<label/>').attr('for', id).text(l.name).appendTo(base);
    			}else{
    				var input = $('<input type="checkbox"/>')
    					.attr('name', 'overLayer')
    					.appendTo(over);
    				$('<label/>').attr('for', id).text(l.name).appendTo(over);
    			}
    			input.click($.proxy(this.onSwitch, this))
    				.attr('id', id)
    				.val(l.layerCode)
    				.prop('checked', l.visibility);
    		}
    		$('input', $('#ui-switcher-buttons-base').buttonset());
    		$('input', $('#ui-switcher-buttons-overlays').buttonset());
    	},
    	
    	setMap : function(m){
    		this.options.map = m;
    	},
    	
    	getMap : function(){
    		return this.options.map;
    	},
    	
    	onSwitch : function(e){
    		if($(e.target).attr('name') == 'baseLayer'){
    			var layers = this.getMap().getLayersBy("layerCode", $(e.target).val());
                this.getMap().setBaseLayer(layers[0]);
    		}else{
    			var layers = this.getMap().getLayersBy("layerCode", $(e.target).val());
                if(layers.length != 1){
                    return;
                }
                layers[0].setVisibility($(e.target).button("widget").hasClass("ui-state-active"));
    		}
    	}
    });
})();