<?php

$info = array();
 
// Define the possible replaceable items and their labels.
$info['fields'] = array(
  'bg' => t('Main background'),
  'link' => t('Link color'),
  'text' => t('Text color'),
  'titles' => t('Titles'),
  'menu_item_color' => t('Menu item link color'),
  'menu_item_a_bg' => t('Menu active item background color'),
  'menu_item_a_color' => t('Menu active item link color'),
  'header_top' => t('Header gradient top color'),
  'header_bottom' => t('Header gradient bottom color'),
);
 
// Color schemes for the site.
$info['schemes'] = array(
  // Define the default scheme.
  'default' => array(
    // Scheme title.
    'title' => t('Our site default colors'),
    // Scheme colors (Keys are coming from $info['fields']).
    'colors' => array(
      'bg' => '#ffffff',
      'link' => '#ff7f00',
      'text' => '#777777',
      'titles' => '#333333',
      'menu_item_color' => '#666666',
      'menu_item_a_bg' => '#eeeeee',
      'menu_item_a_color' => '#000000',
      'header_top' => '#f1f1f1',
      'header_bottom' => '#f2f2f2',
    ),
  ),
);
 
// Define the CSS file(s) that we want the Color module to use as a base.
$info['css'] = array(
  'css/colors.css',
);

/** Copying **/
 
// Files we want to copy along with the CSS files.
$info['copy'] = array(
  'images/druplicon.png'
);

// HTML file to be used in the preview window.
$info['preview_html'] = 'color/preview.html';

// CSS file to be used in the preview window.
$info['preview_css'] = 'color/preview.css';

// Javascript file to use in the preview window.
// This is the one that handles the color changes on the preview form when you're
// clicking on the color picker.
$info['preview_js'] = 'color/preview.js';

// Base file for image generation.
$info['base_image'] = 'color/base.png';
