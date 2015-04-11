<?php
/**
 * @file
 * content_type.data_pribadi.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'data_pribadi',
  'name' => 'Data Pribadi',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Nama',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__data_pribadi' => 'variable.field_bundle_settings_node__data_pribadi',
  'variable.node_options_data_pribadi' => 'variable.node_options_data_pribadi',
  'variable.node_preview_data_pribadi' => 'variable.node_preview_data_pribadi',
  'variable.node_submitted_data_pribadi' => 'variable.node_submitted_data_pribadi',
  'variable.comment_default_per_page_data_pribadi' => 'variable.comment_default_per_page_data_pribadi',
  'variable.comment_form_location_data_pribadi' => 'variable.comment_form_location_data_pribadi',
  'variable.comment_preview_data_pribadi' => 'variable.comment_preview_data_pribadi',
  'variable.comment_subject_field_data_pribadi' => 'variable.comment_subject_field_data_pribadi',
);

$optional = array(
  'field.node.field_nidn.data_pribadi' => 'field.node.field_nidn.data_pribadi',
  'field.node.field_gelar_depan.data_pribadi' => 'field.node.field_gelar_depan.data_pribadi',
  'field.node.field_gelar_belakang.data_pribadi' => 'field.node.field_gelar_belakang.data_pribadi',
  'field.node.field_tempat_lahir.data_pribadi' => 'field.node.field_tempat_lahir.data_pribadi',
  'field.node.field_agama.data_pribadi' => 'field.node.field_agama.data_pribadi',
  'field.node.field_status_nikah.data_pribadi' => 'field.node.field_status_nikah.data_pribadi',
  'field.node.field_jenis_kelamin.data_pribadi' => 'field.node.field_jenis_kelamin.data_pribadi',
  'field.node.field_status_pegawai.data_pribadi' => 'field.node.field_status_pegawai.data_pribadi',
  'field.node.field_jenis_pegawai.data_pribadi' => 'field.node.field_jenis_pegawai.data_pribadi',
  'field.node.field_nip.data_pribadi' => 'field.node.field_nip.data_pribadi',
  'field.node.field_nip_lama.data_pribadi' => 'field.node.field_nip_lama.data_pribadi',
  'field.node.field_tmt_cpns.data_pribadi' => 'field.node.field_tmt_cpns.data_pribadi',
  'field.node.field_tmt_pns.data_pribadi' => 'field.node.field_tmt_pns.data_pribadi',
  'field.node.field_tanggal_lahir.data_pribadi' => 'field.node.field_tanggal_lahir.data_pribadi',
  'field.node.field_tmt_masuk_ut.data_pribadi' => 'field.node.field_tmt_masuk_ut.data_pribadi',
  'field.node.field_lokasi_pegawai.data_pribadi' => 'field.node.field_lokasi_pegawai.data_pribadi',
  'field.node.field_status_mutasi.data_pribadi' => 'field.node.field_status_mutasi.data_pribadi',
  'field.node.field_status_aktif.data_pribadi' => 'field.node.field_status_aktif.data_pribadi',
  'field.node.field_tmt_aktif.data_pribadi' => 'field.node.field_tmt_aktif.data_pribadi',
  'field.node.field_email.data_pribadi' => 'field.node.field_email.data_pribadi',
  'field.node.field_no_telp_hp.data_pribadi' => 'field.node.field_no_telp_hp.data_pribadi',
  'field.node.field_foto.data_pribadi' => 'field.node.field_foto.data_pribadi',
  'field.node.field_pangkat_gol.data_pribadi' => 'field.node.field_pangkat_gol.data_pribadi',
  'field.node.field_unit_kerja.data_pribadi' => 'field.node.field_unit_kerja.data_pribadi',
  'field.node.field_jabatan.data_pribadi' => 'field.node.field_jabatan.data_pribadi',
  'permission.create_data_pribadi_content' => 'permission.create_data_pribadi_content',
  'permission.edit_own_data_pribadi_content' => 'permission.edit_own_data_pribadi_content',
  'permission.edit_any_data_pribadi_content' => 'permission.edit_any_data_pribadi_content',
  'permission.delete_own_data_pribadi_content' => 'permission.delete_own_data_pribadi_content',
  'permission.delete_any_data_pribadi_content' => 'permission.delete_any_data_pribadi_content',
);

$modules = array(
  0 => 'node',
);
