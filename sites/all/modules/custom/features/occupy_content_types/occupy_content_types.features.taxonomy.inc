<?php
/**
 * @file
 * occupy_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function occupy_content_types_taxonomy_default_vocabularies() {
  return array(
    'story_category' => array(
      'name' => 'Story Category',
      'machine_name' => 'story_category',
      'description' => 'Categorization of Story content.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
