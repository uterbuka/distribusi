<?php
/**
 * @file
 * field.taxonomy_term.field_email_upbjj.master_upbjj.inc
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
            'field_data_field_email_upbjj' => array(
              'email' => 'field_email_upbjj_email',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_email_upbjj' => array(
              'email' => 'field_email_upbjj_email',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_email_upbjj',
    'type' => 'email',
    'module' => 'email',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'email' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Email UPBJJ',
    'widget' => array(
      'weight' => '4',
      'type' => 'email_textfield',
      'module' => 'email',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'email_default',
        'settings' => array(),
        'module' => 'email',
        'weight' => 1,
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_email_upbjj',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'master_upbjj',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'email',
);
