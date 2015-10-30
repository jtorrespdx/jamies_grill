<?php
/**
 * @file
 * recipe_content.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function recipe_content_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-recipe_content-field_description'.
  $field_instances['node-recipe_content-field_description'] = array(
    'bundle' => 'recipe_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Write a catchy and appetizing description of the dish. What made you crave this dish? Inspirations? How\'d it taste? What makes it unique?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-recipe_content-field_final_picture'.
  $field_instances['node-recipe_content-field_final_picture'] = array(
    'bundle' => 'recipe_content',
    'deleted' => 0,
    'description' => 'Upload a picture of dish as it looks like when it is ready to serve. In the "title" field, use a short description of the dish. In the "alt" field, use a creative description, as this one is read by search engines, and most importantly, screen readers (for the visually impaired).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_final_picture',
    'label' => 'Final Picture',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '10 MB',
      'max_resolution' => '800x800',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-recipe_content-field_ingredients'.
  $field_instances['node-recipe_content-field_ingredients'] = array(
    'bundle' => 'recipe_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List your ingredients by order of use. Make sure to show measurement first. Use one line per ingredient. Keep in mind that your reader may be referencing this list while shopping. Example:
3oz beef shoulder
15oz kidney beans
3 bay leaves',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'textformatter',
        'settings' => array(
          'textformatter_class' => 'textformatter-list',
          'textformatter_comma_and' => 0,
          'textformatter_comma_full_stop' => 0,
          'textformatter_comma_override' => 0,
          'textformatter_comma_tag' => 'div',
          'textformatter_contrib' => array(),
          'textformatter_separator_custom' => '',
          'textformatter_separator_custom_class' => 'textformatter-separator',
          'textformatter_separator_custom_tag' => 'span',
          'textformatter_term_plain' => 0,
          'textformatter_type' => 'ul',
        ),
        'type' => 'textformatter_list',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ingredients',
    'label' => 'Ingredients',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-recipe_content-field_preperation'.
  $field_instances['node-recipe_content-field_preperation'] = array(
    'bundle' => 'recipe_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use normal english to walk your reader through the preparation process. Usually, a reader may read through this first to get an idea of what they are getting into.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_preperation',
    'label' => 'Preparation',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-recipe_content-field_step_by_step'.
  $field_instances['node-recipe_content-field_step_by_step'] = array(
    'bundle' => 'recipe_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List out the steps in the order of preparation. Number your steps. Use one line per step.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'textformatter',
        'settings' => array(
          'textformatter_class' => 'textformatter-list',
          'textformatter_comma_and' => 0,
          'textformatter_comma_full_stop' => 0,
          'textformatter_comma_override' => 0,
          'textformatter_comma_tag' => 'div',
          'textformatter_contrib' => array(),
          'textformatter_separator_custom' => '',
          'textformatter_separator_custom_class' => 'textformatter-separator',
          'textformatter_separator_custom_tag' => 'span',
          'textformatter_term_plain' => 0,
          'textformatter_type' => 'ol',
        ),
        'type' => 'textformatter_list',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_step_by_step',
    'label' => 'Step-by-Step',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Final Picture');
  t('Ingredients');
  t('List out the steps in the order of preparation. Number your steps. Use one line per step.');
  t('List your ingredients by order of use. Make sure to show measurement first. Use one line per ingredient. Keep in mind that your reader may be referencing this list while shopping. Example:
3oz beef shoulder
15oz kidney beans
3 bay leaves');
  t('Preparation');
  t('Step-by-Step');
  t('Upload a picture of dish as it looks like when it is ready to serve. In the "title" field, use a short description of the dish. In the "alt" field, use a creative description, as this one is read by search engines, and most importantly, screen readers (for the visually impaired).');
  t('Use normal english to walk your reader through the preparation process. Usually, a reader may read through this first to get an idea of what they are getting into.');
  t('Write a catchy and appetizing description of the dish. What made you crave this dish? Inspirations? How\'d it taste? What makes it unique?');

  return $field_instances;
}
