<?php
/**
 * @file
 * streetnet_story.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function streetnet_story_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_meta|node|story|default';
  $field_group->group_name = 'group_article_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '5',
    'children' => array(
      0 => 'field_tags',
      1 => 'owstech_share_links',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'classes' => 'article-meta',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_article_meta|node|story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_meta|node|story|full';
  $field_group->group_name = 'group_article_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '4',
    'children' => array(
      0 => 'field_tags',
      1 => 'owstech_share_links',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Meta',
      'instance_settings' => array(
        'classes' => 'article-meta',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_article_meta|node|story|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_byline|node|story|default';
  $field_group->group_name = 'group_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Byline',
    'weight' => '3',
    'children' => array(
      0 => 'field_author',
      1 => 'post_date',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Byline',
      'instance_settings' => array(
        'classes' => 'byline',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_byline|node|story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_byline|node|story|full';
  $field_group->group_name = 'group_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_header';
  $field_group->data = array(
    'label' => 'Byline',
    'weight' => '4',
    'children' => array(
      0 => 'field_source',
      1 => 'field_author',
      2 => 'post_date',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Byline',
      'instance_settings' => array(
        'classes' => 'byline',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_byline|node|story|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_byline|node|story|related_articles';
  $field_group->group_name = 'group_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'related_articles';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Byline',
    'weight' => '2',
    'children' => array(
      0 => 'field_author',
      1 => 'group_header',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Byline',
      'instance_settings' => array(
        'classes' => 'byline',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_byline|node|story|related_articles'] = $field_group;

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
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'field_author',
      1 => 'title',
      2 => 'post_date',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'classes' => 'content',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_content|node|story|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|touts|default';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'touts';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'field_blurb',
      1 => 'field_image',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'wrapper' => '',
        'classes' => 'group-content field-group-html5',
      ),
    ),
  );
  $export['group_content|node|touts|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|touts|teaser';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'touts';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_blurb',
      1 => 'field_image',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'classes' => 'content',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_content|node|touts|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|story|default';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '1',
    'children' => array(
      0 => 'title',
      1 => 'group_byline',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'wrapper' => '',
        'classes' => 'group-header field-group-html5',
      ),
    ),
  );
  $export['group_header|node|story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|story|full';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '1',
    'children' => array(
      0 => 'title',
      1 => 'group_byline',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'classes' => 'header',
        'wrapper' => 'header',
      ),
    ),
  );
  $export['group_header|node|story|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|story|default';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
      2 => 'field_image_source',
      3 => 'field_media',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'classes' => 'media',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_media|node|story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|story|full';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
      2 => 'field_image_source',
      3 => 'field_media',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'classes' => 'media',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_media|node|story|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|story|teaser';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'story';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_media',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'classes' => 'media',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_media|node|story|teaser'] = $field_group;

  return $export;
}
