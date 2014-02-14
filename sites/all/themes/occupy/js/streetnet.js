(function ($) {
  Drupal.behaviors.streetnet = {

    attach: function( context, settings ){
      var page_title = document.title.split(" | ")[0];
      var sidebar_share_widget = $( ".region-sidebar-second .owstech-share" );
      var article_footer_share_widget = $( "article.node .owstech-share" );
      if( sidebar_share_widget.length ) {
        sidebar_share_widget.find(".icon.facebook" ).on( 'click', function(e) {
          _paq.push(['trackPageView', page_title  + "shared on facebook via sidebar"]);
          _paq.push(['trackGoal', 3]);
        });
        sidebar_share_widget.find(".icon.twitter" ).on( 'click', function(e) {
          _paq.push(['trackPageView', page_title  + "shared on twitter via sidebar"]);
          _paq.push(['trackGoal', 2]);
        });
        sidebar_share_widget.find( ".icon.google-plus" ).on( 'click', function(e) {
          _paq.push(['trackPageView', page_title  + "shared on google-plus via sidebar"]);
          _paq.push(['trackGoal', 4]);
        });
        sidebar_share_widget.find( ".icon.reddit" ).on( 'click', function(e) {
          _paq.push(['trackPageView', page_title  + "shared on reddit via sidebar"]);
          _paq.push(['trackGoal', 1]);
        });
      }
      if( article_footer_share_widget.length ) {
        article_footer_share_widget.find( ".icon.facebook" ).on( 'click', function(e) {
          _paq.push(['trackPageView', page_title + "shared on facebook via article footer"]);
          _paq.push(['trackGoal', 7]);
        });
        article_footer_share_widget.find( ".icon.twitter" ).on( 'click', function(e) {
          _paq.push(['trackPageView', page_title + "shared on twitter via article footer "]);
          _paq.push(['trackGoal', 6]);
        });
        article_footer_share_widget.find( ".icon.google-plus" ).on( 'click', function(e) {
          _paq.push(['trackPageView', page_title + "shared on google-plus via article footer"]);
          _paq.push(['trackGoal', 8]);
        });
        article_footer_share_widget.find( ".icon.reddit" ).on( 'click', function(e) {
          _paq.push(['trackPageView', page_title + "shared on reddit via article footer"]);
          _paq.push(['trackGoal', 5]);
        });
      }
    }
  }
})(jQuery);