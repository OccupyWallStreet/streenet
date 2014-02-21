<?php
/**
 * @file
 * streetnet_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function streetnet_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'Homepage context for streetnet';
  $context->tag = 'Homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-ows_stories-stories_page' => array(
          'module' => 'views',
          'delta' => '-exp-ows_stories-stories_page',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ows_stories-block_2' => array(
          'module' => 'views',
          'delta' => 'ows_stories-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-interocc_newsfeed-block' => array(
          'module' => 'views',
          'delta' => 'interocc_newsfeed-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'quicktabs-featured_content' => array(
          'module' => 'quicktabs',
          'delta' => 'featured_content',
          'region' => 'preface_first',
          'weight' => '-8',
        ),
        'quicktabs-homepage_feeds' => array(
          'module' => 'quicktabs',
          'delta' => 'homepage_feeds',
          'region' => 'preface_first',
          'weight' => '-7',
        ),
        'views-feeds-interocc_feed' => array(
          'module' => 'views',
          'delta' => 'feeds-interocc_feed',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage');
  t('Homepage context for streetnet');
  $export['homepage'] = $context;

  return $export;
}
