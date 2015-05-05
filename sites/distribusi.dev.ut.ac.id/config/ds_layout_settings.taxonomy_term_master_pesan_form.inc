<?php
/**
 * @file
 * ds_layout_settings.taxonomy_term_master_pesan_form.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'taxonomy_term|master_pesan|form';
$ds_layout->entity_type = 'taxonomy_term';
$ds_layout->bundle = 'master_pesan';
$ds_layout->view_mode = 'form';
$ds_layout->layout = 'ds_2col';
$ds_layout->settings = array(
  'regions' => array(
    'left' => array(
      0 => 'field_masa_m_pesan',
      1 => 'field_kode_unit_m_pesan',
      2 => 'field_no_surat_pesan',
      3 => 'field_kd_jns_psn_m_pesan',
    ),
    'right' => array(
      4 => 'field_tanggal_m_pesan',
      5 => 'field_status_pemenuhan',
      7 => 'name',
    ),
    'hidden' => array(
      6 => 'description',
      8 => '_add_existing_field',
    ),
  ),
  'fields' => array(
    'field_masa_m_pesan' => 'left',
    'field_kode_unit_m_pesan' => 'left',
    'field_no_surat_pesan' => 'left',
    'field_kd_jns_psn_m_pesan' => 'left',
    'field_tanggal_m_pesan' => 'right',
    'field_status_pemenuhan' => 'right',
    'description' => 'hidden',
    'name' => 'right',
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
