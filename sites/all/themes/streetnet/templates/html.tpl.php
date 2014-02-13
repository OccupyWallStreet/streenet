<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>  
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>

<!-- Piwik -->
<!-- On Privacy and Surveillance
We only track internal pageviews and shares
Our share module does no tracking on its own, 
It only connects to the service it corresponds to when you click a share link
The only link tracking we do via js, is logging which sharelinks you click
Our analytics are hosted by occupy.net, and we dont sell your data to marketers
or track your behavior.
 -->
<script type="text/javascript">
  var _paq = _paq || [];
  _paq.push(["trackPageView"]);
  _paq.push(["enableLinkTracking"]);
  (function() {
    var u=(("https:" == document.location.protocol) ? "https" : "http") + "://analytics.occupy.net/";
    _paq.push(["setTrackerUrl", u+"piwik.php"]);
    _paq.push(["setSiteId", "21"]);
    var d=document, g=d.createElement("script"), s=d.getElementsByTagName("script")[0]; g.type="text/javascript";
    g.defer=true; g.async=true; g.src=u+"piwik.js"; s.parentNode.insertBefore(g,s);

    var page_title = (document).attr( title );
    console.log("page_title": page_title );
    if( $( "#sidebars .block-owstech-share" ).length ) {
      $( "#sidebars .block-owstech-share .icon.facebook" ).on( 'click', function(e) {
        _paq.push(['trackPageView', page_title  + "shared on facebook via sidebar"]);
      });
      $( "#sidebars .block-owstech-share .icon.twitter" ).on( 'click', function(e) {
        _paq.push(['trackPageView', page_title  + "shared on twitter via sidebar"]);
      });
      $( "#sidebars .block-owstech-share .icon.google-plus" ).on( 'click', function(e) {
        _paq.push(['trackPageView', page_title  + "shared on google-plus via sidebar"]);
      });
      $( "#sidebars .block-owstech-share .icon.reddit" ).on( 'click', function(e) {
        _paq.push(['trackPageView', page_title  + "shared on reddit via sidebar"]);
      });
    }

    if( $( ".region-content .block-owstech-share" ).length ) {
      $( ".region-content .block-owstech-share .icon.facebook" ).on( 'click', function(e) {
        _paq.push(['trackPageView', page_title + "shared on facebook via sidebar"]);
      });
      $( ".region-content .block-owstech-share .icon.twitter" ).on( 'click', function(e) {
        _paq.push(['trackPageView', page_title + "shared on twitter via sidebar"]);
      });
      $( ".region-content .block-owstech-share .icon.google-plus" ).on( 'click', function(e) {
        _paq.push(['trackPageView', page_title + "shared on google-plus via sidebar"]);
      });
      $( ".region-content .block-owstech-share .icon.reddit" ).on( 'click', function(e) {
        _paq.push(['trackPageView', page_title + "shared on reddit via sidebar"]);
      });
    }
  })();
</script>
<!-- End Piwik Code -->

</body>
</html>