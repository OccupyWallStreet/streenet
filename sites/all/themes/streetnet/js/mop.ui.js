
if( !mop ) var mop = {};

( function() {

mop = {
  ui: {
    events: {
      click_string: 'click',
      mouseenter_string: 'mouseenter',
      mouseleave_string: 'mouseleave',
      initEventHandlers: function(){
        mop.ui.device = 'mouse';
        // If device supports touch we set our event strings to be touch events
        if ("ontouchstart" in document.documentElement) {
          mop.ui.events.click_string = 'touchend';
          mop.ui.events.mouseenter_string = 'touchstart';
          mop.ui.device = 'touch';
        }
      }
    }
  }
}

})();