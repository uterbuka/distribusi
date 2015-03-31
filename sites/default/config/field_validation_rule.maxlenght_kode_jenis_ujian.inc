<?php
/**
 * @file
 * field_validation_rule.maxlenght_kode_jenis_ujian.inc
 */

$api = '2.0.0';

$data = $rule = new stdClass();
$rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
$rule->api_version = 2;
$rule->rulename = 'maxlenght kode jenis ujian';
$rule->name = 'maxlenght_kode_jenis_ujian';
$rule->field_name = 'field_text_kode';
$rule->col = 'value';
$rule->entity_type = 'taxonomy_term';
$rule->bundle = 'master_jenis_tes_masuk';
$rule->validator = 'field_validation_length_validator';
$rule->settings = array(
  'min' => '1',
  'max' => '1',
  'bypass' => 0,
  'roles' => array(
    1 => 0,
    2 => 0,
    3 => 0,
  ),
  'errors' => 0,
);
$rule->error_message = 'Kode jenis ujian wajib 1 karakter';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_validation',
);
