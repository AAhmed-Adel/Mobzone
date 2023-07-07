<?php 
    include 'connect.php';
    include   ('includes/function/function.php');



    
    // session_start();
    // if(isset($_SESSION['userlogin'])) {

    //     $userName   =   $_SESSION['userlogin']; 

    // }

  

function addToFav() { 


    global $userName;
    global $mobName;
    global $conn;


    $do = isset($_GET['do']) ? $_GET['do'] : 'Not';

    // $sql = "INSERT INTO `favorite`(`Username`, `mob_name`)
    // VALUES ('$userName','$mobName')";

    // $conn->prepare($sql)->execute();
  
//get the url


    // echo $_SERVER['HTTP_REFERER'];

    echo $_SERVER['HTTP_REFERER'];

    $str = 'mobileReview.php?do=12313sd';
    $qs = parse_url($str, PHP_URL_QUERY);
    if(!empty($qs)){
        parse_str($qs, $output);
        // TODO check for key existence
        echo $output['do'];  // example
        // echo $output['order']; // example2
    }
    
}
addToFav();
?>

