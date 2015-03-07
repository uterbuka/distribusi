<?php
/**
 * @file
 * field.profile2.field_tahun_ijazah.profile_mahasiswa.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => 255,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_tahun_ijazah' => array(
              'value' => 'field_tahun_ijazah_value',
              'format' => 'field_tahun_ijazah_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_tahun_ijazah' => array(
              'value' => 'field_tahun_ijazah_value',
              'format' => 'field_tahun_ijazah_format',
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
    'field_name' => 'field_tahun_ijazah',
    'type' => 'text',
    'module' => 'text',
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
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Tahun Ijazah',
    'widget' => array(
      'type' => 'text_textfield',
      'weight' => '20',
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
        'weight' => 19,
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'field_name' => 'field_tahun_ijazah',
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
