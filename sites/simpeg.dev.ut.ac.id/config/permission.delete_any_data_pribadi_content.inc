<?php
/**
 * @file
 * permission.delete_any_data_pribadi_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any data_pribadi content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.data_pribadi' => 'content_type.data_pribadi',
);

$optional = array();

$modules = array(
  0 => 'node',
);
