<?php

/**
 * @file
 * Display Suite occupation configuration.
 */

function ds_teaser() {
  return array(
    'label' => t('Teaser'),
    'regions' => array(
      'contents' => t('Contents'),
    ),
    // Uncomment if you want to include a CSS file for this layout (occupation.css)
    'css' => TRUE,
    // Uncomment if this is a template for a node form.
    // 'form' => TRUE,
   'image' => FALSE,
  );
}
