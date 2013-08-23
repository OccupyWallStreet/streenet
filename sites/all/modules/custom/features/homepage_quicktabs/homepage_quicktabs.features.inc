<?php
/**
 * @file
 * homepage_quicktabs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_quicktabs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function homepage_quicktabs_views_api() {
  return array("api" => "3.0");
}
