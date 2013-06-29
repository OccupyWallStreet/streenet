<?php

$quicktabs = new stdClass();
$quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
$quicktabs->api_version = 1;
$quicktabs->machine_name = 'declaration_solidarity_autonomy';
$quicktabs->ajax = 0;
$quicktabs->hide_empty_tabs = FALSE;
$quicktabs->default_tab = 0;
$quicktabs->title = 'Learn';
$quicktabs->tabs = array(
  0 => array(
    'nid' => '20',
    'teaser' => 0,
    'hide_title' => 0,
    'title' => 'Declaration',
    'weight' => '-100',
    'type' => 'node',
  ),
  1 => array(
    'nid' => '22',
    'teaser' => 0,
    'hide_title' => 0,
    'title' => 'Solidarity',
    'weight' => '-99',
    'type' => 'node',
  ),
  2 => array(
    'nid' => '21',
    'teaser' => 0,
    'hide_title' => 0,
    'title' => 'Autonomy',
    'weight' => '-98',
    'type' => 'node',
  ),
);
$quicktabs->renderer = 'quicktabs';
$quicktabs->style = 'nostyle';
$quicktabs->options = array();
return $quicktabs;
