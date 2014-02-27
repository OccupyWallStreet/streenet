<?php
/**
 * @file
 * streetnet_story.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function streetnet_story_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create story content'.
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(
      'Author' => 'Author',
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create touts content'.
  $permissions['create touts content'] = array(
    'name' => 'create touts content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any story content'.
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any touts content'.
  $permissions['delete any touts content'] = array(
    'name' => 'delete any touts content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own story content'.
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(
      'Author' => 'Author',
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own touts content'.
  $permissions['delete own touts content'] = array(
    'name' => 'delete own touts content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any story content'.
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any touts content'.
  $permissions['edit any touts content'] = array(
    'name' => 'edit any touts content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own story content'.
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
    'roles' => array(
      'Author' => 'Author',
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Curator' => 'Curator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own touts content'.
  $permissions['edit own touts content'] = array(
    'name' => 'edit own touts content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
