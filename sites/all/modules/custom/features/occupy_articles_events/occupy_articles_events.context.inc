<?php
/**
 * @file
 * occupy_articles_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function occupy_articles_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'articles_events';
  $context->description = 'Block placement on full nodes for stories and events';
  $context->tag = 'Articles and Events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
        'story' => 'story',
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
          'weight' => NULL,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Articles and Events');
  t('Block placement on full nodes for stories and events');
  $export['articles_events'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'category_listing_page';
  $context->description = '';
  $context->tag = 'category listing';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'story-category/*' => 'story-category/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-category_block-block' => array(
          'module' => 'views',
          'delta' => 'category_block-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('category listing');
  $export['category_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'taxonomy_listing_page';
  $context->description = 'Page for taxonomy terms.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'tags/*' => 'tags/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'taxonomy_listing',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page for taxonomy terms.');
  $export['taxonomy_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'weekly_roundup';
  $context->description = 'Context for Weekly Round-up Category';
  $context->tag = 'category';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        388 => 388,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'weekly-roundup',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Weekly Round-up Category');
  t('category');
  $export['weekly_roundup'] = $context;

  return $export;
}
