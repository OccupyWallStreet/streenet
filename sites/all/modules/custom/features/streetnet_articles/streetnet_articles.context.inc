<?php
/**
 * @file
 * streetnet_articles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function streetnet_articles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'streetnet_articles';
  $context->description = 'Contexts for Stories, Events, Actions and Video Content Types';
  $context->tag = 'Stories';
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
        'owstech_share-owstech-share' => array(
          'module' => 'owstech_share',
          'delta' => 'owstech-share',
          'region' => 'sidebar_second',
          'weight' => '-45',
        ),
        'views-d453b8ea5e226f60f9e7b4993d8d64de' => array(
          'module' => 'views',
          'delta' => 'd453b8ea5e226f60f9e7b4993d8d64de',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexts for Stories, Events, Actions and Video Content Types');
  t('Stories');
  $export['streetnet_articles'] = $context;

  return $export;
}
