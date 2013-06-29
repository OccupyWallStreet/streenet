<?php

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
    'bid' => 'views_delta_nodequeue_1-block',
    'hide_title' => 1,
    'title' => 'Featured',
    'weight' => '-100',
    'type' => 'block',
  ),
  1 => array(
    'bid' => 'views_delta_nodequeue_2-block',
    'hide_title' => 1,
    'title' => 'Video',
    'weight' => '-99',
    'type' => 'block',
  ),
);
$quicktabs->renderer = 'quicktabs';
$quicktabs->style = 'nostyle';
$quicktabs->options = array();
return $quicktabs;
