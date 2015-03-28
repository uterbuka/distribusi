<?php
/**
 * @file
 * features_home_sso.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_home_sso_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-sso-menu_distribusi:http://distribusi.local.ut.ac.id
  $menu_links['menu-sso-menu_distribusi:http://distribusi.local.ut.ac.id'] = array(
    'menu_name' => 'menu-sso-menu',
    'link_path' => 'http://distribusi.local.ut.ac.id',
    'router_path' => '',
    'link_title' => 'Distribusi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-sso-menu_distribusi:http://distribusi.local.ut.ac.id',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-sso-menu_simpeg:http://simpeg.local.ut.ac.id
  $menu_links['menu-sso-menu_simpeg:http://simpeg.local.ut.ac.id'] = array(
    'menu_name' => 'menu-sso-menu',
    'link_path' => 'http://simpeg.local.ut.ac.id',
    'router_path' => '',
    'link_title' => 'Simpeg',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-sso-menu_simpeg:http://simpeg.local.ut.ac.id',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-sso-menu_srs:http://srs.local.ut.ac.id
  $menu_links['menu-sso-menu_srs:http://srs.local.ut.ac.id'] = array(
    'menu_name' => 'menu-sso-menu',
    'link_path' => 'http://srs.local.ut.ac.id',
    'router_path' => '',
    'link_title' => 'SRS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-sso-menu_srs:http://srs.local.ut.ac.id',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Distribusi');
  t('SRS');
  t('Simpeg');


  return $menu_links;
}
