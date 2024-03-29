<?php
/**
 * @file
 * views_view.master_lokasi.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'master_lokasi';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Master Lokasi';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Master Lokasi';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer master_lokasi vocabulary terms';
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
$handler->display->display_options['header']['link']['path'] = 'admin/structure/taxonomy/master_lokasi/add';
$handler->display->display_options['header']['link']['class'] = 'btn btn-success';
/* Footer: Global: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
$handler->display->display_options['footer']['result']['content'] = 'Data ke @start sampai @end dari @total.';
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = 'No.';
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
$handler->display->display_options['fields']['counter']['reverse'] = 0;
/* Field: Taxonomy term: Kode Lokasi */
$handler->display->display_options['fields']['field_kode_lokasi']['id'] = 'field_kode_lokasi';
$handler->display->display_options['fields']['field_kode_lokasi']['table'] = 'field_data_field_kode_lokasi';
$handler->display->display_options['fields']['field_kode_lokasi']['field'] = 'field_kode_lokasi';
/* Field: Taxonomy term: Kode Unit */
$handler->display->display_options['fields']['field_kode_unit_m_lokasi']['id'] = 'field_kode_unit_m_lokasi';
$handler->display->display_options['fields']['field_kode_unit_m_lokasi']['table'] = 'field_data_field_kode_unit_m_lokasi';
$handler->display->display_options['fields']['field_kode_unit_m_lokasi']['field'] = 'field_kode_unit_m_lokasi';
$handler->display->display_options['fields']['field_kode_unit_m_lokasi']['type'] = 'taxonomy_term_reference_plain';
/* Field: Taxonomy term: Kapasitas */
$handler->display->display_options['fields']['field_kapasitas']['id'] = 'field_kapasitas';
$handler->display->display_options['fields']['field_kapasitas']['table'] = 'field_data_field_kapasitas';
$handler->display->display_options['fields']['field_kapasitas']['field'] = 'field_kapasitas';
$handler->display->display_options['fields']['field_kapasitas']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Taxonomy term: Status Lokasi */
$handler->display->display_options['fields']['field_status_lokasi']['id'] = 'field_status_lokasi';
$handler->display->display_options['fields']['field_status_lokasi']['table'] = 'field_data_field_status_lokasi';
$handler->display->display_options['fields']['field_status_lokasi']['field'] = 'field_status_lokasi';
/* Field: Taxonomy term: Keterangan Lokasi */
$handler->display->display_options['fields']['field_keterangan_lokasi']['id'] = 'field_keterangan_lokasi';
$handler->display->display_options['fields']['field_keterangan_lokasi']['table'] = 'field_data_field_keterangan_lokasi';
$handler->display->display_options['fields']['field_keterangan_lokasi']['field'] = 'field_keterangan_lokasi';
/* Sort criterion: Taxonomy term: Kode Lokasi (field_kode_lokasi) */
$handler->display->display_options['sorts']['field_kode_lokasi_value']['id'] = 'field_kode_lokasi_value';
$handler->display->display_options['sorts']['field_kode_lokasi_value']['table'] = 'field_data_field_kode_lokasi';
$handler->display->display_options['sorts']['field_kode_lokasi_value']['field'] = 'field_kode_lokasi_value';
/* Sort criterion: Taxonomy term: Kode Unit (field_kode_unit_m_lokasi) */
$handler->display->display_options['sorts']['field_kode_unit_m_lokasi_tid']['id'] = 'field_kode_unit_m_lokasi_tid';
$handler->display->display_options['sorts']['field_kode_unit_m_lokasi_tid']['table'] = 'field_data_field_kode_unit_m_lokasi';
$handler->display->display_options['sorts']['field_kode_unit_m_lokasi_tid']['field'] = 'field_kode_unit_m_lokasi_tid';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'master_lokasi' => 'master_lokasi',
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
  'field_kode_lokasi' => 'field_kode_lokasi',
  'field_kode_unit_m_lokasi' => 'field_kode_unit_m_lokasi',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'master-lokasi';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Lokasi';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
  2 => 'text',
  3 => 'number',
);
