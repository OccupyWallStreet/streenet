<?php

$view = new view();
$view->name = 'featured_videos';
$view->description = 'Display a list of all nodes in queue "Featured Videos"';
$view->tag = 'nodequeue';
$view->base_table = 'node';
$view->human_name = 'Homepage Featured Videos (nodequeue)';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Queue \'Featured Videos\'';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
/* Relationship: Nodequeue: Queue */
$handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
$handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
  'featured_videos' => 'featured_videos',
);
/* Field: Content: Video */
$handler->display->display_options['fields']['field_video']['id'] = 'field_video';
$handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
$handler->display->display_options['fields']['field_video']['field'] = 'field_video';
$handler->display->display_options['fields']['field_video']['label'] = '';
$handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
$handler->display->display_options['fields']['field_video']['type'] = 'video_embed_field_thumbnail';
$handler->display->display_options['fields']['field_video']['settings'] = array(
  'image_style' => '540x380',
  'image_link' => 'node',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = '';
$handler->display->display_options['fields']['counter']['exclude'] = TRUE;
$handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
/* Sort criterion: Nodequeue: Position */
$handler->display->display_options['sorts']['position']['id'] = 'position';
$handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['sorts']['position']['field'] = 'position';
$handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
/* Filter criterion: Content: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = 0;
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'nodequeue/2';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'slideshow';
$handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
$handler->display->display_options['style_options']['slideshow_skin'] = 'default';
$handler->display->display_options['style_options']['skin_info'] = array(
  'class' => 'default',
  'name' => 'Default',
  'module' => 'views_slideshow',
  'path' => '',
  'stylesheets' => array(),
);
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'field_video' => 0,
  'title' => 0,
  'body' => 0,
  'counter' => 0,
  'body_1' => 0,
);
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'counter' => 'counter',
  'field_video' => 0,
  'title' => 0,
  'body' => 0,
  'body_1' => 0,
);
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
$handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
$handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '7500';
$handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
$handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['pause_on_click'] = 1;
$handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
$handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'counter' => 'counter',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Video */
$handler->display->display_options['fields']['field_video']['id'] = 'field_video';
$handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
$handler->display->display_options['fields']['field_video']['field'] = 'field_video';
$handler->display->display_options['fields']['field_video']['label'] = '';
$handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
$handler->display->display_options['fields']['field_video']['type'] = 'video_embed_field_thumbnail';
$handler->display->display_options['fields']['field_video']['settings'] = array(
  'image_style' => '540x380',
  'image_link' => 'node',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<div id="transparency"></div>
<div id="mycontent"><h2>[title]</h2></div>';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = '';
$handler->display->display_options['fields']['counter']['exclude'] = TRUE;
$handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
$handler->display->display_options['block_description'] = 'Queue \'Featured Videos\'';
