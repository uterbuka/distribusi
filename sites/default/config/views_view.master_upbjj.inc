<?php
/**
 * @file
 * views_view.master_upbjj.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'master_upbjj';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Master UPBJJ';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Master UPBJJ';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer master_upbjj vocabulary terms';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cari';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Muat ulang';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'counter' => 'counter',
  'name_1' => 'name_1',
  'field_integer_code' => 'field_integer_code',
  'field_alamat_kantor_thoroughfare' => 'field_alamat_kantor_thoroughfare',
  'field_alamat_kantor_postal_code' => 'field_alamat_kantor_postal_code',
  'field_email_upbjj' => 'field_email_upbjj',
  'field_nomor_fax_upbjj' => 'field_nomor_fax_upbjj',
  'field_kode_zona_waktu' => 'field_kode_zona_waktu',
  'edit_term' => 'edit_term',
);
$handler->display->display_options['style_options']['default'] = 'field_integer_code';
$handler->display->display_options['style_options']['info'] = array(
  'counter' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name_1' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_integer_code' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_alamat_kantor_thoroughfare' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_alamat_kantor_postal_code' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_email_upbjj' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_nomor_fax_upbjj' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_kode_zona_waktu' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_term' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Link */
$handler->display->display_options['header']['link']['id'] = 'link';
$handler->display->display_options['header']['link']['table'] = 'views';
$handler->display->display_options['header']['link']['field'] = 'link';
$handler->display->display_options['header']['link']['empty'] = TRUE;
$handler->display->display_options['header']['link']['text'] = 'Tambah data';
$handler->display->display_options['header']['link']['path'] = 'admin/structure/taxonomy/master_upbjj/add';
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
/* Field: Taxonomy term: Kode UPBJJ */
$handler->display->display_options['fields']['field_integer_code']['id'] = 'field_integer_code';
$handler->display->display_options['fields']['field_integer_code']['table'] = 'field_data_field_integer_code';
$handler->display->display_options['fields']['field_integer_code']['field'] = 'field_integer_code';
$handler->display->display_options['fields']['field_integer_code']['label'] = 'Kode';
$handler->display->display_options['fields']['field_integer_code']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = 'Nama';
/* Field: Taxonomy term: Alamat UPBJJ - Thoroughfare (i.e. Street address) */
$handler->display->display_options['fields']['field_alamat_kantor_thoroughfare']['id'] = 'field_alamat_kantor_thoroughfare';
$handler->display->display_options['fields']['field_alamat_kantor_thoroughfare']['table'] = 'field_data_field_alamat_kantor';
$handler->display->display_options['fields']['field_alamat_kantor_thoroughfare']['field'] = 'field_alamat_kantor_thoroughfare';
$handler->display->display_options['fields']['field_alamat_kantor_thoroughfare']['label'] = 'Alamat UPBJJ ';
/* Field: Taxonomy term: Alamat UPBJJ - Postal code */
$handler->display->display_options['fields']['field_alamat_kantor_postal_code']['id'] = 'field_alamat_kantor_postal_code';
$handler->display->display_options['fields']['field_alamat_kantor_postal_code']['table'] = 'field_data_field_alamat_kantor';
$handler->display->display_options['fields']['field_alamat_kantor_postal_code']['field'] = 'field_alamat_kantor_postal_code';
$handler->display->display_options['fields']['field_alamat_kantor_postal_code']['label'] = 'Kode Pos';
/* Field: Taxonomy term: Email UPBJJ */
$handler->display->display_options['fields']['field_email_upbjj']['id'] = 'field_email_upbjj';
$handler->display->display_options['fields']['field_email_upbjj']['table'] = 'field_data_field_email_upbjj';
$handler->display->display_options['fields']['field_email_upbjj']['field'] = 'field_email_upbjj';
$handler->display->display_options['fields']['field_email_upbjj']['label'] = 'Email';
/* Field: Taxonomy term: Nomor Fax UPBJJ */
$handler->display->display_options['fields']['field_nomor_fax_upbjj']['id'] = 'field_nomor_fax_upbjj';
$handler->display->display_options['fields']['field_nomor_fax_upbjj']['table'] = 'field_data_field_nomor_fax_upbjj';
$handler->display->display_options['fields']['field_nomor_fax_upbjj']['field'] = 'field_nomor_fax_upbjj';
$handler->display->display_options['fields']['field_nomor_fax_upbjj']['label'] = 'Nomor Fax';
/* Field: Taxonomy term: Kode Zona Waktu */
$handler->display->display_options['fields']['field_kode_zona_waktu']['id'] = 'field_kode_zona_waktu';
$handler->display->display_options['fields']['field_kode_zona_waktu']['table'] = 'field_data_field_kode_zona_waktu';
$handler->display->display_options['fields']['field_kode_zona_waktu']['field'] = 'field_kode_zona_waktu';
$handler->display->display_options['fields']['field_kode_zona_waktu']['label'] = 'Zona Waktu';
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
  'master_upbjj' => 'master_upbjj',
);
$handler->display->display_options['filters']['machine_name']['expose']['operator_id'] = 'machine_name_op';
$handler->display->display_options['filters']['machine_name']['expose']['label'] = 'Machine name';
$handler->display->display_options['filters']['machine_name']['expose']['operator'] = 'machine_name_op';
$handler->display->display_options['filters']['machine_name']['expose']['identifier'] = 'machine_name';
/* Filter criterion: Global: Combine fields filter */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['operator'] = 'word';
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Pencarian :';
$handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
$handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['combine']['fields'] = array(
  'name_1' => 'name_1',
  'field_integer_code' => 'field_integer_code',
  'name' => 'name',
  'field_alamat_kantor' => 'field_alamat_kantor',
  'field_alamat_kantor_postal_code' => 'field_alamat_kantor_postal_code',
  'field_email_upbjj' => 'field_email_upbjj',
  'field_nomor_fax_upbjj' => 'field_nomor_fax_upbjj',
  'field_kode_zona_waktu' => 'field_kode_zona_waktu',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'master-upbjj';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'UPBJJ';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
  2 => 'number',
  3 => 'email',
  4 => 'text',
);
