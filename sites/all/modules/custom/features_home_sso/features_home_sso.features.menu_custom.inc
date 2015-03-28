<?php
/**
 * @file
 * features_home_sso.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function features_home_sso_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-sso-menu.
  $menus['menu-sso-menu'] = array(
    'menu_name' => 'menu-sso-menu',
    'title' => 'SSO Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('SSO Menu');


  return $menus;
}
