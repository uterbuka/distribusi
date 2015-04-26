<?php
/**
 * @file
 * field_validation_rule.length_kd_stts_rakit.inc
 */

$api = '2.0.0';

$data = $rule = new stdClass();
$rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
$rule->api_version = 2;
$rule->rulename = 'length_kd_stts_rakit';
$rule->name = 'length_kd_stts_rakit';
$rule->field_name = 'field_kode_status_rakit';
$rule->col = 'value';
$rule->entity_type = 'taxonomy_term';
$rule->bundle = 'master_status_rakit';
$rule->validator = 'field_validation_length_validator';
$rule->settings = array(
  'min' => '',
  'max' => '1',
  'bypass' => 0,
  'roles' => array(
    1 => 0,
    2 => 0,
    3 => 0,
  ),
  'errors' => 0,
);
$rule->error_message = 'Kode status status rakit satu karakter.';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_validation',
);
