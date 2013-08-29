<?php
/**
 * @file
 * streetnet_boxes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function streetnet_boxes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
