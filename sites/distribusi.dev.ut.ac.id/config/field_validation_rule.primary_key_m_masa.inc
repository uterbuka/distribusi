<?php
/**
 * @file
 * field_validation_rule.primary_key_m_masa.inc
 */

$api = '2.0.0';

$data = $rule = new stdClass();
$rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
$rule->api_version = 2;
$rule->rulename = 'primary key';
$rule->name = 'primary_key_m_masa';
$rule->field_name = 'field_masa';
$rule->col = 'value';
$rule->entity_type = 'taxonomy_term';
$rule->bundle = 'master_masa';
$rule->validator = 'field_validation_unique_validator';
$rule->settings = array(
  'data' => 'bundle',
  'per_user' => 0,
  'bypass' => 0,
  'roles' => array(
    1 => 0,
    2 => 0,
    3 => 0,
  ),
  'errors' => 0,
);
$rule->error_message = 'Data sudah ada.';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_validation',
);
