<?php
/**
 * @file
 * field.taxonomy_term.field_kapasitas.master_lokasi.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_kapasitas' => array(
              'value' => 'field_kapasitas_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_kapasitas' => array(
              'value' => 'field_kapasitas_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_kapasitas',
    'type' => 'number_integer',
    'module' => 'number',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Kapasitas',
    'widget' => array(
      'weight' => '-3',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '1',
      'max' => '9',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'number_integer',
        'weight' => '-3',
        'settings' => array(
          'thousand_separator' => ' ',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_kapasitas',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'master_lokasi',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'number',
);
