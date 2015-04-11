<?php
/**
 * @file
 * content_type.master_gelar.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'master_gelar',
  'name' => 'Master Gelar',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Nama Akademik',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__master_gelar' => 'variable.field_bundle_settings_node__master_gelar',
  'variable.node_options_master_gelar' => 'variable.node_options_master_gelar',
  'variable.node_preview_master_gelar' => 'variable.node_preview_master_gelar',
  'variable.node_submitted_master_gelar' => 'variable.node_submitted_master_gelar',
  'variable.comment_default_per_page_master_gelar' => 'variable.comment_default_per_page_master_gelar',
  'variable.comment_form_location_master_gelar' => 'variable.comment_form_location_master_gelar',
  'variable.comment_preview_master_gelar' => 'variable.comment_preview_master_gelar',
  'variable.comment_subject_field_master_gelar' => 'variable.comment_subject_field_master_gelar',
);

$optional = array(
  'field.node.field_kode.master_gelar' => 'field.node.field_kode.master_gelar',
  'field.node.field_gelar.master_gelar' => 'field.node.field_gelar.master_gelar',
  'permission.create_master_gelar_content' => 'permission.create_master_gelar_content',
  'permission.edit_own_master_gelar_content' => 'permission.edit_own_master_gelar_content',
  'permission.edit_any_master_gelar_content' => 'permission.edit_any_master_gelar_content',
  'permission.delete_own_master_gelar_content' => 'permission.delete_own_master_gelar_content',
  'permission.delete_any_master_gelar_content' => 'permission.delete_any_master_gelar_content',
);

$modules = array(
  0 => 'node',
);
