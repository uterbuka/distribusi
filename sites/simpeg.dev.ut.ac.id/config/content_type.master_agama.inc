<?php
/**
 * @file
 * content_type.master_agama.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'master_agama',
  'name' => 'Master Agama',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Nama Agama',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__master_agama' => 'variable.field_bundle_settings_node__master_agama',
  'variable.node_options_master_agama' => 'variable.node_options_master_agama',
  'variable.node_preview_master_agama' => 'variable.node_preview_master_agama',
  'variable.node_submitted_master_agama' => 'variable.node_submitted_master_agama',
  'variable.comment_default_per_page_master_agama' => 'variable.comment_default_per_page_master_agama',
  'variable.comment_form_location_master_agama' => 'variable.comment_form_location_master_agama',
  'variable.comment_preview_master_agama' => 'variable.comment_preview_master_agama',
  'variable.comment_subject_field_master_agama' => 'variable.comment_subject_field_master_agama',
);

$optional = array(
  'field.node.field_kode.master_agama' => 'field.node.field_kode.master_agama',
  'permission.create_master_agama_content' => 'permission.create_master_agama_content',
  'permission.edit_own_master_agama_content' => 'permission.edit_own_master_agama_content',
  'permission.edit_any_master_agama_content' => 'permission.edit_any_master_agama_content',
  'permission.delete_own_master_agama_content' => 'permission.delete_own_master_agama_content',
  'permission.delete_any_master_agama_content' => 'permission.delete_any_master_agama_content',
);

$modules = array(
  0 => 'node',
);
