<?php
/**
 * @file
 * permission.delete_any_input_skp_administrasi_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any input_skp_administrasi content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.input_skp_administrasi' => 'content_type.input_skp_administrasi',
);

$optional = array();

$modules = array(
  0 => 'node',
);
