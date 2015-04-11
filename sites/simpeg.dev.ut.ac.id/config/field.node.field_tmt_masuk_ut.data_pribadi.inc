<?php
/**
 * @file
 * field.node.field_tmt_masuk_ut.data_pribadi.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'granularity' => array(
        'month' => 'month',
        'day' => 'day',
        'year' => 'year',
        'hour' => 0,
        'minute' => 0,
        'second' => 0,
      ),
      'tz_handling' => 'none',
      'timezone_db' => '',
      'cache_enabled' => 0,
      'cache_count' => '4',
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_tmt_masuk_ut' => array(
              'value' => 'field_tmt_masuk_ut_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_tmt_masuk_ut' => array(
              'value' => 'field_tmt_masuk_ut_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_tmt_masuk_ut',
    'type' => 'datetime',
    'module' => 'date',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'datetime',
        'mysql_type' => 'datetime',
        'pgsql_type' => 'timestamp without time zone',
        'sqlite_type' => 'varchar',
        'sqlsrv_type' => 'smalldatetime',
        'not null' => FALSE,
        'sortable' => TRUE,
        'views' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'TMT Masuk UT',
    'widget' => array(
      'weight' => '17',
      'type' => 'date_popup',
      'module' => 'date',
      'active' => 1,
      'settings' => array(
        'input_format' => 'j M Y - g:i:sa',
        'input_format_custom' => '',
        'year_range' => '-3:+3',
        'increment' => '15',
        'label_position' => 'above',
        'text_parts' => array(),
      ),
    ),
    'settings' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'date_default',
        'settings' => array(
          'format_type' => 'long',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'fromto' => 'both',
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
        'module' => 'date',
        'weight' => 17,
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
    'field_name' => 'field_tmt_masuk_ut',
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
  1 => 'date',
);
