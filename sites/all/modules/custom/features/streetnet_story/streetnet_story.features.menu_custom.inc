<?php
/**
 * @file
 * streetnet_story.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function streetnet_story_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-article-category-menu.
  $menus['menu-article-category-menu'] = array(
    'menu_name' => 'menu-article-category-menu',
    'title' => 'Categories',
    'description' => 'Taxonomy menu for right rail in articles (Stories, Events, Actions, Video)',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');
  t('Taxonomy menu for right rail in articles (Stories, Events, Actions, Video)');


  return $menus;
}
