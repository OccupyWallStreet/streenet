<?php
/**
 * @file
 * streetnet_meeting_notes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function streetnet_meeting_notes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function streetnet_meeting_notes_node_info() {
  $items = array(
    'notes' => array(
      'name' => t('Notes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
