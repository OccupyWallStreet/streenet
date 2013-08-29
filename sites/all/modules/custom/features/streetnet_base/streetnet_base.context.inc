<?php
/**
 * @file
 * streetnet_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function streetnet_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Front page';
  $context->tag = '';
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
        'quicktabs-featured' => array(
          'module' => 'quicktabs',
          'delta' => 'featured',
          'region' => 'preface',
          'weight' => '-10',
        ),
        'quicktabs-feeds' => array(
          'module' => 'quicktabs',
          'delta' => 'feeds',
          'region' => 'preface',
          'weight' => '-9',
        ),
        'views-interocc_newsfeed-block' => array(
          'module' => 'views',
          'delta' => 'interocc_newsfeed-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-streetnet_stories-block' => array(
          'module' => 'views',
          'delta' => 'streetnet_stories-block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide Context';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-site-name' => array(
          'module' => 'delta_blocks',
          'delta' => 'site-name',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'delta_blocks-site-slogan' => array(
          'module' => 'delta_blocks',
          'delta' => 'site-slogan',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'header_second',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'header_second',
          'weight' => '-9',
        ),
        'views-header_announcements-block' => array(
          'module' => 'views',
          'delta' => 'header_announcements-block',
          'region' => 'header_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide Context');
  $export['sitewide'] = $context;

  return $export;
}
