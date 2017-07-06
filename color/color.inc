<?php

$info = array();
 
// Define the possible replaceable items and their labels.
$info['fields'] = array(
 'bg' => t('Main background'),
 'header' => t('Header'),
 'link' => t('Link color'),
 'text' => t('Text color'),
 'titles' => t('Titles'),
 'footer' => t('Footer'),
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
      'header' => '#2677ff',
      'link' => '#ff7f00',
      'text' => '#777777',
      'titles' => '#333333',
      'footer' => '#2677ff',
    ),
  ),
  // Let's create a scheme called Drupal Love.
  'drupal_love' => array(
    // Scheme title.
    'title' => t('Drupal Love'),
    // Scheme colors (Keys are coming from $info['fields']).
    'colors' => array(
      'bg' => '#008CFF',
      'header' => '#2677ff',
      'link' => '#e800c1',
      'text' => '#ffffff',
      'titles' => '#ff26de',
      'footer' => '#2677ff',
    ),
  ),
);

// Define the CSS file(s) that we want the Color module to use as a base. 
$info['css'] = array( 'css/colors.css', );

 
/**
 * Default settings for the advanced stuff.
 * No need to edit these if you just want to play around with the colors.
 * Color wants these, otherwise it's not going to play.
 *
 */
 
// Files we want to copy along with the CSS files, let's define these later.
$info['copy'] = array();
 
// Files used in the scheme preview.
$info['preview_css'] = 'color/preview.css';
// $info['preview_js'] = 'color/preview.js';
// $info['preview_html'] = 'color/preview.html';
 
// Gradients
$info['gradients'] = array();
 
// Color areas to fill (x, y, width, height).
$info['fill'] = array();
 
// Coordinates of all the theme slices (x, y, width, height)
// with their filename as used in the stylesheet.
$info['slices'] = array();
 
// Base file for image generation.
$info['base_image'] = 'color/base.png';
