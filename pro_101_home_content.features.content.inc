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
          'value' => '<h2>
	Full Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'summary' => '<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
',
          'format' => 'plain_text',
          'safe_value' => '<h2>
	Full Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'safe_summary' => '<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
',
        ),
      ),
    ),
  );

return $content;
}
