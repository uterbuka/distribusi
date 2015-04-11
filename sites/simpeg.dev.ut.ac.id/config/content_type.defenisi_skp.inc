<?php
/**
 * @file
 * content_type.defenisi_skp.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'defenisi_skp',
  'name' => 'Defenisi SKP',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__defenisi_skp' => 'variable.field_bundle_settings_node__defenisi_skp',
  'variable.node_options_defenisi_skp' => 'variable.node_options_defenisi_skp',
  'variable.node_preview_defenisi_skp' => 'variable.node_preview_defenisi_skp',
  'variable.node_submitted_defenisi_skp' => 'variable.node_submitted_defenisi_skp',
  'variable.comment_default_per_page_defenisi_skp' => 'variable.comment_default_per_page_defenisi_skp',
  'variable.comment_form_location_defenisi_skp' => 'variable.comment_form_location_defenisi_skp',
  'variable.comment_preview_defenisi_skp' => 'variable.comment_preview_defenisi_skp',
  'variable.comment_subject_field_defenisi_skp' => 'variable.comment_subject_field_defenisi_skp',
);

$optional = array(
  'field.node.body.defenisi_skp' => 'field.node.body.defenisi_skp',
  'permission.create_defenisi_skp_content' => 'permission.create_defenisi_skp_content',
  'permission.edit_own_defenisi_skp_content' => 'permission.edit_own_defenisi_skp_content',
  'permission.edit_any_defenisi_skp_content' => 'permission.edit_any_defenisi_skp_content',
  'permission.delete_own_defenisi_skp_content' => 'permission.delete_own_defenisi_skp_content',
  'permission.delete_any_defenisi_skp_content' => 'permission.delete_any_defenisi_skp_content',
);

$modules = array(
  0 => 'node',
);
