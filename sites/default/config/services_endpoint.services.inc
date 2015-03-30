<?php
/**
 * @file
 * services_endpoint.services.inc
 */

$api = '2.0.0';

$data = $endpoint = new stdClass();
$endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
$endpoint->api_version = 3;
$endpoint->name = 'services';
$endpoint->server = 'rest_server';
$endpoint->path = 'api';
$endpoint->authentication = array(
  'services' => 'services',
);
$endpoint->server_settings = array(
  'formatters' => array(
    'bencode' => TRUE,
    'json' => TRUE,
    'php' => TRUE,
    'xml' => TRUE,
    'jsonp' => FALSE,
  ),
  'parsers' => array(
    'application/x-www-form-urlencoded' => TRUE,
    'application/json' => FALSE,
    'application/vnd.php.serialized' => FALSE,
    'application/xml' => FALSE,
    'multipart/form-data' => FALSE,
    'text/xml' => FALSE,
  ),
);
$endpoint->resources = array(
  'services-data-master-agama' => array(
    'alias' => 'stamamcamt',
    'operations' => array(
      'index' => array(
        'enabled' => '1',
      ),
    ),
  ),
  'user' => array(
    'actions' => array(
      'login' => array(
        'enabled' => '1',
      ),
      'logout' => array(
        'enabled' => '1',
      ),
      'token' => array(
        'enabled' => '1',
      ),
    ),
  ),
  'views' => array(
    'operations' => array(
      'retrieve' => array(
        'enabled' => '1',
      ),
    ),
  ),
);
$endpoint->debug = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'services',
);
