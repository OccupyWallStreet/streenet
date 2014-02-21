<?php
/**
 * @file
 * streetnet_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function streetnet_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function streetnet_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function streetnet_homepage_image_default_styles() {
  $styles = array();

  // Exported image style: featured_slideshow.
  $styles['featured_slideshow'] = array(
    'name' => 'featured_slideshow',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 540,
          'height' => 380,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
