<?php
/**
 * @file
 * fate_mailchimp_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fate_mailchimp_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access mailchimp activity'.
  $permissions['access mailchimp activity'] = array(
    'name' => 'access mailchimp activity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_activity',
  );

  // Exported permission: 'access mailchimp signup pages'.
  $permissions['access mailchimp signup pages'] = array(
    'name' => 'access mailchimp signup pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_signup',
  );

  // Exported permission: 'administer mailchimp'.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: 'administer mailchimp activity'.
  $permissions['administer mailchimp activity'] = array(
    'name' => 'administer mailchimp activity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_activity',
  );

  // Exported permission: 'administer mailchimp campaigns'.
  $permissions['administer mailchimp campaigns'] = array(
    'name' => 'administer mailchimp campaigns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_campaign',
  );

  // Exported permission: 'administer mailchimp signup entities'.
  $permissions['administer mailchimp signup entities'] = array(
    'name' => 'administer mailchimp signup entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_signup',
  );

  // Exported permission: 'use text format mailchimp_campaign'.
  $permissions['use text format mailchimp_campaign'] = array(
    'name' => 'use text format mailchimp_campaign',
    'roles' => array(),
    'module' => 'filter',
  );

  return $permissions;
}
