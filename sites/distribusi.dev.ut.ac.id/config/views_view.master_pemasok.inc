<?php
/**
 * @file
 * views_view.master_pemasok.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'master_pemasok';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Master Pemasok';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Master Pemasok';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer master_pemasok vocabulary terms';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cari';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Muat Ulang';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« awal';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ sebelumnya';
$handler->display->display_options['pager']['options']['tags']['next'] = 'selanjutnya ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'akhir »';
$handler->display->display_options['style_plugin'] = 'table';
/* Header: Global: Link */
$handler->display->display_options['header']['link']['id'] = 'link';
$handler->display->display_options['header']['link']['table'] = 'views';
$handler->display->display_options['header']['link']['field'] = 'link';
$handler->display->display_options['header']['link']['empty'] = TRUE;
$handler->display->display_options['header']['link']['text'] = 'Tambah Data';
$handler->display->display_options['header']['link']['path'] = 'admin/structure/taxonomy/master_pemasok/add';
$handler->display->display_options['header']['link']['class'] = 'btn btn-success';
/* Footer: Global: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
$handler->display->display_options['footer']['result']['content'] = 'Data ke @start sampai @end dari @total.';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = 'No.';
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
$handler->display->display_options['fields']['counter']['reverse'] = 0;
/* Field: Taxonomy term: Kode Pemasok */
$handler->display->display_options['fields']['field_kode_pemasok']['id'] = 'field_kode_pemasok';
$handler->display->display_options['fields']['field_kode_pemasok']['table'] = 'field_data_field_kode_pemasok';
$handler->display->display_options['fields']['field_kode_pemasok']['field'] = 'field_kode_pemasok';
/* Field: Taxonomy term: Nama Pemasok */
$handler->display->display_options['fields']['field_nama_pemasok']['id'] = 'field_nama_pemasok';
$handler->display->display_options['fields']['field_nama_pemasok']['table'] = 'field_data_field_nama_pemasok';
$handler->display->display_options['fields']['field_nama_pemasok']['field'] = 'field_nama_pemasok';
/* Field: Taxonomy term: Alamat */
$handler->display->display_options['fields']['field_alamat_pemasok']['id'] = 'field_alamat_pemasok';
$handler->display->display_options['fields']['field_alamat_pemasok']['table'] = 'field_data_field_alamat_pemasok';
$handler->display->display_options['fields']['field_alamat_pemasok']['field'] = 'field_alamat_pemasok';
/* Field: Taxonomy term: Telp */
$handler->display->display_options['fields']['field_telp']['id'] = 'field_telp';
$handler->display->display_options['fields']['field_telp']['table'] = 'field_data_field_telp';
$handler->display->display_options['fields']['field_telp']['field'] = 'field_telp';
/* Field: Taxonomy term: Nama Kontak Person */
$handler->display->display_options['fields']['field_nama_kontak_person']['id'] = 'field_nama_kontak_person';
$handler->display->display_options['fields']['field_nama_kontak_person']['table'] = 'field_data_field_nama_kontak_person';
$handler->display->display_options['fields']['field_nama_kontak_person']['field'] = 'field_nama_kontak_person';
/* Field: Taxonomy term: No Tlp Kontak Person */
$handler->display->display_options['fields']['field_no_tlp_kontak_person']['id'] = 'field_no_tlp_kontak_person';
$handler->display->display_options['fields']['field_no_tlp_kontak_person']['table'] = 'field_data_field_no_tlp_kontak_person';
$handler->display->display_options['fields']['field_no_tlp_kontak_person']['field'] = 'field_no_tlp_kontak_person';
/* Field: Taxonomy term: Status Aktif */
$handler->display->display_options['fields']['field_status_aktif_pemasok']['id'] = 'field_status_aktif_pemasok';
$handler->display->display_options['fields']['field_status_aktif_pemasok']['table'] = 'field_data_field_status_aktif_pemasok';
$handler->display->display_options['fields']['field_status_aktif_pemasok']['field'] = 'field_status_aktif_pemasok';
$handler->display->display_options['fields']['field_status_aktif_pemasok']['type'] = 'taxonomy_term_reference_plain';
/* Sort criterion: Taxonomy term: Kode Pemasok (field_kode_pemasok) */
$handler->display->display_options['sorts']['field_kode_pemasok_value']['id'] = 'field_kode_pemasok_value';
$handler->display->display_options['sorts']['field_kode_pemasok_value']['table'] = 'field_data_field_kode_pemasok';
$handler->display->display_options['sorts']['field_kode_pemasok_value']['field'] = 'field_kode_pemasok_value';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'master_pemasok' => 'master_pemasok',
);
/* Filter criterion: Global: Combine fields filter */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['operator'] = 'word';
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Pencarian';
$handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
$handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['combine']['fields'] = array(
  'field_kode_pemasok' => 'field_kode_pemasok',
  'field_nama_pemasok' => 'field_nama_pemasok',
  'field_alamat_pemasok' => 'field_alamat_pemasok',
  'field_telp' => 'field_telp',
  'field_nama_kontak_person' => 'field_nama_kontak_person',
  'field_no_tlp_kontak_person' => 'field_no_tlp_kontak_person',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'master-pemasok';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Pemasok';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
  2 => 'text',
);
