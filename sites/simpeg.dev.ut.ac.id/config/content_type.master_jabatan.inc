<?php
/**
 * @file
 * content_type.master_jabatan.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'master_jabatan',
  'name' => 'Master Jabatan',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Nama Jabatan',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__master_jabatan' => 'variable.field_bundle_settings_node__master_jabatan',
  'variable.node_options_master_jabatan' => 'variable.node_options_master_jabatan',
  'variable.node_preview_master_jabatan' => 'variable.node_preview_master_jabatan',
  'variable.node_submitted_master_jabatan' => 'variable.node_submitted_master_jabatan',
  'variable.comment_default_per_page_master_jabatan' => 'variable.comment_default_per_page_master_jabatan',
  'variable.comment_form_location_master_jabatan' => 'variable.comment_form_location_master_jabatan',
  'variable.comment_preview_master_jabatan' => 'variable.comment_preview_master_jabatan',
  'variable.comment_subject_field_master_jabatan' => 'variable.comment_subject_field_master_jabatan',
);

$optional = array(
  'field.node.field_jenis_jabatan.master_jabatan' => 'field.node.field_jenis_jabatan.master_jabatan',
  'field.node.field_kode.master_jabatan' => 'field.node.field_kode.master_jabatan',
  'field.node.field_eselon.master_jabatan' => 'field.node.field_eselon.master_jabatan',
  'field.node.field_kelas_jabatan.master_jabatan' => 'field.node.field_kelas_jabatan.master_jabatan',
  'field.node.field_status_jabatan.master_jabatan' => 'field.node.field_status_jabatan.master_jabatan',
  'field.node.field_sebagai_penilai.master_jabatan' => 'field.node.field_sebagai_penilai.master_jabatan',
  'field.node.field_unit_kerja1.master_jabatan' => 'field.node.field_unit_kerja1.master_jabatan',
  'permission.create_master_jabatan_content' => 'permission.create_master_jabatan_content',
  'permission.edit_own_master_jabatan_content' => 'permission.edit_own_master_jabatan_content',
  'permission.edit_any_master_jabatan_content' => 'permission.edit_any_master_jabatan_content',
  'permission.delete_own_master_jabatan_content' => 'permission.delete_own_master_jabatan_content',
  'permission.delete_any_master_jabatan_content' => 'permission.delete_any_master_jabatan_content',
);

$modules = array(
  0 => 'node',
);
