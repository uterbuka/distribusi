<?php
/**
 * @file
 * content_type.input_skp_administrasi.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'input_skp_administrasi',
  'name' => 'Input SKP',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__input_skp_administrasi' => 'variable.field_bundle_settings_node__input_skp_administrasi',
  'variable.node_options_input_skp_administrasi' => 'variable.node_options_input_skp_administrasi',
  'variable.node_preview_input_skp_administrasi' => 'variable.node_preview_input_skp_administrasi',
  'variable.node_submitted_input_skp_administrasi' => 'variable.node_submitted_input_skp_administrasi',
  'variable.comment_default_per_page_input_skp_administrasi' => 'variable.comment_default_per_page_input_skp_administrasi',
  'variable.comment_form_location_input_skp_administrasi' => 'variable.comment_form_location_input_skp_administrasi',
  'variable.comment_preview_input_skp_administrasi' => 'variable.comment_preview_input_skp_administrasi',
  'variable.comment_subject_field_input_skp_administrasi' => 'variable.comment_subject_field_input_skp_administrasi',
);

$optional = array(
  'field.node.field_tahun.input_skp_administrasi' => 'field.node.field_tahun.input_skp_administrasi',
  'field.node.field_kegiatan.input_skp_administrasi' => 'field.node.field_kegiatan.input_skp_administrasi',
  'field.node.field_tambahan.input_skp_administrasi' => 'field.node.field_tambahan.input_skp_administrasi',
  'field.node.field__unsur_pendidikan_dan_peng.input_skp_administrasi' => 'field.node.field__unsur_pendidikan_dan_peng.input_skp_administrasi',
  'field.node.field_unsur_pelaksanaan_peneliti.input_skp_administrasi' => 'field.node.field_unsur_pelaksanaan_peneliti.input_skp_administrasi',
  'field.node.field_unsur_pelaksanaan_pengabdi.input_skp_administrasi' => 'field.node.field_unsur_pelaksanaan_pengabdi.input_skp_administrasi',
  'field.node.field_unsur_penunjang_.input_skp_administrasi' => 'field.node.field_unsur_penunjang_.input_skp_administrasi',
  'field.node.field_unsur_jabatan_dan_penugasa.input_skp_administrasi' => 'field.node.field_unsur_jabatan_dan_penugasa.input_skp_administrasi',
  'permission.create_input_skp_administrasi_content' => 'permission.create_input_skp_administrasi_content',
  'permission.edit_own_input_skp_administrasi_content' => 'permission.edit_own_input_skp_administrasi_content',
  'permission.edit_any_input_skp_administrasi_content' => 'permission.edit_any_input_skp_administrasi_content',
  'permission.delete_own_input_skp_administrasi_content' => 'permission.delete_own_input_skp_administrasi_content',
  'permission.delete_any_input_skp_administrasi_content' => 'permission.delete_any_input_skp_administrasi_content',
);

$modules = array(
  0 => 'node',
);
