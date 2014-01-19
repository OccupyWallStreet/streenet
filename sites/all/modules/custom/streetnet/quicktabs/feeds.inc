<?php 
$quicktabs = new stdClass();
$quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
$quicktabs->api_version = 1;
$quicktabs->machine_name = 'feeds';
$quicktabs->ajax = 0;
$quicktabs->hide_empty_tabs = TRUE;
$quicktabs->default_tab = 0;
$quicktabs->title = 'Feeds';
$quicktabs->tabs = array(
  0 => array(
    'bid' => 'views_delta_ows_in_news-block',
    'hide_title' => 1,
    'title' => 'In the News',
    'weight' => '-100',
    'type' => 'block',
  ),
  1 => array(
    'bid' => 'views_delta_ows_on_twitter-block',
    'hide_title' => 1,
    'title' => 'On Twitter',
    'weight' => '-99',
    'type' => 'block',
  ),
  2 => array(
    'bid' => 'views_delta_nycga_net_events_widget-block',
    'hide_title' => 1,
    'title' => 'NYCGA Events',
    'weight' => '-98',
    'type' => 'block',
  ),
);
$quicktabs->renderer = 'quicktabs';
$quicktabs->style = 'nostyle';
$quicktabs->options = array();
return $quicktabs;