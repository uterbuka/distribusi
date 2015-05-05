<?php
/**
 * @file
 * field_validation_rule.length_no_surat_pesan.inc
 */

$api = '2.0.0';

$data = $rule = new stdClass();
$rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
$rule->api_version = 2;
$rule->rulename = 'length_no_surat_pesan';
$rule->name = 'length_no_surat_pesan';
$rule->field_name = 'field_no_surat_pesan';
$rule->col = 'value';
$rule->entity_type = 'taxonomy_term';
$rule->bundle = 'master_pesan';
$rule->validator = 'field_validation_length_validator';
$rule->settings = array(
  'min' => '1',
  'max' => '9',
  'bypass' => 0,
  'roles' => array(
    1 => 0,
    2 => 0,
    3 => 0,
  ),
  'errors' => 0,
);
$rule->error_message = 'Nomor surat pesan minimal Satu dan maksimal Sembilan';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_validation',
);
