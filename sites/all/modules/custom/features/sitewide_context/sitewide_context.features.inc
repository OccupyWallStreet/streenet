<?php
/**
 * @file
 * sitewide_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sitewide_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sitewide_context_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sitewide_context_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => t('Use <em>announcements</em> to display short, important messages on the home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('The <em>Title</em> field is only using for administrative purposes; your <em>Announcement</em> should go in the <em>Body</em> field below.'),
    ),
  );
  return $items;
}
