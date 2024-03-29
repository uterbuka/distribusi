<?php
/**
 * @file
 * views_view.master_ekspedisi.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'master_ekspedisi';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Master Ekspedisi';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Master Ekspedisi';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer master_ekspedisi vocabulary terms';
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
$handler->display->display_options['header']['link']['path'] = 'admin/structure/taxonomy/master_ekspedisi/add';
$handler->display->display_options['header']['link']['class'] = 'btn btn-success';
/* Footer: Global: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
$handler->display->display_options['footer']['result']['empty'] = TRUE;
$handler->display->display_options['footer']['result']['content'] = 'Data dari @start sampai @end ke @total.';
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = 'No.';
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
$handler->display->display_options['fields']['counter']['reverse'] = 0;
/* Field: Taxonomy term: Kode Ekspedisi */
$handler->display->display_options['fields']['field_kode_ekspedisi']['id'] = 'field_kode_ekspedisi';
$handler->display->display_options['fields']['field_kode_ekspedisi']['table'] = 'field_data_field_kode_ekspedisi';
$handler->display->display_options['fields']['field_kode_ekspedisi']['field'] = 'field_kode_ekspedisi';
/* Field: Taxonomy term: Nama Ekspedisi */
$handler->display->display_options['fields']['field_nama_ekspedisi']['id'] = 'field_nama_ekspedisi';
$handler->display->display_options['fields']['field_nama_ekspedisi']['table'] = 'field_data_field_nama_ekspedisi';
$handler->display->display_options['fields']['field_nama_ekspedisi']['field'] = 'field_nama_ekspedisi';
/* Field: Taxonomy term: Status Aktif */
$handler->display->display_options['fields']['field_status_aktif']['id'] = 'field_status_aktif';
$handler->display->display_options['fields']['field_status_aktif']['table'] = 'field_data_field_status_aktif';
$handler->display->display_options['fields']['field_status_aktif']['field'] = 'field_status_aktif';
$handler->display->display_options['fields']['field_status_aktif']['type'] = 'taxonomy_term_reference_plain';
/* Sort criterion: Taxonomy term: Kode Ekspedisi (field_kode_ekspedisi) */
$handler->display->display_options['sorts']['field_kode_ekspedisi_value']['id'] = 'field_kode_ekspedisi_value';
$handler->display->display_options['sorts']['field_kode_ekspedisi_value']['table'] = 'field_data_field_kode_ekspedisi';
$handler->display->display_options['sorts']['field_kode_ekspedisi_value']['field'] = 'field_kode_ekspedisi_value';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'master_ekspedisi' => 'master_ekspedisi',
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
  'field_kode_ekspedisi' => 'field_kode_ekspedisi',
  'field_nama_ekspedisi' => 'field_nama_ekspedisi',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'master-ekspedisi';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Ekspedisi';
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
