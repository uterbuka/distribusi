<?php
/**
 * @file
 * permission.delete_own_master_gelar_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own master_gelar content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.master_gelar' => 'content_type.master_gelar',
);

$optional = array();

$modules = array(
  0 => 'node',
);
