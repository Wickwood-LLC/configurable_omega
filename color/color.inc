<?php

// Put the logo path into JavaScript for the live preview.
drupal_add_js(array('color' => array('logo' => theme_get_setting('logo', 'bartik'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'bg' => t('Main background'),
    'header' => t('Header background'),
    'sitetitle' => t('Site title'),
    'slogan' => t('Slogan'),
    'content' => t('Content background'),
    'footer' => t('Footer background'),
    'highlight' => t('Highlight'),
    'accent' => t('Accent'),
    'linkhover' => t('Link hover'),
    'text' => t('Text color'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Default'),
      'colors' => array(
        'bg' => '#d8debc',
        'header' => '#fffffe',
        'sitetitle' => '#0f753c',
        'slogan' => '#131313',
        'content' => '#ffffff',
        'footer' => '#0f753a',
        'highlight' => '#0f753b',
        'accent' => '#e03333',
        'linkhover' => '#4285f4',
        'text' => '#000000',
      ),
    ),
    // 'firehouse' => array(
    //   'title' => t('Firehouse'),
    //   'colors' => array(
    //     'bg' => '#ffffff',
    //     'firstColor' => '#cd2d2d',
    //     'secondColor' => '#1f1d1c',
    //     'highlight' => '#d6121f',
    //     'text' => '#3b3b3b',
    //   ),
    // ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.php',
  ),

  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
