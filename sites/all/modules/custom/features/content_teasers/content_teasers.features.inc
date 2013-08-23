<?php
/**
 * @file
 * content_teasers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_teasers_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function content_teasers_image_default_styles() {
  $styles = array();

  // Exported image style: story-teaser.
  $styles['story-teaser'] = array(
    'name' => 'story-teaser',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 117,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
