<?php
/**
 * @file
 * pro_101_home_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_home_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slideshow-slideshow' => array(
          'module' => 'views',
          'delta' => 'slideshow-slideshow',
          'region' => 'impact_1',
          'weight' => '-10',
        ),
        'views-blog-latest_post_block' => array(
          'module' => 'views',
          'delta' => 'blog-latest_post_block',
          'region' => 'pre_1',
          'weight' => '-11',
        ),
        'jasm-twitter_search_widget' => array(
          'module' => 'jasm',
          'delta' => 'twitter_search_widget',
          'region' => 'pre_1',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'front',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['home'] = $context;

  return $export;
}
