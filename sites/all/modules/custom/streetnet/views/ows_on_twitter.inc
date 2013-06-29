<?php

$view = new view();
$view->name = 'ows_on_twitter';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'aggregator_item';
$view->human_name = '#OWS on Twitter';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'OWS on Twitter';
$handler->display->display_options['css_class'] = 'news-block-view';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'View Full Archives';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['content'] = '<a class=\'button\' href="https://twitter.com/search?q=%23ows" target="_blank">#OWS on Twitter</a>';
$handler->display->display_options['footer']['area']['format'] = 'filtered_html';
/* Field: Aggregator: Body */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['description']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['description']['alter']['more_link_text'] = 'Read More';
$handler->display->display_options['fields']['description']['element_type'] = 'div';
$handler->display->display_options['fields']['description']['element_class'] = 'news-body-field';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['description']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['description']['element_wrapper_class'] = 'news-body-field-label';
$handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
/* Field: Aggregator: Timestamp */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
/* Sort criterion: Aggregator: Timestamp */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'aggregator_item';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
/* Filter criterion: Aggregator feed: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'aggregator_feed';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['value'] = '#OWS on Twitter';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['display_description'] = 'Block for the home page widget.';
$handler->display->display_options['link_url'] = 'http://news.occupy.net';
