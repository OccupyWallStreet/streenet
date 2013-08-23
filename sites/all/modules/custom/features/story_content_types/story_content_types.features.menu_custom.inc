<?php
/**
 * @file
 * story_content_types.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function story_content_types_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-category-menu.
  $menus['menu-category-menu'] = array(
    'menu_name' => 'menu-category-menu',
    'title' => 'Category Menu',
    'description' => 'Menu on story sidebar',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Category Menu');
  t('Menu on story sidebar');


  return $menus;
}
