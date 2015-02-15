<?php
/**
 * @file
 * field.taxonomy_term.field_alamat_kantor.master_upbjj.inc
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
            'field_data_field_alamat_kantor' => array(
              'country' => 'field_alamat_kantor_country',
              'administrative_area' => 'field_alamat_kantor_administrative_area',
              'sub_administrative_area' => 'field_alamat_kantor_sub_administrative_area',
              'locality' => 'field_alamat_kantor_locality',
              'dependent_locality' => 'field_alamat_kantor_dependent_locality',
              'postal_code' => 'field_alamat_kantor_postal_code',
              'thoroughfare' => 'field_alamat_kantor_thoroughfare',
              'premise' => 'field_alamat_kantor_premise',
              'sub_premise' => 'field_alamat_kantor_sub_premise',
              'organisation_name' => 'field_alamat_kantor_organisation_name',
              'name_line' => 'field_alamat_kantor_name_line',
              'first_name' => 'field_alamat_kantor_first_name',
              'last_name' => 'field_alamat_kantor_last_name',
              'data' => 'field_alamat_kantor_data',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_alamat_kantor' => array(
              'country' => 'field_alamat_kantor_country',
              'administrative_area' => 'field_alamat_kantor_administrative_area',
              'sub_administrative_area' => 'field_alamat_kantor_sub_administrative_area',
              'locality' => 'field_alamat_kantor_locality',
              'dependent_locality' => 'field_alamat_kantor_dependent_locality',
              'postal_code' => 'field_alamat_kantor_postal_code',
              'thoroughfare' => 'field_alamat_kantor_thoroughfare',
              'premise' => 'field_alamat_kantor_premise',
              'sub_premise' => 'field_alamat_kantor_sub_premise',
              'organisation_name' => 'field_alamat_kantor_organisation_name',
              'name_line' => 'field_alamat_kantor_name_line',
              'first_name' => 'field_alamat_kantor_first_name',
              'last_name' => 'field_alamat_kantor_last_name',
              'data' => 'field_alamat_kantor_data',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_alamat_kantor',
    'type' => 'addressfield',
    'module' => 'addressfield',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'country' => array(
        'description' => 'Two letter ISO country code of this address.',
        'type' => 'varchar',
        'length' => 2,
        'not null' => FALSE,
        'default' => '',
      ),
      'administrative_area' => array(
        'description' => 'The administrative area of this address. (i.e. State/Province)',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'sub_administrative_area' => array(
        'description' => 'The sub administrative area of this address.',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'locality' => array(
        'description' => 'The locality of this address. (i.e. City)',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'dependent_locality' => array(
        'description' => 'The dependent locality of this address.',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'postal_code' => array(
        'description' => 'The postal code of this address.',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'thoroughfare' => array(
        'description' => 'The thoroughfare of this address. (i.e. Street address)',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'premise' => array(
        'description' => 'The premise of this address. (i.e. Apartment / Suite number)',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'sub_premise' => array(
        'description' => 'The sub_premise of this address.',
        'type' => 'varchar',
        'length' => 255,
        'default' => '',
        'not null' => FALSE,
      ),
      'organisation_name' => array(
        'description' => 'Contents of a primary OrganisationName element in the xNL XML.',
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'default' => '',
      ),
      'name_line' => array(
        'description' => 'Contents of a primary NameLine element in the xNL XML.',
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'default' => '',
      ),
      'first_name' => array(
        'description' => 'Contents of the FirstName element of a primary PersonName element in the xNL XML.',
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'default' => '',
      ),
      'last_name' => array(
        'description' => 'Contents of the LastName element of a primary PersonName element in the xNL XML.',
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'default' => '',
      ),
      'data' => array(
        'description' => 'Additional data for this address.',
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
        'serialize' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Alamat UPBJJ',
    'widget' => array(
      'weight' => '2',
      'type' => 'addressfield_standard',
      'module' => 'addressfield',
      'active' => 1,
      'settings' => array(
        'available_countries' => array(
          'ID' => 'ID',
        ),
        'default_country' => 'ID',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'addressfield_default',
        'settings' => array(
          'use_widget_handlers' => 1,
          'format_handlers' => array(
            0 => 'address',
          ),
        ),
        'module' => 'addressfield',
        'weight' => 3,
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_alamat_kantor',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'master_upbjj',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'addressfield',
);
