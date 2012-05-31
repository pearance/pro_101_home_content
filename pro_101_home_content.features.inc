<?php
/**
 * @file
 * pro_101_home_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_home_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function pro_101_home_content_image_default_styles() {
  $styles = array();

  // Exported image style: featured_large
  $styles['featured_large'] = array(
    'name' => 'featured_large',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '1220',
          'height' => '400',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
