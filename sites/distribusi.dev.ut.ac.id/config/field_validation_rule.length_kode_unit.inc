<?php
/**
 * @file
 * field_validation_rule.length_kode_unit.inc
 */

$api = '2.0.0';

$data = $rule = new stdClass();
$rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
$rule->api_version = 2;
$rule->rulename = 'length_kode_unit';
$rule->name = 'length_kode_unit';
$rule->field_name = 'field_kode_unit';
$rule->col = 'value';
$rule->entity_type = 'taxonomy_term';
$rule->bundle = 'm_unit';
$rule->validator = 'field_validation_length_validator';
$rule->settings = array(
  'min' => '5',
  'max' => '5',
  'bypass' => 0,
  'roles' => array(
    1 => 0,
    2 => 0,
    3 => 0,
  ),
  'errors' => 0,
);
$rule->error_message = 'Kode Unit adalah lima karakter.';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_validation',
);
