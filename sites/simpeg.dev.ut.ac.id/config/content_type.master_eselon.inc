<?php
/**
 * @file
 * content_type.master_eselon.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'master_eselon',
  'name' => 'Master Eselon',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Eselon',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__master_eselon' => 'variable.field_bundle_settings_node__master_eselon',
  'variable.node_options_master_eselon' => 'variable.node_options_master_eselon',
  'variable.node_preview_master_eselon' => 'variable.node_preview_master_eselon',
  'variable.node_submitted_master_eselon' => 'variable.node_submitted_master_eselon',
  'variable.comment_default_per_page_master_eselon' => 'variable.comment_default_per_page_master_eselon',
  'variable.comment_form_location_master_eselon' => 'variable.comment_form_location_master_eselon',
  'variable.comment_preview_master_eselon' => 'variable.comment_preview_master_eselon',
  'variable.comment_subject_field_master_eselon' => 'variable.comment_subject_field_master_eselon',
);

$optional = array(
  'field.node.field_kode.master_eselon' => 'field.node.field_kode.master_eselon',
  'field.node.field_tunjangan_eselon.master_eselon' => 'field.node.field_tunjangan_eselon.master_eselon',
  'field.node.field_keterangan.master_eselon' => 'field.node.field_keterangan.master_eselon',
  'permission.create_master_eselon_content' => 'permission.create_master_eselon_content',
  'permission.edit_own_master_eselon_content' => 'permission.edit_own_master_eselon_content',
  'permission.edit_any_master_eselon_content' => 'permission.edit_any_master_eselon_content',
  'permission.delete_own_master_eselon_content' => 'permission.delete_own_master_eselon_content',
  'permission.delete_any_master_eselon_content' => 'permission.delete_any_master_eselon_content',
);

$modules = array(
  0 => 'node',
);
