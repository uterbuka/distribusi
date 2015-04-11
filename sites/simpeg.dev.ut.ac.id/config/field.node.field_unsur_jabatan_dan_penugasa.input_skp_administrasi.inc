<?php
/**
 * @file
 * field.node.field_unsur_jabatan_dan_penugasa.input_skp_administrasi.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_unsur_jabatan_dan_penugasa' => array(
              'value' => 'field_unsur_jabatan_dan_penugasa_value',
              'revision_id' => 'field_unsur_jabatan_dan_penugasa_revision_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_unsur_jabatan_dan_penugasa' => array(
              'value' => 'field_unsur_jabatan_dan_penugasa_value',
              'revision_id' => 'field_unsur_jabatan_dan_penugasa_revision_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'field_permissions' => array(
      'type' => '2',
    ),
    'field_name' => 'field_unsur_jabatan_dan_penugasa',
    'type' => 'field_collection',
    'module' => 'field_collection',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The field collection item id.',
      ),
      'revision_id' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The field collection item revision id.',
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'UNSUR JABATAN DAN PENUGASAN ',
    'widget' => array(
      'weight' => '3',
      'type' => 'field_collection_embed',
      'module' => 'field_collection',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'field_collection_view',
        'settings' => array(
          'edit' => 'Edit',
          'delete' => 'Delete',
          'add' => 'Add',
          'description' => TRUE,
          'view_mode' => 'full',
        ),
        'module' => 'field_collection',
        'weight' => 7,
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
    'field_name' => 'field_unsur_jabatan_dan_penugasa',
    'entity_type' => 'node',
    'bundle' => 'input_skp_administrasi',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.input_skp_administrasi' => 'content_type.input_skp_administrasi',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'field_collection',
);
