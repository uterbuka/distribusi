<?php
/**
 * @file
 * field.taxonomy_term.field_kode_unit_m_pesan.master_pesan.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'm_unit',
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
            'field_data_field_kode_unit_m_pesan' => array(
              'tid' => 'field_kode_unit_m_pesan_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_kode_unit_m_pesan' => array(
              'tid' => 'field_kode_unit_m_pesan_tid',
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
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_kode_unit_m_pesan',
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
    'label' => 'Kode Unit',
    'widget' => array(
      'weight' => '-4',
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
        'module' => 'taxonomy',
        'weight' => 2,
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_kode_unit_m_pesan',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'master_pesan',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'vocabulary.m_unit' => 'vocabulary.m_unit',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
