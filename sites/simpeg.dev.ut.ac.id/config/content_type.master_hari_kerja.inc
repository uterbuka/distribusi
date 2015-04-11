<?php
/**
 * @file
 * content_type.master_hari_kerja.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'master_hari_kerja',
  'name' => 'Master Hari Kerja',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Tahun',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__master_hari_kerja' => 'variable.field_bundle_settings_node__master_hari_kerja',
  'variable.node_options_master_hari_kerja' => 'variable.node_options_master_hari_kerja',
  'variable.node_preview_master_hari_kerja' => 'variable.node_preview_master_hari_kerja',
  'variable.node_submitted_master_hari_kerja' => 'variable.node_submitted_master_hari_kerja',
  'variable.comment_default_per_page_master_hari_kerja' => 'variable.comment_default_per_page_master_hari_kerja',
  'variable.comment_form_location_master_hari_kerja' => 'variable.comment_form_location_master_hari_kerja',
  'variable.comment_preview_master_hari_kerja' => 'variable.comment_preview_master_hari_kerja',
  'variable.comment_subject_field_master_hari_kerja' => 'variable.comment_subject_field_master_hari_kerja',
);

$optional = array(
  'field.node.field_januari.master_hari_kerja' => 'field.node.field_januari.master_hari_kerja',
  'field.node.field_februari.master_hari_kerja' => 'field.node.field_februari.master_hari_kerja',
  'field.node.field_maret.master_hari_kerja' => 'field.node.field_maret.master_hari_kerja',
  'field.node.field_april.master_hari_kerja' => 'field.node.field_april.master_hari_kerja',
  'field.node.field_mei.master_hari_kerja' => 'field.node.field_mei.master_hari_kerja',
  'field.node.field_juni.master_hari_kerja' => 'field.node.field_juni.master_hari_kerja',
  'field.node.field_juli.master_hari_kerja' => 'field.node.field_juli.master_hari_kerja',
  'field.node.field_agustus.master_hari_kerja' => 'field.node.field_agustus.master_hari_kerja',
  'field.node.field_september.master_hari_kerja' => 'field.node.field_september.master_hari_kerja',
  'field.node.field_oktober.master_hari_kerja' => 'field.node.field_oktober.master_hari_kerja',
  'field.node.field_november.master_hari_kerja' => 'field.node.field_november.master_hari_kerja',
  'field.node.field_desember.master_hari_kerja' => 'field.node.field_desember.master_hari_kerja',
  'field.node.field_total_cuti.master_hari_kerja' => 'field.node.field_total_cuti.master_hari_kerja',
  'permission.create_master_hari_kerja_content' => 'permission.create_master_hari_kerja_content',
  'permission.edit_own_master_hari_kerja_content' => 'permission.edit_own_master_hari_kerja_content',
  'permission.edit_any_master_hari_kerja_content' => 'permission.edit_any_master_hari_kerja_content',
  'permission.delete_own_master_hari_kerja_content' => 'permission.delete_own_master_hari_kerja_content',
  'permission.delete_any_master_hari_kerja_content' => 'permission.delete_any_master_hari_kerja_content',
);

$modules = array(
  0 => 'node',
);
