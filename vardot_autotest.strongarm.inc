<?php
/**
 * @file
 * vardot_autotest.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vardot_autotest_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'behat_ui_behat_bin_path';
  $strongarm->value = 'bin/behat';
  $export['behat_ui_behat_bin_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'behat_ui_behat_config_path';
  $strongarm->value = '/var/www/html/testing/behat';
  $export['behat_ui_behat_config_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'behat_ui_http_auth_headless_only';
  $strongarm->value = 0;
  $export['behat_ui_http_auth_headless_only'] = $strongarm;

  return $export;
}
