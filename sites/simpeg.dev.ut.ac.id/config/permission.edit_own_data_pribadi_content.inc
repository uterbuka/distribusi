<?php
/**
 * @file
 * permission.edit_own_data_pribadi_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own data_pribadi content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.data_pribadi' => 'content_type.data_pribadi',
);

$optional = array();

$modules = array(
  0 => 'node',
);
