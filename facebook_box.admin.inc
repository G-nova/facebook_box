<?php
function facebook_box_settings_form() {
  $form = array(
    'facebook_box_boxfanpageurl' => array(
      '#type' => 'textfield',
      '#title' => t('Fan page URL'),
      '#default_value' => variable_get('facebook_box_boxfanpageurl', ''),
    ),
    'facebook_box_boxwidth' => array(
      '#type' => 'textfield',
      '#title' => t('Box width'),
      '#default_value' => variable_get('facebook_box_boxwidth', '300'),
    ),
    'facebook_box_boxheight' => array(
      '#type' => 'textfield',
      '#title' => t('Box height'),
      '#default_value' => variable_get('facebook_box_boxheight', ''),
    ),
    'facebook_box_boxshowfaces' => array(
      '#type' => 'checkbox',
      '#title' => t('Show faces'),
      '#default_value' => variable_get('facebook_box_boxshowfaces', ''),
    ),
    'facebook_box_boxstream' => array(
      '#type' => 'checkbox',
      '#title' => t('Show Stream'),
      '#default_value' => variable_get('facebook_box_boxstream', ''),
    ),
    'facebook_box_boxheader' => array(
      '#type' => 'checkbox',
      '#title' => t('Show header'),
      '#default_value' => variable_get('facebook_box_boxheader', ''),
    ),
    'facebook_box_boxbordercolor' => array(
      '#type' => 'textfield',
      '#title' => t('Border color'),
      '#default_value' => variable_get('facebook_box_boxbordercolor', '#ffffff'),
    ),
  );

  return system_settings_form($form);
}