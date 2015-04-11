<?php
/**
 * @file
 * permission.delete_any_master_gelar_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any master_gelar content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.master_gelar' => 'content_type.master_gelar',
);

$optional = array();

$modules = array(
  0 => 'node',
);
