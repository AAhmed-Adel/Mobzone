<?php

$dbHost = "mysql:host=localhost;dbname=mobzone";
$dbUser = "root";
$dbPass = "";
$lang = array(

    PDO::MYSQL_ATTR_INIT_COMMAND => "SET NAMES utf8",

);

    try  {

        $conn = new PDO($dbHost, $dbUser, $dbPass, $lang);
        $conn-> setAttribute( PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        // echo "<h2>" . 'You Are Connected' . "</h2>";


   }
   catch(PDOEception $e) {
    
    echo 'Failed To Connect' . $e->getLine();

   }
   