<?php
/**
 * @file
 * content_type.master_hukuman.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'master_hukuman',
  'name' => 'Master Hukuman',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Nama Sanksi',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__master_hukuman' => 'variable.field_bundle_settings_node__master_hukuman',
  'variable.node_options_master_hukuman' => 'variable.node_options_master_hukuman',
  'variable.node_preview_master_hukuman' => 'variable.node_preview_master_hukuman',
  'variable.node_submitted_master_hukuman' => 'variable.node_submitted_master_hukuman',
  'variable.comment_default_per_page_master_hukuman' => 'variable.comment_default_per_page_master_hukuman',
  'variable.comment_form_location_master_hukuman' => 'variable.comment_form_location_master_hukuman',
  'variable.comment_preview_master_hukuman' => 'variable.comment_preview_master_hukuman',
  'variable.comment_subject_field_master_hukuman' => 'variable.comment_subject_field_master_hukuman',
);

$optional = array(
  'field.node.field_kode.master_hukuman' => 'field.node.field_kode.master_hukuman',
  'field.node.field_type_hukuman.master_hukuman' => 'field.node.field_type_hukuman.master_hukuman',
  'permission.create_master_hukuman_content' => 'permission.create_master_hukuman_content',
  'permission.edit_own_master_hukuman_content' => 'permission.edit_own_master_hukuman_content',
  'permission.edit_any_master_hukuman_content' => 'permission.edit_any_master_hukuman_content',
  'permission.delete_own_master_hukuman_content' => 'permission.delete_own_master_hukuman_content',
  'permission.delete_any_master_hukuman_content' => 'permission.delete_any_master_hukuman_content',
);

$modules = array(
  0 => 'node',
);
