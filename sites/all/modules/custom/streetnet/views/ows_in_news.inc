<?php

$view = new view();
$view->name = 'ows_in_news';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'aggregator_item';
$view->human_name = 'OWS in the News';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'OWS in the News';
$handler->display->display_options['css_class'] = 'news-block-view';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'View Full Archives';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '15';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '10';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Field: Aggregator: Body */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['exclude'] = TRUE;
$handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['description']['alter']['nl2br'] = TRUE;
$handler->display->display_options['fields']['description']['alter']['max_length'] = '175';
$handler->display->display_options['fields']['description']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['description']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['description']['alter']['more_link_text'] = 'Read More';
$handler->display->display_options['fields']['description']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['description']['alter']['preserve_tags'] = '<strong><b><em><i>';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
/* Field: Aggregator: Link */
$handler->display->display_options['fields']['link']['id'] = 'link';
$handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['link']['field'] = 'link';
$handler->display->display_options['fields']['link']['label'] = '';
$handler->display->display_options['fields']['link']['exclude'] = TRUE;
$handler->display->display_options['fields']['link']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['link']['alter']['text'] = '<a href="[link]" target="_blank">Read More</a>';
$handler->display->display_options['fields']['link']['alter']['path'] = '[link]';
$handler->display->display_options['fields']['link']['element_type'] = 'span';
$handler->display->display_options['fields']['link']['element_class'] = 'news-widget-link';
$handler->display->display_options['fields']['link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['link']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['link']['display_as_link'] = FALSE;
/* Field: Aggregator: Timestamp */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = TRUE;
$handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['timestamp']['alter']['preserve_tags'] = '<em><i>';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
/* Field: Aggregator: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<h5 class="feeditem-title">[title]</h5>
<p class="date">[timestamp]</p>
<article>[description]</article>';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = '[link]';
$handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '35';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['title']['display_as_link'] = FALSE;
/* Sort criterion: Aggregator: Timestamp */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'aggregator_item';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
/* Filter criterion: Aggregator feed: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'aggregator_feed';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['value'] = 'OWS in the News';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['display_description'] = 'Block for the home page widget.';
$handler->display->display_options['link_url'] = 'http://news.occupy.net';

