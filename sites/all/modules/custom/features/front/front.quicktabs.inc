<?php
/**
 * @file
 * front.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function front_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'featured';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Featured';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_featured_stories-block',
      'hide_title' => 1,
      'title' => 'Featured',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_featured_videos-block',
      'hide_title' => 1,
      'title' => 'Video',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured');
  t('Video');

  $export['featured'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'feeds';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Feeds';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'ows_in_news',
      'display' => 'default',
      'args' => '',
      'title' => 'In the News',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'ows_on_twitter',
      'display' => 'default',
      'args' => '',
      'title' => 'On Twitter',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'nycga_net_events_widget',
      'display' => 'default',
      'args' => '',
      'title' => 'Events',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Feeds');
  t('In the News');
  t('On Twitter');

  $export['feeds'] = $quicktabs;

  return $export;
}
