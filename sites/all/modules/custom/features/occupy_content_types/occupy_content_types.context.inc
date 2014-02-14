<?php
/**
 * @file
 * occupy_content_types.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function occupy_content_types_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'articles_events';
  $context->description = 'Block placement on full nodes for stories, events, and videos';
  $context->tag = 'Stories, Events and Videos';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
        'story' => 'story',
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-tags_block-block' => array(
          'module' => 'views',
          'delta' => 'tags_block-block',
          'region' => 'sidebar_second',
          'weight' => '-48',
        ),
        'boxes-join_team_box' => array(
          'module' => 'boxes',
          'delta' => 'join_team_box',
          'region' => 'sidebar_second',
          'weight' => '-47',
        ),
        'boxes-download_press_kit' => array(
          'module' => 'boxes',
          'delta' => 'download_press_kit',
          'region' => 'sidebar_second',
          'weight' => '-46',
        ),
        'owstech_share-owstech-share' => array(
          'module' => 'owstech_share',
          'delta' => 'owstech-share',
          'region' => 'sidebar_second',
          'weight' => '-49',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block placement on full nodes for stories, events, and videos');
  t('Stories, Events and Videos');
  $export['articles_events'] = $context;

  return $export;
}
