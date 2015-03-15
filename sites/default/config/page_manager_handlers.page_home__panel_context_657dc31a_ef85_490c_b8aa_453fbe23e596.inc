<?php
/**
 * @file
 * page_manager_handlers.page_home__panel_context_657dc31a_ef85_490c_b8aa_453fbe23e596.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_home__panel_context_657dc31a-ef85-490c-b8aa-453fbe23e596';
$handler->task = 'page';
$handler->subtask = 'home';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'access' => array(
    'logic' => 'and',
  ),
);
$display = new panels_display();
$display->layout = 'flexible';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'center' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Halaman Utama';
$display->uuid = '2952365a-2a83-4d3a-8132-e5001b90c87b';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0a70b6f3-e902-4c88-867d-81cdafc1265c';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-sso-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0a70b6f3-e902-4c88-867d-81cdafc1265c';
  $display->content['new-0a70b6f3-e902-4c88-867d-81cdafc1265c'] = $pane;
  $display->panels['center'][0] = 'new-0a70b6f3-e902-4c88-867d-81cdafc1265c';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-0a70b6f3-e902-4c88-867d-81cdafc1265c';
$handler->conf['display'] = $display;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
