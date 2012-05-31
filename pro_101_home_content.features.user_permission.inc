<?php
/**
 * @file
 * pro_101_home_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_home_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer flexslider.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'flexslider',
  );

  return $permissions;
}
