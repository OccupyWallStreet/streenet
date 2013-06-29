<?php

$view = new view();
$view->name = 'nycga_net_events_widget';
$view->description = 'View for the NYCGA.net events feed';
$view->tag = 'Homepage Feeds';
$view->base_table = 'aggregator_item';
$view->human_name = 'NYCGA.net Events Widget';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'NYCGA.net Events';
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
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'title' => 'title',
  'description' => 'description',
  'link' => 'link',
);
/* Field: Aggregator: Link */
$handler->display->display_options['fields']['link']['id'] = 'link';
$handler->display->display_options['fields']['link']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['link']['field'] = 'link';
$handler->display->display_options['fields']['link']['label'] = '';
$handler->display->display_options['fields']['link']['exclude'] = TRUE;
$handler->display->display_options['fields']['link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['link']['element_default_classes'] = FALSE;
/* Field: Aggregator: Body */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['exclude'] = TRUE;
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
/* Field: Aggregator: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'aggregator_item';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<h5 class=\'event feeditem-title\'>[title]</h5>
<section class="event">[description]</section>
';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = '[link] ';
$handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
$handler->display->display_options['filters']['title']['value'] = 'NYCGA dot net Events';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['display_description'] = 'Block for the home page widget.';
$handler->display->display_options['link_url'] = 'http://news.occupy.net';
