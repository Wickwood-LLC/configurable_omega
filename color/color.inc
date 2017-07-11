<?php

$info = array();
 
// Define the possible replaceable items and their labels.
$info['fields'] = array(
 'bg' => t('Main background'),
 'first_color' => t('First Color'),
 'second_color' => t('Second Color'),
 'highlight' => t('Higlight'),
 'text' => t('Text color'),
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
      'first_color' => '#0f753b',
      'second_color' => '#689a04',
      'highlight' => '#6fae1b',
      'text' => '#333333',
    ),
  ),
  // Let's create a scheme called Drupal Love.
  'drupal_love' => array(
    // Scheme title.
    'title' => t('Drupal Love'),
    // Scheme colors (Keys are coming from $info['fields']).
    'colors' => array(
      'bg' => '#008cff',
      'first_color' => '#2677ff',
      'second_color' => '#e800c1',
      'highlight' => '#ffffff',
      'text' => '#ff26de',
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
$info['preview_js'] = 'color/preview.js';
$info['preview_html'] = 'color/preview.html';
 
// Gradients
$info['gradients'] = array();
 
// Color areas to fill (x, y, width, height).
$info['fill'] = array();
 
// Coordinates of all the theme slices (x, y, width, height)
// with their filename as used in the stylesheet.
$info['slices'] = array();
 
// Base file for image generation.
$info['base_image'] = 'color/base.png';

// Reference color used for blending. Matches the base.png's colors.
$info['blend_target'] = '#ffffff';
