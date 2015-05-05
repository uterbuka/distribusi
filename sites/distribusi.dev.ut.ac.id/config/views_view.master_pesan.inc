<?php
/**
 * @file
 * views_view.master_pesan.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'master_pesan';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Master Pesan';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Master Pesan';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer master_pesan vocabulary terms';
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
$handler->display->display_options['header']['link']['path'] = 'admin/structure/taxonomy/master_pesan/add';
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
/* Field: Taxonomy term: Masa */
$handler->display->display_options['fields']['field_masa_m_pesan']['id'] = 'field_masa_m_pesan';
$handler->display->display_options['fields']['field_masa_m_pesan']['table'] = 'field_data_field_masa_m_pesan';
$handler->display->display_options['fields']['field_masa_m_pesan']['field'] = 'field_masa_m_pesan';
$handler->display->display_options['fields']['field_masa_m_pesan']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_masa_m_pesan']['settings'] = array(
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
/* Field: Taxonomy term: Nomor Surat Pesan */
$handler->display->display_options['fields']['field_no_surat_pesan']['id'] = 'field_no_surat_pesan';
$handler->display->display_options['fields']['field_no_surat_pesan']['table'] = 'field_data_field_no_surat_pesan';
$handler->display->display_options['fields']['field_no_surat_pesan']['field'] = 'field_no_surat_pesan';
$handler->display->display_options['fields']['field_no_surat_pesan']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
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
/* Field: Taxonomy term: Kode Unit */
$handler->display->display_options['fields']['field_kode_unit_m_pesan']['id'] = 'field_kode_unit_m_pesan';
$handler->display->display_options['fields']['field_kode_unit_m_pesan']['table'] = 'field_data_field_kode_unit_m_pesan';
$handler->display->display_options['fields']['field_kode_unit_m_pesan']['field'] = 'field_kode_unit_m_pesan';
$handler->display->display_options['fields']['field_kode_unit_m_pesan']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_kode_unit_m_pesan']['settings'] = array(
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
/* Field: Taxonomy term: Kode Jenis Pesan */
$handler->display->display_options['fields']['field_kd_jns_psn_m_pesan']['id'] = 'field_kd_jns_psn_m_pesan';
$handler->display->display_options['fields']['field_kd_jns_psn_m_pesan']['table'] = 'field_data_field_kd_jns_psn_m_pesan';
$handler->display->display_options['fields']['field_kd_jns_psn_m_pesan']['field'] = 'field_kd_jns_psn_m_pesan';
$handler->display->display_options['fields']['field_kd_jns_psn_m_pesan']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_kd_jns_psn_m_pesan']['settings'] = array(
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
/* Field: Taxonomy term: Tanggal Pesan */
$handler->display->display_options['fields']['field_tanggal_m_pesan']['id'] = 'field_tanggal_m_pesan';
$handler->display->display_options['fields']['field_tanggal_m_pesan']['table'] = 'field_data_field_tanggal_m_pesan';
$handler->display->display_options['fields']['field_tanggal_m_pesan']['field'] = 'field_tanggal_m_pesan';
$handler->display->display_options['fields']['field_tanggal_m_pesan']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
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
/* Field: Taxonomy term: Status Pemenuhan */
$handler->display->display_options['fields']['field_status_pemenuhan']['id'] = 'field_status_pemenuhan';
$handler->display->display_options['fields']['field_status_pemenuhan']['table'] = 'field_data_field_status_pemenuhan';
$handler->display->display_options['fields']['field_status_pemenuhan']['field'] = 'field_status_pemenuhan';
$handler->display->display_options['fields']['field_status_pemenuhan']['settings'] = array(
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
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = '';
$handler->display->display_options['fields']['edit_term']['text'] = 'Ubah';
/* Sort criterion: Taxonomy term: Masa (field_masa_m_pesan) */
$handler->display->display_options['sorts']['field_masa_m_pesan_tid']['id'] = 'field_masa_m_pesan_tid';
$handler->display->display_options['sorts']['field_masa_m_pesan_tid']['table'] = 'field_data_field_masa_m_pesan';
$handler->display->display_options['sorts']['field_masa_m_pesan_tid']['field'] = 'field_masa_m_pesan_tid';
/* Sort criterion: Taxonomy term: Tanggal Pesan (field_tanggal_m_pesan) */
$handler->display->display_options['sorts']['field_tanggal_m_pesan_value']['id'] = 'field_tanggal_m_pesan_value';
$handler->display->display_options['sorts']['field_tanggal_m_pesan_value']['table'] = 'field_data_field_tanggal_m_pesan';
$handler->display->display_options['sorts']['field_tanggal_m_pesan_value']['field'] = 'field_tanggal_m_pesan_value';
/* Sort criterion: Taxonomy term: Nomor Surat Pesan (field_no_surat_pesan) */
$handler->display->display_options['sorts']['field_no_surat_pesan_value']['id'] = 'field_no_surat_pesan_value';
$handler->display->display_options['sorts']['field_no_surat_pesan_value']['table'] = 'field_data_field_no_surat_pesan';
$handler->display->display_options['sorts']['field_no_surat_pesan_value']['field'] = 'field_no_surat_pesan_value';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'master_pesan' => 'master_pesan',
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
  'field_masa_m_pesan' => 'field_masa_m_pesan',
  'field_no_surat_pesan' => 'field_no_surat_pesan',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'master-pesan';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Pesan';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
  2 => 'number',
  3 => 'date',
  4 => 'text',
);
