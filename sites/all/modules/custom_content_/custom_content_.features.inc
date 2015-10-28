<?php
/**
 * @file
 * custom_content_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_content__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function custom_content__node_info() {
  $items = array(
    'awards_and_reviews' => array(
      'name' => t('Awards and Reviews'),
      'base' => 'node_content',
      'description' => t('Use this form to list awards and reviews. You may include pictures and links.'),
      'has_title' => '1',
      'title_label' => t('Introduction'),
      'help' => t('This page is for listing awards and reviews.'),
    ),
    'news_blog' => array(
      'name' => t('News Blog'),
      'base' => 'node_content',
      'description' => t('People want to read about your cooking adventures. Use this form to blog about exciting news and interests.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('This is your blog. What you include here is up to you.'),
    ),
    'tips_and_tricks' => array(
      'name' => t('Tips and Tricks'),
      'base' => 'node_content',
      'description' => t('A list of tips and tricks.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Share some tips and tricks that might help your readers.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
