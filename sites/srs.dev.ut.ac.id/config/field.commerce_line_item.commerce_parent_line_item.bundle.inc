<?php
/**
 * @file
 * field.commerce_line_item.commerce_parent_line_item.bundle.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(
      0 => 'commerce_line_item',
    ),
    'translatable' => '0',
    'settings' => array(),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_commerce_parent_line_item' => array(
              'line_item_id' => 'commerce_parent_line_item_line_item_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_commerce_parent_line_item' => array(
              'line_item_id' => 'commerce_parent_line_item_line_item_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'line_item_id' => array(
        'table' => 'commerce_line_item',
        'columns' => array(
          'line_item_id' => 'line_item_id',
        ),
      ),
    ),
    'indexes' => array(
      'line_item_id' => array(
        0 => 'line_item_id',
      ),
    ),
    'field_name' => 'commerce_parent_line_item',
    'type' => 'commerce_line_item_reference',
    'module' => 'commerce_line_item',
    'active' => '1',
    'locked' => '1',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'line_item_id' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Parent Line Item',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'type' => 'commerce_line_item_manager',
      'settings' => array(),
      'weight' => 3,
      'module' => 'commerce_line_item',
    ),
    'display' => array(
      'display' => array(
        'label' => 'hidden',
        'weight' => -10,
        'type' => 'commerce_line_item_reference_view',
        'settings' => array(
          'view' => 'commerce_line_item_table|default',
        ),
        'module' => 'commerce_line_item',
      ),
      'default' => array(
        'label' => 'above',
        'type' => 'commerce_line_item_reference_view',
        'settings' => array(
          'view' => 'commerce_line_item_table|default',
        ),
        'module' => 'commerce_line_item',
        'weight' => 4,
      ),
    ),
    'description' => '',
    'field_name' => 'commerce_parent_line_item',
    'entity_type' => 'commerce_line_item',
    'bundle' => 'bundle',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'commerce_line_item',
);
