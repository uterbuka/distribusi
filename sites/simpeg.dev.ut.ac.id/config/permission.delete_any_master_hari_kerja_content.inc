<?php
/**
 * @file
 * permission.delete_any_master_hari_kerja_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any master_hari_kerja content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.master_hari_kerja' => 'content_type.master_hari_kerja',
);

$optional = array();

$modules = array(
  0 => 'node',
);
