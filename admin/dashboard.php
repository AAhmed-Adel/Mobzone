<?php

    session_start();

    // Check If There Logged in Session
    if(isset($_SESSION['loggedin'])) {

            // Title Must Be Before The int.php < $pageTitle = ''; >
            $pageTitle = 'لوحة التحكم';  
            // If There A Session The Next File Will Be Include
            include   ('int.php');


            // Start
            // Page Content ================================================
    




            $do = isset($_GET['do']) ? $_GET['do'] : 'Not';

            if ($do == 'home') {

                // Add Phone Page 
                include   ( $admin_tpl . 'home.inc');
                include $admin_tpl . 'add.inc';


            } elseif ($do == 'add') {

                // Add News Page            
                include $admin_tpl . 'add.inc';

            } elseif ($do == 'edit') {

                // Add News Page 
                include $admin_tpl . 'edit.inc';

            } elseif ($do == 'Not') {

                // Add News Page 
                $do = 'home';

            } else {

                $do = 'home';
                
            }





            // Page Content ================================================
            // End


            include $admin_tpl . 'footer.inc';


    } else {

        header('Location: index.php'); // No Session => Redirect To login Page

        exit();
    }   