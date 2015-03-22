<?php
/**
 * @file
 * field_validation_rule.length_kategori_tarif.inc
 */

$api = '2.0.0';

$data = $rule = new stdClass();
$rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
$rule->api_version = 2;
$rule->rulename = 'length_kategori_tarif';
$rule->name = 'length_kategori_tarif';
$rule->field_name = 'field_text_kode';
$rule->col = 'value';
$rule->entity_type = 'taxonomy_term';
$rule->bundle = 'master_kategori_tarif';
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
$rule->error_message = 'Kode Kategori Tarif adalah 2 karakter';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_validation',
);
