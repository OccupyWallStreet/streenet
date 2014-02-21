<?php
/**
 * @file
 * streetnet_homepage.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function streetnet_homepage_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'featured_content';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'OccupyWallStreet.net Featured Content';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_featured_stories-block',
      'hide_title' => 1,
      'title' => 'Featured Stories',
      'weight' => '-99',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_featured_videos-block',
      'hide_title' => 1,
      'title' => 'Featured Videos',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Stories');
  t('Featured Videos');
  t('OccupyWallStreet.net Featured Content');

  $export['featured_content'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'homepage_feeds';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Occupy Wall Street Feeds Listing';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'ows_in_news',
      'display' => 'block',
      'args' => '',
      'title' => 'OWS In the News',
      'weight' => '-100',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('OWS In the News');
  t('Occupy Wall Street Feeds Listing');

  $export['homepage_feeds'] = $quicktabs;

  return $export;
}
