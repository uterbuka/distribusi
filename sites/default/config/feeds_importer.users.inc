<?php
/**
 * @file
 * feeds_importer.users.inc
 */

$api = '2.0.0';

$data = $feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'users';
$feeds_importer->config = array(
  'name' => 'Users',
  'description' => 'To bulk import users into the system. ',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'txt csv tsv xml opml',
      'direct' => FALSE,
      'directory' => 'public://feeds',
      'allowed_schemes' => array(
        0 => 'public',
      ),
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsCSVParser',
    'config' => array(
      'delimiter' => ',',
      'no_headers' => 0,
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsUserProcessor',
    'config' => array(
      'roles' => array(
        3 => 0,
      ),
      'status' => '1',
      'defuse_mail' => 0,
      'mappings' => array(
        0 => array(
          'source' => 'Username',
          'target' => 'name',
          'unique' => 1,
        ),
        1 => array(
          'source' => 'Email',
          'target' => 'mail',
          'unique' => 1,
        ),
        2 => array(
          'source' => 'Password',
          'target' => 'pass',
          'unique' => FALSE,
        ),
      ),
      'update_existing' => '2',
      'input_format' => 'plain_text',
      'skip_hash_check' => 0,
      'bundle' => 'user',
    ),
  ),
  'content_type' => '',
  'update' => 0,
  'import_period' => 1800,
  'expire_period' => 3600,
  'import_on_create' => TRUE,
  'process_in_background' => FALSE,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'feeds',
);
