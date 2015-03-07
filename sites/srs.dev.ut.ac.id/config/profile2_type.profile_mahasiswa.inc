<?php
/**
 * @file
 * profile2_type.profile_mahasiswa.inc
 */

$api = '2.0.0';

$data = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "profile_mahasiswa",
    "label" : "Profile Mahasiswa",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');

$dependencies = array();

$optional = array(
  'field.profile2.field_nama_mahasiswa.profile_mahasiswa' => 'field.profile2.field_nama_mahasiswa.profile_mahasiswa',
  'field.profile2.field_alamat.profile_mahasiswa' => 'field.profile2.field_alamat.profile_mahasiswa',
  'field.profile2.field_tanggal_lahir.profile_mahasiswa' => 'field.profile2.field_tanggal_lahir.profile_mahasiswa',
  'field.profile2.field_tempat_lahir.profile_mahasiswa' => 'field.profile2.field_tempat_lahir.profile_mahasiswa',
  'field.profile2.field_upbjj.profile_mahasiswa' => 'field.profile2.field_upbjj.profile_mahasiswa',
  'field.profile2.field_kode_kabko_rumah.profile_mahasiswa' => 'field.profile2.field_kode_kabko_rumah.profile_mahasiswa',
  'field.profile2.field_kode_kabko_tpu.profile_mahasiswa' => 'field.profile2.field_kode_kabko_tpu.profile_mahasiswa',
  'field.profile2.field_kode_pos_rumah.profile_mahasiswa' => 'field.profile2.field_kode_pos_rumah.profile_mahasiswa',
  'field.profile2.field_kode_kabko_pokjar.profile_mahasiswa' => 'field.profile2.field_kode_kabko_pokjar.profile_mahasiswa',
  'field.profile2.field_alamat_pokjar.profile_mahasiswa' => 'field.profile2.field_alamat_pokjar.profile_mahasiswa',
  'field.profile2.field_kode_pos_pokjar.profile_mahasiswa' => 'field.profile2.field_kode_pos_pokjar.profile_mahasiswa',
  'field.profile2.field_agama.profile_mahasiswa' => 'field.profile2.field_agama.profile_mahasiswa',
  'field.profile2.field_no_hp.profile_mahasiswa' => 'field.profile2.field_no_hp.profile_mahasiswa',
  'field.profile2.field_jenis_kelamin.profile_mahasiswa' => 'field.profile2.field_jenis_kelamin.profile_mahasiswa',
  'field.profile2.field_status_kawin.profile_mahasiswa' => 'field.profile2.field_status_kawin.profile_mahasiswa',
  'field.profile2.field_kewarganegaraan.profile_mahasiswa' => 'field.profile2.field_kewarganegaraan.profile_mahasiswa',
  'field.profile2.field_pendidikan_akhir.profile_mahasiswa' => 'field.profile2.field_pendidikan_akhir.profile_mahasiswa',
  'field.profile2.field_jurusan_asal.profile_mahasiswa' => 'field.profile2.field_jurusan_asal.profile_mahasiswa',
  'field.profile2.field_lama_mengajar.profile_mahasiswa' => 'field.profile2.field_lama_mengajar.profile_mahasiswa',
  'field.profile2.field_tahun_ijazah.profile_mahasiswa' => 'field.profile2.field_tahun_ijazah.profile_mahasiswa',
);

$modules = array(
  0 => 'entity',
  1 => 'profile2',
);
