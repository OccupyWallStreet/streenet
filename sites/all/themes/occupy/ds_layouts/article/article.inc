<?php

/**
 * @file
 * Display Suite occupation configuration.
 */

function ds_article() {
  return array(
    'label' => t('Article'),
    'regions' => array(
      'article' => t('Article'),
      // 'content' => t('content'),
      'sidebar' => t('Sidebar'),
    ),
    // Uncomment if you want to include a CSS file for this layout (occupation.css)
    'css' => TRUE,
    // Uncomment if this is a template for a node form.
    // 'form' => TRUE,
   'image' => TRUE,
  );
}
