
<?php

    ob_start();
   session_start();

//    if(isset($_SESSION['loggedin'])) {

//     $removeLoginBox = '';
    
//     }

    
    // Check If User Coming Form HTTP Post Request
    if ($_SERVER['REQUEST_METHOD'] == 'POST') {

        $username = $_POST['login_username'];
        $passowrd = $_POST['login_password'];
        $hashpass = sha1($passowrd);

        $dbHost = "mysql:host=localhost;dbname=mobzone";
        $dbUser = "root";
        $dbPass = "";
        $lang = array(PDO::MYSQL_ATTR_INIT_COMMAND => "SET NAMES utf8",);
        
        $conn = new PDO($dbHost, $dbUser, $dbPass, $lang);
        $conn-> setAttribute( PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

        // Check If User Exist In Database

        $loginStmt = $conn->prepare("SELECT   Email, Password FROM Users WHERE Username = ? AND Password = ? AND GroupID = 0");
        $loginStmt->execute(array($username, $hashpass));
        $count = $loginStmt->rowCount();
        
        // echo $count;    

        

        // if Count > 0 This Mean Database Containe Record About This Username
        if ($count > 0) {

            $_SESSION['userlogin'] = $username; // Register Session Name
            // echo '<h1>'. $_SESSION['userlogin'] .'</h1>';     // Redirect To Dashboard Page
            header('Location: /mobzone/index.php');
            

 


        }


    }
   ob_end_flush(); 
?>