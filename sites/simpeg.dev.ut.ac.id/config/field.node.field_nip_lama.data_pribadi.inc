<?php
/**
 * @file
 * field.node.field_nip_lama.data_pribadi.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '9',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_nip_lama' => array(
              'value' => 'field_nip_lama_value',
              'format' => 'field_nip_lama_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_nip_lama' => array(
              'value' => 'field_nip_lama_value',
              'format' => 'field_nip_lama_format',
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
    'field_name' => 'field_nip_lama',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '9',
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
    'label' => 'NIP Lama',
    'widget' => array(
      'weight' => '13',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '10',
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
        'weight' => 13,
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_nip_lama',
    'entity_type' => 'node',
    'bundle' => 'data_pribadi',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.data_pribadi' => 'content_type.data_pribadi',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
