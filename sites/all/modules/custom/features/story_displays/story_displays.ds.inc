<?php
/**
 * @file
 * story_displays.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function story_displays_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|story|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function story_displays_ds_layout_settings_info() {
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
        0 => 'post_date',
        1 => 'group_byline',
        2 => 'group_image_wrapper',
        3 => 'body',
        4 => 'field_author',
        5 => 'field_image_source',
        7 => 'field_image_caption',
        8 => 'field_source',
        10 => 'field_image',
        11 => 'group_image_meta_wrapper',
      ),
      'sidebar' => array(
        6 => 'field_tags',
        9 => 'links',
      ),
    ),
    'fields' => array(
      'post_date' => 'article',
      'group_byline' => 'article',
      'group_image_wrapper' => 'article',
      'body' => 'article',
      'field_author' => 'article',
      'field_image_source' => 'article',
      'field_tags' => 'sidebar',
      'field_image_caption' => 'article',
      'field_source' => 'article',
      'links' => 'sidebar',
      'field_image' => 'article',
      'group_image_meta_wrapper' => 'article',
    ),
    'classes' => array(),
    'wrappers' => array(
      'article' => 'section',
      'sidebar' => 'aside',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|story|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'article';
  $ds_layout->settings = array(
    'regions' => array(
      'article' => array(
        0 => 'post_date',
        1 => 'group_byline',
        2 => 'group_image_wrapper',
        3 => 'body',
        4 => 'field_author',
        5 => 'field_image_source',
        7 => 'field_image_caption',
        8 => 'field_source',
        10 => 'field_image',
        11 => 'group_image_meta_wrapper',
      ),
      'sidebar' => array(
        6 => 'field_tags',
        9 => 'links',
      ),
    ),
    'fields' => array(
      'post_date' => 'article',
      'group_byline' => 'article',
      'group_image_wrapper' => 'article',
      'body' => 'article',
      'field_author' => 'article',
      'field_image_source' => 'article',
      'field_tags' => 'sidebar',
      'field_image_caption' => 'article',
      'field_source' => 'article',
      'links' => 'sidebar',
      'field_image' => 'article',
      'group_image_meta_wrapper' => 'article',
    ),
    'classes' => array(),
    'wrappers' => array(
      'article' => 'section',
      'sidebar' => 'aside',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|story|full'] = $ds_layout;

  return $export;
}
