<?php include 'includes/function/connect.php';


// includes files
$admin_tpl        = 'includes/Template/';
$admin_lang       = 'icludes/lang/';
$admin_function   = 'includes/function/';
$admin_libraries  = 'includes/libraries/';


// layout files
$admin_css      = 'layout/css/';
$admin_js       = 'layout/js/';
$admin_img      = 'layout/img/';



// Imbortant File
include   ( $admin_function . 'function.php' );
include   ( $admin_tpl . 'header.inc'); 





// Remove Navbar From Any Page Have $noNav
if (!isset($noNav)) { include   ( $admin_tpl . 'navbar.inc'); }  

// Remove Header From Any Page Have $Header
// if (!isset($noHeader)) { include   ( $admin_tpl . 'info_header.inc'); } 


  




