<?php
/**
 * @file
 * field.taxonomy_term.field_kategori_sipas.master_sipas.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'master_kategori_sipas',
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
            'field_data_field_kategori_sipas' => array(
              'tid' => 'field_kategori_sipas_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_kategori_sipas' => array(
              'tid' => 'field_kategori_sipas_tid',
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
    'field_name' => 'field_kategori_sipas',
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
    'label' => 'Kategori Sipas',
    'widget' => array(
      'weight' => '-6',
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
        'weight' => 1,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_kategori_sipas',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'master_sipas',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'vocabulary.master_kategori_sipas' => 'vocabulary.master_kategori_sipas',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
