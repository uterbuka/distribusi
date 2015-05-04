<?php
/**
 * @file
 * field.taxonomy_term.field_nama_status.master_status_aktif.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '100',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_nama_status' => array(
              'value' => 'field_nama_status_value',
              'format' => 'field_nama_status_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_nama_status' => array(
              'value' => 'field_nama_status_value',
              'format' => 'field_nama_status_format',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_nama_status',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '100',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Nama Status',
    'widget' => array(
      'weight' => '-4',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '-4',
        'settings' => array(
          'custom_link_to_entity' => '',
          'custom_prefix' => '',
          'custom_suffix' => '',
          'custom_reverse' => '',
          'custom_trim' => '',
          'custom_strtolower' => '',
          'custom_strtoupper' => '',
          'custom_ucfirst' => '',
          'custom_ucwords' => '',
          'custom_strip_tags' => '',
          'custom_strip_preserve' => '',
        ),
        'module' => 'text',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_nama_status',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'master_status_aktif',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
