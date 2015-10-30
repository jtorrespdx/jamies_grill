<?php
/**
 * @file
 * recipe_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function recipe_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function recipe_content_node_info() {
  $items = array(
    'recipe_content' => array(
      'name' => t('Recipe Content'),
      'base' => 'node_content',
      'description' => t('This is for posting recipes. Includes a "final picture", description of dish, ingredients listings, an optional long section for preperation (may include photos), optional step by step instructions (similar to preperation), and #tag listings.'),
      'has_title' => '1',
      'title_label' => t('Dish Name or Recipe Title'),
      'help' => t('Use detailed ingredients lists and clear instructions. Don\'t forget times and temperatures. Use a good looking picture of the final dish for the "final picture" submission. '),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
