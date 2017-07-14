<?php 
header('Content-type: text/css');
ob_start("compress");
function compress($buffer) {
  $buffer = preg_replace('!/\*[^*]*\*+([^/*][^*]*\*+)*/!', '', $buffer);
  $buffer = str_replace(array("\r\n", "\r", "\n", "\t", '  '), '', $buffer);
  $buffer = str_replace(array(', ', ' {'), array(',', '{'), $buffer);
  return $buffer;
}
?>

/* ---------- Color Module Styles ----------- */

html {
	background-color: #d8debc;
}

body,
body.overlay {
  color: #000000;
}
.comment .comment-arrow {
  border-color: #ffffff;
}
#page,
#main-wrapper,
#main-menu-links li a.active,
#main-menu-links li.active-trail a {
  background: #ffffff;
}
.tabs ul.primary li a.active {
  background-color: #ffffff;
}
.tabs ul.primary li.active a {
  background-color: #ffffff;
  border-bottom: 1px solid #ffffff;
}
#header {
  background-color: #689a04;
}
#header a {
	color: #e03333;
}

#header .pane-page-site-name a {
	color: #fffffe;
}
#pane-page-slogan {
	color: #131313;
}

a {
  color: #0f753b;
}
a:hover,
a:focus {
  color: #4285f4;
}
a:active {
  color: #23aeff;
}
.sidebar .block {
  background-color: #f6f6f2;
  border-color: #f9f9f9;
}
#footer {
  background: #0f753a;
}
.region-header,
.region-header a,
.region-header li a.active,
#name-and-slogan,
#name-and-slogan a,
#secondary-menu-links li a {
  color: #fffeff;
}

<?php ob_end_flush(); ?>
