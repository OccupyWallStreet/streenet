<?php
/**
 * @file
 * streetnet_stories.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function streetnet_stories_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'related_stories' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'share_story_' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'story_category_menu' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|story|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function streetnet_stories_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_stories';
  $ds_field->label = 'Related Stories';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|similarterms-block',
    'block_render' => '2',
  );
  $export['related_stories'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'share_story_';
  $ds_field->label = 'Share Story ';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'owstech_share|owstech-share',
    'block_render' => '3',
  );
  $export['share_story_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'story_category_menu';
  $ds_field->label = 'Story Category Menu';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'menu|menu-category-menu',
    'block_render' => '3',
  );
  $export['story_category_menu'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function streetnet_stories_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'article';
  $ds_layout->settings = array(
    'regions' => array(
      'article' => array(
        0 => 'field_story_category',
        1 => 'group_byline',
        2 => 'group_image_wrapper',
        3 => 'body',
        4 => 'field_image',
        6 => 'group_image_meta_wrapper',
        7 => 'field_image_source',
        9 => 'post_date',
        11 => 'field_image_caption',
        13 => 'field_author',
        15 => 'field_source',
      ),
      'sidebar' => array(
        5 => 'share_story_',
        8 => 'story_category_menu',
        10 => 'field_tags',
        12 => 'related_stories',
        14 => 'links',
      ),
    ),
    'fields' => array(
      'field_story_category' => 'article',
      'group_byline' => 'article',
      'group_image_wrapper' => 'article',
      'body' => 'article',
      'field_image' => 'article',
      'share_story_' => 'sidebar',
      'group_image_meta_wrapper' => 'article',
      'field_image_source' => 'article',
      'story_category_menu' => 'sidebar',
      'post_date' => 'article',
      'field_tags' => 'sidebar',
      'field_image_caption' => 'article',
      'related_stories' => 'sidebar',
      'field_author' => 'article',
      'links' => 'sidebar',
      'field_source' => 'article',
    ),
    'classes' => array(),
    'wrappers' => array(
      'article' => 'article',
      'sidebar' => 'aside',
    ),
    'layout_wrapper' => 'section',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|story|default'] = $ds_layout;

  return $export;
}
