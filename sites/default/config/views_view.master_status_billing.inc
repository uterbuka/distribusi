<?php
/**
 * @file
 * views_view.master_status_billing.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'master_status_billing';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Master Status Billing';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Master Status Billing';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer master_status_billing vocabulary terms';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cari';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Muat Ulang';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'name' => 'name',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Link */
$handler->display->display_options['header']['link']['id'] = 'link';
$handler->display->display_options['header']['link']['table'] = 'views';
$handler->display->display_options['header']['link']['field'] = 'link';
$handler->display->display_options['header']['link']['label'] = 'Tambah Data';
$handler->display->display_options['header']['link']['empty'] = TRUE;
$handler->display->display_options['header']['link']['text'] = 'Tambah Data';
$handler->display->display_options['header']['link']['path'] = 'admin/structure/taxonomy/master_status_billing/add';
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
$handler->display->display_options['fields']['counter']['label'] = 'No';
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
$handler->display->display_options['fields']['counter']['reverse'] = 0;
/* Field: Taxonomy term: Kode Status Billing */
$handler->display->display_options['fields']['field_kode_status_billing']['id'] = 'field_kode_status_billing';
$handler->display->display_options['fields']['field_kode_status_billing']['table'] = 'field_data_field_kode_status_billing';
$handler->display->display_options['fields']['field_kode_status_billing']['field'] = 'field_kode_status_billing';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Keterangan Status Billing';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = 'Keterangan Tambahan';
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = '';
$handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_term']['text'] = 'Ubah';
/* Sort criterion: Taxonomy term: Kode Status Billing (field_kode_status_billing) */
$handler->display->display_options['sorts']['field_kode_status_billing_value']['id'] = 'field_kode_status_billing_value';
$handler->display->display_options['sorts']['field_kode_status_billing_value']['table'] = 'field_data_field_kode_status_billing';
$handler->display->display_options['sorts']['field_kode_status_billing_value']['field'] = 'field_kode_status_billing_value';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'master_status_billing' => 'master_status_billing',
);
$handler->display->display_options['filters']['machine_name']['group'] = 1;
/* Filter criterion: Global: Combine fields filter */
$handler->display->display_options['filters']['combine_1']['id'] = 'combine_1';
$handler->display->display_options['filters']['combine_1']['table'] = 'views';
$handler->display->display_options['filters']['combine_1']['field'] = 'combine';
$handler->display->display_options['filters']['combine_1']['operator'] = 'word';
$handler->display->display_options['filters']['combine_1']['group'] = 1;
$handler->display->display_options['filters']['combine_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine_1']['expose']['operator_id'] = 'combine_1_op';
$handler->display->display_options['filters']['combine_1']['expose']['label'] = 'Pencarian';
$handler->display->display_options['filters']['combine_1']['expose']['operator'] = 'combine_1_op';
$handler->display->display_options['filters']['combine_1']['expose']['identifier'] = 'combine_1';
$handler->display->display_options['filters']['combine_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['combine_1']['fields'] = array(
  'field_kode_status_billing' => 'field_kode_status_billing',
  'name' => 'name',
  'description' => 'description',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'master-status-billing';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Status Billing';
$handler->display->display_options['menu']['description'] = 'Menu Status Billing';
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
