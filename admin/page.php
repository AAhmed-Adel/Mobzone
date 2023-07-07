
 <?php 
 


    // $dbHost = "mysql:host=localhost;dbname=mobzone";
    // $dbUser = "root";
    // $dbPass = "";
    // $lang = array(PDO::MYSQL_ATTR_INIT_COMMAND => "SET NAMES utf8",);


    // $conn = new PDO($dbHost, $dbUser, $dbPass, $lang);
    // $conn-> setAttribute( PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    // // echo "<h2>" . 'You Are Connected' . "</h2>";


  
   

    if($_SERVER['REQUEST_METHOD'] == 'POST'):

        $add_img = $_FILES['add_img'];
        

        // Upload Variabels
        $imgName = $_FILES['add_img']['name'];
        $imgSize = $_FILES['add_img']['size'];
        $imgTmp  = $_FILES['add_img']['tmp_name'];
        $imgType = $_FILES['add_img']['type'];

        move_uploaded_file($imgTmp, 'data\upload\test' . $imgName);

        // List Of Allowed Files
        // $imgAllowedExtension = array('jpeg', 'jpg', 'png');

        /*
            [1] => Get The File Name
            [2] => Get The File Extension
            [3] => LowerCase The File Extension
         */
        // $tmp = explode('.', $imgName);                  // [1]
        // $imgExtension = end($tmp);                      // [2]
        // $finalImgExt  =  strtolower($imgExtension);     // [3]
        
        // // $upload_dir = "mobzone/data/upload/mobiles";

        // // define ('SITE_ROOT', realpath(dirname($upload_dir)));

        // // move_uploaded_file($_FILES['file']['tmp_name'], SITE_ROOT.'/static/images/slides/1/1.jpg');

        // $add2_img = rand(0, 100000) . '_' . $imgName;
        // $file_destination = 'data/upload/' . $add2_img;
        // move_uploaded_file($imgTmp, $file_destination);

     

        // if (! empty($imgName) && ! in_array($finalImgExt, $imgAllowedExtension)) {

        //     // $formErorrs[] = 'This Extension Is Not <strong>Allowed</strong>';
        //     echo 'This Extension Is Not <strong>Allowed</strong>';
        
        // } elseif (empty($imgName)) {

        //     // $formErorrs[] = 'Img Is <strong>Required</strong>';
        //     echo 'Img Is <strong>Required</strong>';

        // } elseif ($imgSize > 5242880) {

        //     // $formErorrs[] = 'Img Cant Be Larger Than <strong>5MB</strong>';
        //     echo 'Img Cant Be Larger Than <strong>5MB</strong>';

        //  } else  {

        //     // $add2_img = rand(0, 100000) . '_' . $imgName;

        // }

        
    endif;


 ?>



<form action="<?php echo $_SERVER['PHP_SELF'] ?>" method="POST" enctype="multipart/form-data" >
    <br>
    <!-- <input type="file" name="add_img"> -->
    <br>
    <input type="file" name="add_img">


<input type="submit">
</form>