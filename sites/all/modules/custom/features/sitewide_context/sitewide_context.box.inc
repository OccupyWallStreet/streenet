<?php
/**
 * @file
 * sitewide_context.box.inc
 */

/**
 * Implements hook_default_box().
 */
function sitewide_context_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'header_social_media_links';
  $box->plugin_key = 'simple';
  $box->title = 'Connect with OccupyWallStreet.net on Social Media';
  $box->description = 'Social media links on the header';
  $box->options = array(
    'body' => array(
      'value' => '<a href="https://www.facebook.com/OccupyWallStreetNet" target="_blank"><img alt="facebook" id="facebook-icon" src="/sites/all/themes/files/facebook.png"></a><a href="https://twitter.com/#%21/OccupyInfo" target="_blank"><img alt="twitter" id="twitter-icon" src="/sites/all/themes/files/twitter.png"></a>
',
      'format' => 'full_html',
    ),
  );
  $export['header_social_media_links'] = $box;

  return $export;
}
