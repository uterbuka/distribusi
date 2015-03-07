<?php
/**
 * @file
 * field.profile2.field_alamat.profile_mahasiswa.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '50',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_alamat' => array(
              'value' => 'field_alamat_value',
              'format' => 'field_alamat_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_alamat' => array(
              'value' => 'field_alamat_value',
              'format' => 'field_alamat_format',
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
    'field_name' => 'field_alamat',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '50',
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
    'label' => 'Alamat',
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => '2',
      'settings' => array(
        'size' => 60,
      ),
      'module' => 'text',
    ),
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'settings' => array(),
        'module' => 'text',
        'weight' => 1,
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'field_name' => 'field_alamat',
    'entity_type' => 'profile2',
    'bundle' => 'profile_mahasiswa',
    'deleted' => '0',
    'default_value' => NULL,
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
