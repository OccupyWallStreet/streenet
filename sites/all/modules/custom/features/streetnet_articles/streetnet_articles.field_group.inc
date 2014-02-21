<?php
/**
 * @file
 * streetnet_articles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function streetnet_articles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|event|default';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_date',
      1 => 'field_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Event Details',
      'instance_settings' => array(
        'classes' => 'event-details group-event-details field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_details|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|event|default';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
      2 => 'field_image_source',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image wrapper',
      'instance_settings' => array(
        'classes' => 'story-image-wrapper group-image-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_wrapper|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_story_byline|node|event|default';
  $field_group->group_name = 'group_story_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Byline',
    'weight' => '0',
    'children' => array(
      0 => 'field_author',
      1 => 'field_source',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Byline',
      'instance_settings' => array(
        'classes' => 'story-byline group-story-byline field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_story_byline|node|event|default'] = $field_group;

  return $export;
}
