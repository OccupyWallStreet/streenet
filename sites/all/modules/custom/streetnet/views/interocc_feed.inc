<?php

$view = new view();
$view->name = 'interocc_newsfeed';
$view->description = 'Interocc news feed of Occupy news from outside NYC';
$view->tag = 'default';
$view->base_table = 'aggregator_item';
$view->human_name = 'Interocc News Feed';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Interocc News Feed';
$handler->display->display_options['css_class'] = 'news-block-view';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'View Full Archives';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '9';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'news-block-front';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Field: Aggregator: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '35';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_type'] = 'div';
$handler->display->display_options['fields']['title']['element_class'] = 'news-title-field';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'news-title-field-label';
$handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
/* Field: Aggregator: Timestamp */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_type'] = 'div';
$handler->display->display_options['fields']['timestamp']['element_class'] = 'timestamp-field';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['timestamp']['element_wrapper_class'] = 'timestamp-field-label';
$handler->display->display_options['fields']['timestamp']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
/* Field: Aggregator: Body */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['description']['alter']['max_length'] = '175';
$handler->display->display_options['fields']['description']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['description']['alter']['more_link_text'] = 'Read More';
$handler->display->display_options['fields']['description']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['description']['alter']['preserve_tags'] = '<strong><b><em><i>';
$handler->display->display_options['fields']['description']['element_type'] = 'div';
$handler->display->display_options['fields']['description']['element_class'] = 'news-body-field';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
/* Field: Aggregator: Author */
$handler->display->display_options['fields']['author']['id'] = 'author';
$handler->display->display_options['fields']['author']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['author']['field'] = 'author';
$handler->display->display_options['fields']['author']['label'] = '';
$handler->display->display_options['fields']['author']['exclude'] = TRUE;
$handler->display->display_options['fields']['author']['element_label_colon'] = FALSE;
/* Sort criterion: Aggregator: Timestamp */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'aggregator_item';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
/* Filter criterion: Aggregator feed: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'aggregator_feed';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['value'] = 'Interocc News';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['display_description'] = 'Home page block.';
$handler->display->display_options['link_url'] = 'http://news.occupy.net';
