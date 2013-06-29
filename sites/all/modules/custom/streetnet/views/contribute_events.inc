<?php

$view = new view;
$view->name = 'contribute_events';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Events on Contribute Page';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Attend Actions & Events';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = 1;
$handler->display->display_options['row_options']['default_field_elements'] = 0;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<div class="custom-title-wrapper"><div class="custom-title-first">Attend</div><div class="custom-title-second">Actions & Events</div></div>
There are many <a href="http://www.nycga.net/events/" target="_blank">OWS-affiliated events</a> taking place every day including assemblies, skill shares, open spaces, direct actions and performances. Come out and participate in democracy in action!';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['header']['area']['tokenize'] = 0;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = 'There are currently no upcoming events.';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
$handler->display->display_options['empty']['area']['tokenize'] = 0;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['label'] = '';
$handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_date']['alter']['text'] = '<p class="date">[field_date]</p>';
$handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_date']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_date']['element_type'] = '0';
$handler->display->display_options['fields']['field_date']['element_class'] = 'contribute-block-date-field';
$handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date']['element_default_classes'] = 0;
$handler->display->display_options['fields']['field_date']['hide_empty'] = 1;
$handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'ows_events',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
$handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
/* Field: Content: Address */
$handler->display->display_options['fields']['field_address']['id'] = 'field_address';
$handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address']['field'] = 'field_address';
$handler->display->display_options['fields']['field_address']['label'] = '';
$handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_address']['alter']['text'] = '<p class="address">[field_address]</p>';
$handler->display->display_options['fields']['field_address']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_address']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_address']['element_type'] = 'span';
$handler->display->display_options['fields']['field_address']['element_class'] = '.contribute-block-location-name-field';
$handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_address']['element_default_classes'] = 0;
$handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
$handler->display->display_options['fields']['field_address']['settings'] = array(
  'use_widget_handlers' => 0,
  'format_handlers' => array(
    'organisation' => 'organisation',
  ),
);
$handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['text'] = '<h5>[title]</h5>';
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['external'] = 0;
$handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['element_type'] = 'h5';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = 0;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Sort criterion: Content: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
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
);
/* Filter criterion: Content: Date -  start date (field_date) */
$handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_date_value']['granularity'] = 'minute';
$handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
