<?php

$view = new view();
$view->name = 'streetnet_stories';
$view->description = 'Story listings (Homepage, read page, feed)';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Streetnet Stories';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'More Stories';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '40';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'ds';
$handler->display->display_options['row_options']['grouping'] = 0;
$handler->display->display_options['row_options']['advanced'] = 0;
$handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
$handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
$handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
  'story' => 'story',
);

/* Display: Homepage Block */
$handler = $view->new_display('block', 'Homepage Block', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '24';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'More Stories';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Category (field_story_category) */
$handler->display->display_options['arguments']['field_story_category_tid']['id'] = 'field_story_category_tid';
$handler->display->display_options['arguments']['field_story_category_tid']['table'] = 'field_data_field_story_category';
$handler->display->display_options['arguments']['field_story_category_tid']['field'] = 'field_story_category_tid';
$handler->display->display_options['arguments']['field_story_category_tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_story_category_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_story_category_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_story_category_tid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Content: Tags (field_tags) */
$handler->display->display_options['arguments']['field_tags_tid']['id'] = 'field_tags_tid';
$handler->display->display_options['arguments']['field_tags_tid']['table'] = 'field_data_field_tags';
$handler->display->display_options['arguments']['field_tags_tid']['field'] = 'field_tags_tid';
$handler->display->display_options['arguments']['field_tags_tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_tags_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_tags_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_tags_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['path'] = 'stories';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '42';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'read.xml';
$handler->display->display_options['displays'] = array(
  'default' => 'default',
  'block' => 'block',
  'page' => 'page',
);
