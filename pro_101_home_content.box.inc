<?php
/**
 * @file
 * pro_101_home_content.box.inc
 */

/**
 * Implements hook_default_box().
 */
function pro_101_home_content_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'twitter';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Twitter Box';
  $box->options = array(
    'body' => array(
      'value' => '<script charset="utf-8" src="http://widgets.twimg.com/j/2/widget.js"></script><script>
new TWTR.Widget({
  version: 2,
  type: \'search\',
  search: \'\\"dui law\\" OR \\"divorce law\\" OR \\"custody law\\" OR \\"wills law\\" OR \\"criminal law\\" OR \\"Real Estate Law\\" lang:en\',
  interval: 30000,
  title: \'TWEETS IN LAW\',
  subject: \'Stay Vigilant!\',
  width: \'auto\',
  height: 300,
  theme: {
    shell: {
      background: \'none\',
      color: \'none\'
    },
    tweets: {
      background: \'none\',
      color: \'none\',
      links: \'none\'
    }
  },
  features: {
    scrollbar: false,
    loop: true,
    live: true,
    behavior: \'default\'
  }
}).render().start();
</script>',
      'format' => 'plain_text',
    ),
    'additional_classes' => '',
  );
  $export['twitter'] = $box;

  return $export;
}
