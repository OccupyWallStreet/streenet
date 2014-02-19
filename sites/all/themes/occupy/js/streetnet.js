var streetnet = {};

(function ($) {
  
  Drupal.behaviors.streetnet = {
    attach: function( context, settings ){
      streetnet.log_shares();
      streetnet.init_form_placeholders();
      if( $(".view-ows-stories .view-filters").length ) {
        streetnet.enhance_story_filters();
      }
    }
  }
  
  streetnet.init_form_placeholders = function(){
    var label = $('label[for=email-Primary]').text();
    $('label[form=email-Primary]').hide();
    $('#email-Primary').attr("placeholder", label );
  }

  streetnet.enhance_story_filters = function(){

    $("#edit-field-story-category-tid-wrapper label").hide();
    // $("#edit-field-story-category-tid").attr('placeholder','Filter by category');
    $("#edit-field-story-category-tid").attr('data-placeholder','Filter by category');
    $("#edit_field_story_category_tid_chosen .chosen-choices .default").val('Filter by category');

    $("#edit-field-tags-tid-wrapper label").hide();
    // $("#edit-field-tags-tid").attr('placeholder','Filter by tag');
    $("#edit-field-tags-tid").attr('data-placeholder','Filter by tags');
    $("#edit_field_tags_tid_chosen .chosen-choices .default").val('Filter by tags');

    $("#edit-keys-wrapper label").hide();
    $("#edit-keys").attr( 'placeholder', 'Search' );

  }


  streetnet.log_shares = function(){
    var page_title, sidebar_share_widget, article_footer_share_widget;
    page_title = document.title.split(" | ")[0];
    sidebar_share_widget = $( ".region-sidebar-second .owstech-share" );
    article_footer_share_widget = $( "article.node .owstech-share" );
    if( sidebar_share_widget.length ) {
      sidebar_share_widget.find(".icon.facebook" ).on( 'click', function(e) {
        _paq.push(['trackPageView', "sidebar fb share: " + page_title ]);
        _paq.push(['trackGoal', 3]);
      });
      sidebar_share_widget.find(".icon.twitter" ).on( 'click', function(e) {
        _paq.push(['trackPageView', "sidebar twitter share: " + page_title ]);
        _paq.push(['trackGoal', 2]);
      });
      sidebar_share_widget.find( ".icon.google-plus" ).on( 'click', function(e) {
        _paq.push(['trackPageView', "sidebar g+ share: " + page_title ]);
        _paq.push(['trackGoal', 4]);
      });
      sidebar_share_widget.find( ".icon.reddit" ).on( 'click', function(e) {
        _paq.push(['trackPageView', "sidebar reddit share: " + page_title ]);
        _paq.push(['trackGoal', 1]);
      });
    }
    if( article_footer_share_widget.length ) {
      article_footer_share_widget.find( ".icon.facebook" ).on( 'click', function(e) {
        _paq.push(['trackPageView', "articlefooter fb share" + page_title ]);
        _paq.push(['trackGoal', 7]);
      });
      article_footer_share_widget.find( ".icon.twitter" ).on( 'click', function(e) {
        _paq.push(['trackPageView', "articlefooter twitter share" + page_title ]);
        _paq.push(['trackGoal', 6]);
      });
      article_footer_share_widget.find( ".icon.google-plus" ).on( 'click', function(e) {
        _paq.push(['trackPageView', "articlefooter g+ share" + page_title ]);
        _paq.push(['trackGoal', 8]);
      });
      article_footer_share_widget.find( ".icon.reddit" ).on( 'click', function(e) {
        _paq.push(['trackPageView', "articlefooter reddit share" + page_title ]);
        _paq.push(['trackGoal', 5]);
      });
    }
  }

})(jQuery);