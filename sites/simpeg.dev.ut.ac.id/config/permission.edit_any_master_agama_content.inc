<?php
/**
 * @file
 * permission.edit_any_master_agama_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any master_agama content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.master_agama' => 'content_type.master_agama',
);

$optional = array();

$modules = array(
  0 => 'node',
);
