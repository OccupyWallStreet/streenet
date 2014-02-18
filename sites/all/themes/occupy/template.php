<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Implements hook_preprocess_page().
 */
function occupy_page_alter(&$vars) {
  $scripts = drupal_add_js();
  /* 
  we do a little juggling here, because we'd like to manipulate
  some stuff in our selects and exposed filters in streetnet.js
  before we have chosen do its thing
  */
  drupal_add_css('sites/all/themes/occupy/css/typography.css');
  unset( $scripts['sites/​all/libraries/​chosen/chosen.jquery.min.js'] );
  unset( $scripts['sites/all/modules/contrib/chosen/chosen.js'] );
  drupal_add_js('sites/all/themes/occupy/js/streetnet.js');  
  drupal_add_js( "sites/all/libraries/chosen/chosen.jquery.min.js" );
  drupal_add_js( "sites/all/modules/chosen/chosen.js" );
  // add our civi newsletter form submission js
  drupal_add_js('sites/all/themes/occupy/js/ows_civi_form.js');
  drupal_add_js('sites/all/themes/occupy/bower-components/REM-unit-polyfill/js/rem.min.js');
  // scss compiles in stylesheets... as we transition from omega, we'll be moving things into scss.
	// drupal_add_css('sites/all/themes/occupy/stylesheets/style.css');
}



