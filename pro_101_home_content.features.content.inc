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
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'This is featured 1 content.',
          'summary' => '',
          'format' => 'plain_text',
          'safe_value' => '<p>This is featured 1 content.</p>
',
          'safe_summary' => '',
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
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'This is featured 2 content.',
          'summary' => '',
          'format' => 'plain_text',
          'safe_value' => '<p>This is featured 2 content.</p>
',
          'safe_summary' => '',
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
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'This is featured 3 content.',
          'summary' => '',
          'format' => 'plain_text',
          'safe_value' => '<p>This is featured 3 content.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
