<?php
/**
 * @file
 * permission.create_master_eselon_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create master_eselon content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.master_eselon' => 'content_type.master_eselon',
);

$optional = array();

$modules = array(
  0 => 'node',
);
