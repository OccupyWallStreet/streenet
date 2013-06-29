<?php

$view = new view();
$view->name = 'similarterms';
$view->description = 'Related stories provided by "Similar by Terms" Module';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Related Stories';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Related Terms';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'long';
/* Field: Content: Category */
$handler->display->display_options['fields']['field_story_category']['id'] = 'field_story_category';
$handler->display->display_options['fields']['field_story_category']['table'] = 'field_data_field_story_category';
$handler->display->display_options['fields']['field_story_category']['field'] = 'field_story_category';
$handler->display->display_options['fields']['field_story_category']['label'] = '';
$handler->display->display_options['fields']['field_story_category']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_story_category']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_story_category']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['field_story_category']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['field_story_category']['element_label_colon'] = FALSE;
/* Field: Content: Author */
$handler->display->display_options['fields']['field_author']['id'] = 'field_author';
$handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
$handler->display->display_options['fields']['field_author']['field'] = 'field_author';
$handler->display->display_options['fields']['field_author']['label'] = '';
$handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['label'] = '';
$handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<div class="related-story [field_story_category]" >
<time class="stories-block-date" pubdate>[field_date][created]</time>
<h5>[title]</h5>
<div class="author">[field_author]</div>
</div>';
$handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['alt'] = 'Read [title]';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Sort criterion: Similar By Terms: Similarity */
$handler->display->display_options['sorts']['similarterms']['id'] = 'similarterms';
$handler->display->display_options['sorts']['similarterms']['table'] = 'node';
$handler->display->display_options['sorts']['similarterms']['field'] = 'similarterms';
/* Contextual filter: Similar By Terms: Nid */
$handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
$handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
$handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
$handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_caching'] = '4';
