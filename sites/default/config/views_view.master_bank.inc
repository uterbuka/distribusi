<?php
/**
 * @file
 * views_view.master_bank.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'master_bank';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Master Bank';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Master Bank';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer master_bank vocabulary terms';
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
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ kembali';
$handler->display->display_options['pager']['options']['tags']['next'] = 'berikut ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'akhir »';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_kode_bank' => 'field_kode_bank',
  'name' => 'name',
  'field_status_aktif_bank' => 'field_status_aktif_bank',
  'edit_term' => 'edit_term',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_kode_bank' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_status_aktif_bank' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_term' => array(
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Link */
$handler->display->display_options['header']['link']['id'] = 'link';
$handler->display->display_options['header']['link']['table'] = 'views';
$handler->display->display_options['header']['link']['field'] = 'link';
$handler->display->display_options['header']['link']['text'] = 'Tambah Data';
$handler->display->display_options['header']['link']['path'] = 'admin/structure/taxonomy/master_bank/add';
$handler->display->display_options['header']['link']['class'] = 'btn btn-success';
/* Footer: Global: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
$handler->display->display_options['footer']['result']['content'] = 'Data ke @start sampai @end dari @total';
/* Field: Taxonomy term: Kode Bank */
$handler->display->display_options['fields']['field_kode_bank']['id'] = 'field_kode_bank';
$handler->display->display_options['fields']['field_kode_bank']['table'] = 'field_data_field_kode_bank';
$handler->display->display_options['fields']['field_kode_bank']['field'] = 'field_kode_bank';
$handler->display->display_options['fields']['field_kode_bank']['label'] = 'Kode';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Nama Bank';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
/* Field: Taxonomy term: Status Aktif Bank */
$handler->display->display_options['fields']['field_status_aktif_bank']['id'] = 'field_status_aktif_bank';
$handler->display->display_options['fields']['field_status_aktif_bank']['table'] = 'field_data_field_status_aktif_bank';
$handler->display->display_options['fields']['field_status_aktif_bank']['field'] = 'field_status_aktif_bank';
$handler->display->display_options['fields']['field_status_aktif_bank']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = '';
$handler->display->display_options['fields']['edit_term']['text'] = 'Ubah';
/* Sort criterion: Taxonomy term: Kode Bank (field_kode_bank) */
$handler->display->display_options['sorts']['field_kode_bank_value']['id'] = 'field_kode_bank_value';
$handler->display->display_options['sorts']['field_kode_bank_value']['table'] = 'field_data_field_kode_bank';
$handler->display->display_options['sorts']['field_kode_bank_value']['field'] = 'field_kode_bank_value';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'master_bank' => 'master_bank',
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
  'field_kode_bank' => 'field_kode_bank',
  'name' => 'name',
  'field_status_aktif_bank' => 'field_status_aktif_bank',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'master-bank';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Bank';
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