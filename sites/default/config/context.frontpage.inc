<?php
/**
 * @file
 * context.frontpage.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'frontpage';
$context->description = '';
$context->tag = '';
$context->conditions = array(
  'path' => array(
    'values' => array(
      '<front>' => '<front>',
    ),
  ),
  'user' => array(
    'values' => array(
      'authenticated user' => 'authenticated user',
    ),
  ),
);
$context->reactions = array(
  'region' => array(
    'bootstrap' => array(
      'disable' => array(
        'sidebar_first' => 'sidebar_first',
        'sidebar_second' => 'sidebar_second',
        'navigation' => 0,
        'header' => 0,
        'highlighted' => 0,
        'help' => 0,
        'content' => 0,
        'footer' => 0,
        'page_top' => 0,
        'page_bottom' => 0,
        'dashboard_main' => 0,
        'dashboard_sidebar' => 0,
        'dashboard_inactive' => 0,
      ),
    ),
    'seven' => array(
      'disable' => array(
        'content' => 0,
        'help' => 0,
        'page_top' => 0,
        'page_bottom' => 0,
        'sidebar_first' => 0,
        'dashboard_main' => 0,
        'dashboard_sidebar' => 0,
        'dashboard_inactive' => 0,
      ),
    ),
    'utbootstrap' => array(
      'disable' => array(
        'sidebar_first' => 'sidebar_first',
        'sidebar_second' => 'sidebar_second',
        'navigation' => 0,
        'header' => 0,
        'highlighted' => 0,
        'help' => 0,
        'content' => 0,
        'footer' => 0,
        'page_top' => 0,
        'page_bottom' => 0,
        'dashboard_main' => 0,
        'dashboard_sidebar' => 0,
        'dashboard_inactive' => 0,
      ),
    ),
  ),
);
$context->condition_mode = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
