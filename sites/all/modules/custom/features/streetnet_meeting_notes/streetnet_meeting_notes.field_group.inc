<?php
/**
 * @file
 * streetnet_meeting_notes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function streetnet_meeting_notes_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|internal_notes|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'notes';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'meta',
    'weight' => '3',
    'children' => array(
      0 => 'field_internal_page_category',
      1 => 'field_internal_page_tags',
      2 => 'metatags',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'meta',
      'instance_settings' => array(
        'classes' => 'group-meta field-group-html5',
        'wrapper' => 'aside',
      ),
    ),
  );
  $export['group_meta|node|internal_notes|form'] = $field_group;

  return $export;
}
