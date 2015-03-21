<?php
/**
 * @file
 * variable.field_bundle_settings_taxonomy_term__master_strata.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'field_bundle_settings_taxonomy_term__master_strata',
  'content' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'name' => array(
          'weight' => '-4',
        ),
        'description' => array(
          'weight' => '-3',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '-4',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array();
