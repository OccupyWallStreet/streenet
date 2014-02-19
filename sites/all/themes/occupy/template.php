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
  drupal_add_js('sites/all/themes/occupy/js/streetnet.js');
  // add our civi newsletter form submission js
  drupal_add_js('sites/all/themes/occupy/js/ows_civi_form.js');
  drupal_add_js('sites/all/themes/occupy/bower_components/REM-unit-polyfill/js/rem.min.js');
  // scss compiles in stylesheets... as we transition from omega, we'll be moving things into scss.
	// drupal_add_css('sites/all/themes/occupy/stylesheets/style.css');
  drupal_add_css('sites/all/themes/occupy/css/normalize.css');
  drupal_add_css('sites/all/themes/occupy/css/typography.css');
}

function occupy_css_alter(&$css) {
  // Because omega is shitty
  // and loads it's css after the themes css... 
  // which goes well beyond a philosophical difference
  // and creates all kinds of unpredictable scenarios
  // furthermore, the checkboxes in the themes settings, or messing
  // with the info file, don't seem to actually help nor does changing
  // css weights in the info file
  // Solution... kill it, til we can move off it.
  // Too much themeing work to do to just switch now... but we'll get
	unset($css['sites/all/themes/omega/alpha/css/alpha-debug.css']);
	unset($css['sites/all/themes/omega/alpha/css/alpha-reset.css']);
	unset($css['sites/all/themes/omega/omega/css/omega-text.css']);
	unset($css['sites/all/themes/omega/omega/css/omega-visuals.css']);
}


