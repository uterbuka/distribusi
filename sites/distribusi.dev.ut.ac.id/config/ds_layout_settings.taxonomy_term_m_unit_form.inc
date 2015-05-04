<?php
/**
 * @file
 * ds_layout_settings.taxonomy_term_m_unit_form.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'taxonomy_term|m_unit|form';
$ds_layout->entity_type = 'taxonomy_term';
$ds_layout->bundle = 'm_unit';
$ds_layout->view_mode = 'form';
$ds_layout->layout = 'ds_2col';
$ds_layout->settings = array(
  'regions' => array(
    'left' => array(
      0 => 'field_kode_unit',
      1 => 'field_nama_unit',
      2 => 'field_kode_status_unit',
    ),
    'right' => array(
      3 => 'field_pejabat',
      4 => 'field_alamat',
      5 => 'field_no_telpon',
      6 => 'name',
    ),
    'hidden' => array(
      7 => 'description',
      8 => '_add_existing_field',
    ),
  ),
  'fields' => array(
    'field_kode_unit' => 'left',
    'field_nama_unit' => 'left',
    'field_kode_status_unit' => 'left',
    'field_pejabat' => 'right',
    'field_alamat' => 'right',
    'field_no_telpon' => 'right',
    'name' => 'right',
    'description' => 'hidden',
    '_add_existing_field' => 'hidden',
  ),
  'classes' => array(),
  'wrappers' => array(
    'left' => 'div',
    'right' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
