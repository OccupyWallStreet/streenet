<?php
/**
 * @file
 * streetnet_stories.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function streetnet_stories_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-category-menu:taxonomy/term/12
  $menu_links['menu-category-menu:taxonomy/term/12'] = array(
    'menu_name' => 'menu-category-menu',
    'link_path' => 'taxonomy/term/12',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Opinion',
    'options' => array(
      'attributes' => array(
        'title' => 'Opinion',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-category-menu:taxonomy/term/13
  $menu_links['menu-category-menu:taxonomy/term/13'] = array(
    'menu_name' => 'menu-category-menu',
    'link_path' => 'taxonomy/term/13',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => 'News',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-category-menu:taxonomy/term/14
  $menu_links['menu-category-menu:taxonomy/term/14'] = array(
    'menu_name' => 'menu-category-menu',
    'link_path' => 'taxonomy/term/14',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Feature',
    'options' => array(
      'attributes' => array(
        'title' => 'Feature',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-category-menu:taxonomy/term/26
  $menu_links['menu-category-menu:taxonomy/term/26'] = array(
    'menu_name' => 'menu-category-menu',
    'link_path' => 'taxonomy/term/26',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'GA Statement',
    'options' => array(
      'attributes' => array(
        'title' => 'GA Statement',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-category-menu:taxonomy/term/27
  $menu_links['menu-category-menu:taxonomy/term/27'] = array(
    'menu_name' => 'menu-category-menu',
    'link_path' => 'taxonomy/term/27',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => 'Event',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-category-menu:taxonomy/term/49
  $menu_links['menu-category-menu:taxonomy/term/49'] = array(
    'menu_name' => 'menu-category-menu',
    'link_path' => 'taxonomy/term/49',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Analysis',
    'options' => array(
      'attributes' => array(
        'title' => 'Analysis',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Analysis');
  t('Event');
  t('Feature');
  t('GA Statement');
  t('News');
  t('Opinion');


  return $menu_links;
}
