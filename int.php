<?php include 'connect.php';

$sessionUser = '';
if (isset($_SESSION['userlogin'])) {

    $sessionUser = $_SESSION['userlogin'];

}

// includes files
$template   = 'includes/Template/';
$lang       = 'icludes/lang/';
$function   = 'includes/function/';
$libraries  = 'includes/libraries/';


// layout files
$css      = 'layout/css/';
$js       = 'layout/js/';
$img      = 'layout/img/';


include   ( $function . 'function.php');
include   ( $template . 'header.inc'); 
