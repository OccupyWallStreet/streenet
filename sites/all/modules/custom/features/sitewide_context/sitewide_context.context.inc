<?php
/**
 * @file
 * sitewide_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sitewide_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide context ( Header, footer )';
  $context->tag = 'Global';
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
          'weight' => '-46',
        ),
        'boxes-header_social_media_links' => array(
          'module' => 'boxes',
          'delta' => 'header_social_media_links',
          'region' => 'header_second',
          'weight' => '-45',
        ),
        'views-40d9c2bbf3dfb2e9edd9759d23fde429' => array(
          'module' => 'views',
          'delta' => '40d9c2bbf3dfb2e9edd9759d23fde429',
          'region' => 'header_second',
          'weight' => '-44',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global');
  t('Sitewide context ( Header, footer )');
  $export['sitewide'] = $context;

  return $export;
}
