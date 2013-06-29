<?php

$view = new view;
$view->name = 'article_tags';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Article Tags';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Tags';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Tags */
$handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
$handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
$handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
$handler->display->display_options['fields']['field_tags']['label'] = '';
$handler->display->display_options['fields']['field_tags']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_tags']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_tags']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_tags']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_tags']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_tags']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_tags']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_tags']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_tags']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_tags']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_tags']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_tags']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_tags']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_tags']['element_type'] = 'div';
$handler->display->display_options['fields']['field_tags']['element_class'] = 'tags-block-tag';
$handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_tags']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_tags']['hide_empty'] = 1;
$handler->display->display_options['fields']['field_tags']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_tags']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_tags']['group_rows'] = 0;
$handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_tags']['delta_reversed'] = 0;
$handler->display->display_options['fields']['field_tags']['delta_first_last'] = 0;
$handler->display->display_options['fields']['field_tags']['separator'] = ' ';
$handler->display->display_options['fields']['field_tags']['field_api_classes'] = 0;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['nid']['not'] = 0;
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

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_description'] = 'Tags Block';
