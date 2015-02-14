<?php
/**
 * @file
 * permission.access_overlay.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'access overlay',
  'roles' => array(
    0 => 'anonymous user',
    1 => 'authenticated user',
    2 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'overlay',
);
