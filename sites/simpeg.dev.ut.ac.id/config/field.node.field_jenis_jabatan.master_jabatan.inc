<?php
/**
 * @file
 * field.node.field_jenis_jabatan.master_jabatan.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        1 => 'Struktural (JFS)',
        2 => ' Fungsional Dosen (JFD)',
        3 => 'Fungsional Umum (JFU)',
        4 => 'Fungsional Tertentu (JFT)',
      ),
      'allowed_values_function' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_jenis_jabatan' => array(
              'value' => 'field_jenis_jabatan_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_jenis_jabatan' => array(
              'value' => 'field_jenis_jabatan_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'field_name' => 'field_jenis_jabatan',
    'type' => 'list_text',
    'module' => 'list',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Jenis Jabatan',
    'widget' => array(
      'weight' => '-7',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'list_default',
        'settings' => array(),
        'module' => 'list',
        'weight' => 0,
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_jenis_jabatan',
    'entity_type' => 'node',
    'bundle' => 'master_jabatan',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.master_jabatan' => 'content_type.master_jabatan',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
