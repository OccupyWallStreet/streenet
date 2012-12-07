Drupal.behaviors.owstech_share = {
	attach: function(context, settings){
		console.log( 'Drupal.behaviors.owstech_share', context, settings );
		jQuery('.owstech-share ul a').click( function(e){
			e.preventDefault();
			/* @todo set win w and h separately based on which share. */
			/* @todo, consider using an inline iframe in a modal, mostly a css issue */
			window.open( jQuery(this).attr( 'href' ), 'owstech-share', 'location=1,menubar=0,scrollbars=1,status=0,titlebar=1,resizable=1,width=600,height=540' );
		});
	}
};
