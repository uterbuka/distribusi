<?php
/**
 * @file
 * field_validation_rule.kode_waktu_ujian1.inc
 */

$api = '2.0.0';

$data = $rule = new stdClass();
$rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
$rule->api_version = 2;
$rule->rulename = 'kode-waktu-ujian';
$rule->name = 'kode_waktu_ujian1';
$rule->field_name = 'field_text_kode';
$rule->col = 'value';
$rule->entity_type = 'taxonomy_term';
$rule->bundle = 'master_waktu_ujian';
$rule->validator = 'field_validation_length_validator';
$rule->settings = array(
  'min' => '2',
  'max' => '2',
  'bypass' => 0,
  'roles' => array(
    1 => 0,
    2 => 0,
    3 => 0,
  ),
  'errors' => 0,
);
$rule->error_message = 'Kode waktu ujian wajib 2 karakter';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_validation',
);
