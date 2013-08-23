<?php
/**
 * @file
 * content_teasers.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function content_teasers_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'category_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|event|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'category_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_ows_events',
    ),
  );
  $export['node|story|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function content_teasers_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'category_link';
  $ds_field->label = 'Category Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a class="category-link [node:field_story_category]" href="category/[node:field_story_category]">[node:field_story_category]</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['category_link'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function content_teasers_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'contents' => array(
        0 => 'category_link',
        1 => 'group_content',
        2 => 'field_image',
        3 => 'group_story_info',
        4 => 'field_date',
        5 => 'title',
      ),
    ),
    'fields' => array(
      'category_link' => 'contents',
      'group_content' => 'contents',
      'field_image' => 'contents',
      'group_story_info' => 'contents',
      'field_date' => 'contents',
      'title' => 'contents',
    ),
    'classes' => array(),
    'wrappers' => array(
      'contents' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|event|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'contents' => array(
        0 => 'category_link',
        1 => 'group_content',
        2 => 'field_image',
        3 => 'group_story_info',
        4 => 'post_date',
        5 => 'title',
        6 => 'field_author',
      ),
    ),
    'fields' => array(
      'category_link' => 'contents',
      'group_content' => 'contents',
      'field_image' => 'contents',
      'group_story_info' => 'contents',
      'post_date' => 'contents',
      'title' => 'contents',
      'field_author' => 'contents',
    ),
    'classes' => array(),
    'wrappers' => array(
      'contents' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|story|teaser'] = $ds_layout;

  return $export;
}
