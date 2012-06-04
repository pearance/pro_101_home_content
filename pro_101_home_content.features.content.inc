<?php
/**
 * @file
 * pro_101_home_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pro_101_home_content_content_defaults() {
  $content = array();

  $content['featured1'] = (object) array(
    'exported_path' => 'featured-1',
    'title' => 'Featured 1',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'featured',
    'language' => 'und',
    'created' => '1337774036',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'featured1',
    'field_subtitle' => array(
      'und' => array(
        0 => array(
          'value' => '​Subtitle for feature 1.<br />
',
          'format' => 'plain_text',
          'safe_value' => '<p>​Subtitle for feature 1.</p>
',
        ),
      ),
    ),
    'field_weight' => array(
      'und' => array(
        0 => array(
          'value' => '1',
        ),
      ),
    ),
  );

  $content['featured2'] = (object) array(
    'exported_path' => 'featured-2',
    'title' => 'Featured 2',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'featured',
    'language' => 'und',
    'created' => '1337774095',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'featured2',
    'field_subtitle' => array(
      'und' => array(
        0 => array(
          'value' => 'Subtitle for feature 2.',
          'format' => 'plain_text',
          'safe_value' => '<p>Subtitle for feature 2.</p>
',
        ),
      ),
    ),
    'field_weight' => array(
      'und' => array(
        0 => array(
          'value' => '2',
        ),
      ),
    ),
  );

  $content['featured3'] = (object) array(
    'exported_path' => 'featured-3',
    'title' => 'Featured 3',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'featured',
    'language' => 'und',
    'created' => '1337774131',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'featured3',
    'field_subtitle' => array(
      'und' => array(
        0 => array(
          'value' => 'Subtitle for feature 3.',
          'format' => 'plain_text',
          'safe_value' => '<p>Subtitle for feature 3.</p>
',
        ),
      ),
    ),
    'field_weight' => array(
      'und' => array(
        0 => array(
          'value' => '3',
        ),
      ),
    ),
  );

return $content;
}
