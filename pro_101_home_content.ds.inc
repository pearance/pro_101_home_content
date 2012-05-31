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
  $ds_fieldsetting->id = 'node|featured|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'featured';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|featured|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pro_101_home_content_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|featured|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'featured';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_title_graphic',
      ),
      'left' => array(
        1 => 'title',
      ),
      'right' => array(
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_title_graphic' => 'header',
      'title' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
  );
  $export['node|featured|teaser'] = $ds_layout;

  return $export;
}
