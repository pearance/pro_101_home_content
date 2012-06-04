<?php
/**
 * @file
 * pro_101_home_content.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pro_101_home_content_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|featured|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'featured';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'ds_user_picture' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_picture_flexslider_full',
    ),
  );
  $export['node|featured|default'] = $ds_fieldsetting;

  return $export;
}
