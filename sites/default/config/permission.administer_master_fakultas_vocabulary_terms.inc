<?php
/**
 * @file
 * permission.administer_master_fakultas_vocabulary_terms.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer master_fakultas vocabulary terms',
  'roles' => array(
    0 => 'authenticated user',
    1 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'vppr',
);
