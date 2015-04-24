<?php
/**
 * @file
 * field.taxonomy_term.field_kode_status_proses.master_proses_status.inc
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
            'field_data_field_kode_status_proses' => array(
              'value' => 'field_kode_status_proses_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_kode_status_proses' => array(
              'value' => 'field_kode_status_proses_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_kode_status_proses',
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
    'label' => 'Kode Status Proses',
    'widget' => array(
      'type' => 'number',
      'weight' => '-5',
      'settings' => array(),
      'module' => 'number',
    ),
    'settings' => array(
      'min' => '',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'number_integer',
        'weight' => '-5',
        'settings' => array(
          'thousand_separator' => ' ',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'field_name' => 'field_kode_status_proses',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'master_proses_status',
    'deleted' => '0',
    'default_value' => NULL,
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'number',
);