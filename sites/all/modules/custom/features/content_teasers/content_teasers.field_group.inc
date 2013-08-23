<?php
/**
 * @file
 * content_teasers.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_teasers_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|event|teaser';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'content',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'group_story_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'content',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|story|teaser';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'content',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
      1 => 'group_story_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'content',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|node|story|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_story_info|node|event|teaser';
  $field_group->group_name = 'group_story_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Story Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_date',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Story Info',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_story_info|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_story_info|node|story|teaser';
  $field_group->group_name = 'group_story_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Story Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_author',
      1 => 'title',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Story Info',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_story_info|node|story|teaser'] = $field_group;

  return $export;
}
