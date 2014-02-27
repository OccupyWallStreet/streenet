<?php
/**
 * @file
 * streetnet_story.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function streetnet_story_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'article_sidebar_touts' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'category_menu' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'related_articles' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'sidebar_share_widget' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'sidebar_tags' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:5:"title";s:9:"formatter";s:28:"taxonomy_term_reference_link";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:1;s:19:"override_title_text";s:4:"Tags";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:15:"node:field_tags";}',
        'load_terms' => 1,
        'ft' => array(),
      ),
    ),
    'tabs' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'page-title',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'links' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'time',
          'fi-cl' => 'date date-posted',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|story|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story|related_articles';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story';
  $ds_fieldsetting->view_mode = 'related_articles';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_medium',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'time',
          'fi-cl' => 'date date-posted',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'summary',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_story_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'story-category',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|story|related_articles'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|touts|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'touts';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|touts|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function streetnet_story_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'article_sidebar_touts';
  $ds_field->label = 'Article Sidebar Touts';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|663806d5d846a244edcedc0e0dd0cad8',
    'block_render' => '3',
  );
  $export['article_sidebar_touts'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'category_menu';
  $ds_field->label = 'Category Menu';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'story|full
event|full
video|full';
  $ds_field->properties = array(
    'block' => 'menu|menu-article-category-menu',
    'block_render' => '1',
  );
  $export['category_menu'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_articles';
  $ds_field->label = 'Related Articles';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'story|full
event|full
video|full';
  $ds_field->properties = array(
    'block' => 'views|a9761ef365202efd686d970de10682ce',
    'block_render' => '2',
  );
  $export['related_articles'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'sidebar_share_widget';
  $ds_field->label = 'Sidebar Share Widget';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'owstech_share|owstech-share',
    'block_render' => '3',
  );
  $export['sidebar_share_widget'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'sidebar_tags';
  $ds_field->label = 'Sidebar Tags';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'story|default
story|full
event|default
event|full
video|default
video|full';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['sidebar_tags'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'tabs';
  $ds_field->label = 'Tabs';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'blockify|blockify-tabs',
    'block_render' => '1',
  );
  $export['tabs'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function streetnet_story_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_author',
        2 => 'field_source',
        3 => 'field_media',
        4 => 'field_image',
        5 => 'field_image_caption',
        6 => 'field_image_source',
        7 => 'body',
      ),
      'right' => array(
        8 => 'field_story_category',
        9 => 'field_tags',
        10 => 'path',
        11 => 'metatags',
      ),
      'hidden' => array(
        12 => 'field_ga_consensed',
        13 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_author' => 'left',
      'field_source' => 'left',
      'field_media' => 'left',
      'field_image' => 'left',
      'field_image_caption' => 'left',
      'field_image_source' => 'left',
      'body' => 'left',
      'field_story_category' => 'right',
      'field_tags' => 'right',
      'path' => 'right',
      'metatags' => 'right',
      'field_ga_consensed' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'section',
      'right' => 'aside',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => 'article',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|story|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'tabs',
        1 => 'group_header',
        2 => 'post_date',
        3 => 'group_media',
        4 => 'body',
        5 => 'title',
        6 => 'field_author',
        7 => 'owstech_share_links',
        8 => 'group_article_meta',
        9 => 'field_source',
        10 => 'group_byline',
        12 => 'field_tags',
        18 => 'field_media',
        19 => 'field_image',
        20 => 'field_image_source',
        21 => 'field_image_caption',
      ),
      'right' => array(
        11 => 'sidebar_share_widget',
        13 => 'sidebar_tags',
        14 => 'category_menu',
        15 => 'article_sidebar_touts',
        16 => 'related_articles',
        17 => 'links',
      ),
    ),
    'fields' => array(
      'tabs' => 'left',
      'group_header' => 'left',
      'post_date' => 'left',
      'group_media' => 'left',
      'body' => 'left',
      'title' => 'left',
      'field_author' => 'left',
      'owstech_share_links' => 'left',
      'group_article_meta' => 'left',
      'field_source' => 'left',
      'group_byline' => 'left',
      'sidebar_share_widget' => 'right',
      'field_tags' => 'left',
      'sidebar_tags' => 'right',
      'category_menu' => 'right',
      'article_sidebar_touts' => 'right',
      'related_articles' => 'right',
      'links' => 'right',
      'field_media' => 'left',
      'field_image' => 'left',
      'field_image_source' => 'left',
      'field_image_caption' => 'left',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'left' => array(
        'article-content' => 'article-content',
      ),
    ),
    'wrappers' => array(
      'header' => 'header',
      'left' => 'section',
      'right' => 'aside',
      'footer' => 'footer',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => 'article',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|story|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story|related_articles';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story';
  $ds_layout->view_mode = 'related_articles';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'post_date',
        1 => 'title',
        2 => 'group_byline',
        3 => 'body',
        4 => 'field_story_category',
        5 => 'field_author',
        6 => 'group_header',
      ),
    ),
    'fields' => array(
      'post_date' => 'ds_content',
      'title' => 'ds_content',
      'group_byline' => 'ds_content',
      'body' => 'ds_content',
      'field_story_category' => 'ds_content',
      'field_author' => 'ds_content',
      'group_header' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'section',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => 'article',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
  );
  $export['node|story|related_articles'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|touts|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'touts';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_content',
        2 => 'field_image',
        3 => 'field_blurb',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_content' => 'ds_content',
      'field_image' => 'ds_content',
      'field_blurb' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|touts|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function streetnet_story_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'related_articles';
  $ds_view_mode->label = 'Related Articles';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['related_articles'] = $ds_view_mode;

  return $export;
}
