<?php
/**
 * @file
 * views_view.master_unit.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'master_unit';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Master Unit';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Master Unit';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer m_unit vocabulary terms';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cari';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Muat Ulang';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Muat Ulang';
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
$handler->display->display_options['header']['link']['path'] = 'admin/structure/taxonomy/m_unit/add';
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
/* Field: Taxonomy term: Kode Unit */
$handler->display->display_options['fields']['field_kode_unit']['id'] = 'field_kode_unit';
$handler->display->display_options['fields']['field_kode_unit']['table'] = 'field_data_field_kode_unit';
$handler->display->display_options['fields']['field_kode_unit']['field'] = 'field_kode_unit';
$handler->display->display_options['fields']['field_kode_unit']['settings'] = array(
  'custom_link_to_entity' => 0,
  'custom_prefix' => '',
  'custom_suffix' => '',
  'custom_reverse' => 0,
  'custom_trim' => 0,
  'custom_strtolower' => 0,
  'custom_strtoupper' => 0,
  'custom_ucfirst' => 0,
  'custom_ucwords' => 0,
  'custom_strip_tags' => 0,
  'custom_strip_preserve' => '',
);
/* Field: Taxonomy term: Nama Unit */
$handler->display->display_options['fields']['field_nama_unit']['id'] = 'field_nama_unit';
$handler->display->display_options['fields']['field_nama_unit']['table'] = 'field_data_field_nama_unit';
$handler->display->display_options['fields']['field_nama_unit']['field'] = 'field_nama_unit';
$handler->display->display_options['fields']['field_nama_unit']['settings'] = array(
  'custom_link_to_entity' => 0,
  'custom_prefix' => '',
  'custom_suffix' => '',
  'custom_reverse' => 0,
  'custom_trim' => 0,
  'custom_strtolower' => 0,
  'custom_strtoupper' => 0,
  'custom_ucfirst' => 0,
  'custom_ucwords' => 0,
  'custom_strip_tags' => 0,
  'custom_strip_preserve' => '',
);
/* Field: Taxonomy term: Kode Status Unit */
$handler->display->display_options['fields']['field_kode_status_unit']['id'] = 'field_kode_status_unit';
$handler->display->display_options['fields']['field_kode_status_unit']['table'] = 'field_data_field_kode_status_unit';
$handler->display->display_options['fields']['field_kode_status_unit']['field'] = 'field_kode_status_unit';
$handler->display->display_options['fields']['field_kode_status_unit']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_kode_status_unit']['settings'] = array(
  'custom_link_to_entity' => 0,
  'custom_prefix' => '',
  'custom_suffix' => '',
  'custom_reverse' => 0,
  'custom_trim' => 0,
  'custom_strtolower' => 0,
  'custom_strtoupper' => 0,
  'custom_ucfirst' => 0,
  'custom_ucwords' => 0,
  'custom_strip_tags' => 0,
  'custom_strip_preserve' => '',
);
/* Field: Taxonomy term: Pejabat */
$handler->display->display_options['fields']['field_pejabat']['id'] = 'field_pejabat';
$handler->display->display_options['fields']['field_pejabat']['table'] = 'field_data_field_pejabat';
$handler->display->display_options['fields']['field_pejabat']['field'] = 'field_pejabat';
$handler->display->display_options['fields']['field_pejabat']['settings'] = array(
  'custom_link_to_entity' => 0,
  'custom_prefix' => '',
  'custom_suffix' => '',
  'custom_reverse' => 0,
  'custom_trim' => 0,
  'custom_strtolower' => 0,
  'custom_strtoupper' => 0,
  'custom_ucfirst' => 0,
  'custom_ucwords' => 0,
  'custom_strip_tags' => 0,
  'custom_strip_preserve' => '',
);
/* Field: Taxonomy term: Alamat */
$handler->display->display_options['fields']['field_alamat']['id'] = 'field_alamat';
$handler->display->display_options['fields']['field_alamat']['table'] = 'field_data_field_alamat';
$handler->display->display_options['fields']['field_alamat']['field'] = 'field_alamat';
$handler->display->display_options['fields']['field_alamat']['settings'] = array(
  'custom_link_to_entity' => 0,
  'custom_prefix' => '',
  'custom_suffix' => '',
  'custom_reverse' => 0,
  'custom_trim' => 0,
  'custom_strtolower' => 0,
  'custom_strtoupper' => 0,
  'custom_ucfirst' => 0,
  'custom_ucwords' => 0,
  'custom_strip_tags' => 0,
  'custom_strip_preserve' => '',
);
/* Field: Taxonomy term: Nomor Telpon */
$handler->display->display_options['fields']['field_no_telpon']['id'] = 'field_no_telpon';
$handler->display->display_options['fields']['field_no_telpon']['table'] = 'field_data_field_no_telpon';
$handler->display->display_options['fields']['field_no_telpon']['field'] = 'field_no_telpon';
$handler->display->display_options['fields']['field_no_telpon']['settings'] = array(
  'custom_link_to_entity' => 0,
  'custom_prefix' => '',
  'custom_suffix' => '',
  'custom_reverse' => 0,
  'custom_trim' => 0,
  'custom_strtolower' => 0,
  'custom_strtoupper' => 0,
  'custom_ucfirst' => 0,
  'custom_ucwords' => 0,
  'custom_strip_tags' => 0,
  'custom_strip_preserve' => '',
);
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = '';
$handler->display->display_options['fields']['edit_term']['text'] = 'Ubah';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'm_unit' => 'm_unit',
);
/* Filter criterion: Global: Combine fields filter */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['operator'] = 'contains';
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
  'field_kode_unit' => 'field_kode_unit',
  'field_nama_unit' => 'field_nama_unit',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'master-unit';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Unit';
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
