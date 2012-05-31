<?php
/**
 * @file
 * pro_101_home_content.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function pro_101_home_content_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass;
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'front_page_showcase';
  $preset->title = 'Front Page Showcase';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_full';
  $preset->options = array(
    'animation' => 'slide',
    'animationDuration' => 600,
    'slideDirection' => 'horizontal',
    'slideshow' => 1,
    'slideshowSpeed' => 7000,
    'animationLoop' => 1,
    'randomize' => 0,
    'slideToStart' => 0,
    'directionNav' => 0,
    'controlNav' => 1,
    'keyboardNav' => 1,
    'mousewheel' => 0,
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'pauseOnAction' => 1,
    'controlsContainer' => '.flex-nav-container',
    'manualControls' => '',
  );
  $export['front_page_showcase'] = $preset;

  return $export;
}
