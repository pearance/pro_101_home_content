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

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = 'Section';
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
        'views-showcase-block' => array(
          'module' => 'views',
          'delta' => 'showcase-block',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section');
  $export['home'] = $context;

  return $export;
}