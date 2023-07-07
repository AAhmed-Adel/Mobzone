<?php 

if ($_SERVER["REQUEST_METHOD"] == "POST") {

    $subscribeEmail     =   $_POST['subscribe_email'];
    
    $subscribeName      =   $_POST['subscribe_name'];
    $subscribeUsername  =   $_POST['subscribe-username'];

    $subscribePassword  =   $_POST['subscribe-password'];

    $incPassword = sha1($subscribePassword);

 


    $dbHost = "mysql:host=localhost;dbname=mobzone";
    $dbUser = "root";
    $dbPass = "";
    $lang = array( PDO::MYSQL_ATTR_INIT_COMMAND => "SET NAMES utf8",);



    $conn = new PDO($dbHost, $dbUser, $dbPass, $lang);
    $conn-> setAttribute( PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    
    $sql = "INSERT INTO `users`(`Email`, `Name`, `Username`, `Password`)
            VALUES ('$subscribeEmail','$subscribeName','$subscribeUsername','$incPassword')";
    
    $conn->prepare($sql)->execute();
   

   header('Location: /mobzone/subandlogin.php?do=login');

    echo $subscribeEmail . '<br>' . $subscribeName;
 }