<?php
/**
 * @file
 * field.taxonomy_term.field_kode_zona_waktu.master_upbjj.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'master_zona_waktu',
          'parent' => '0',
        ),
      ),
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_kode_zona_waktu' => array(
              'tid' => 'field_kode_zona_waktu_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_kode_zona_waktu' => array(
              'tid' => 'field_kode_zona_waktu_tid',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'tid' => array(
        'table' => 'taxonomy_term_data',
        'columns' => array(
          'tid' => 'tid',
        ),
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'field_name' => 'field_kode_zona_waktu',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'tid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Kode Zona Waktu',
    'widget' => array(
      'weight' => '5',
      'type' => 'options_select',
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
        'type' => 'taxonomy_term_reference_link',
        'settings' => array(),
        'module' => 'taxonomy',
        'weight' => 4,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_kode_zona_waktu',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'master_upbjj',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'vocabulary.master_zona_waktu' => 'vocabulary.master_zona_waktu',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
