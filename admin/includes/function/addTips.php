<?php 

if ($_SERVER["REQUEST_METHOD"] == "POST") {

    $tips_main_title = $_POST['tips_main_title'];
 
    $tips_author_name =$_POST['tips_author_name'];
    
    $tips_date =$_POST['tips_date'];
    
    $tips_first_para =$_POST['tips_first_para'];
    
    $tips_sub_title =$_POST['tips_sub_title'];
    
    $tips_sec_para =$_POST['tips_sec_para'];
    
    $tips_third_para =$_POST['tips_third_para'];
 
    /// working with images
    
    ///////////////////////////////////////////////////
//     $Image_Paths = uploadImages($tips_title);
//  ///////////////////////////////////////////////////
//     $first_Image = $Image_Paths[0];
    
//     $second_Image = $Image_Paths[1];
    
//     $third_Image = $Image_Paths[2];
 
//     $forth_Image = $Image_Paths[3];
 

    $dbHost = "mysql:host=localhost;dbname=mobzone";
    $dbUser = "root";
    $dbPass = "";
    $lang = array( PDO::MYSQL_ATTR_INIT_COMMAND => "SET NAMES utf8",);



    $conn = new PDO($dbHost, $dbUser, $dbPass, $lang);
    $conn-> setAttribute( PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    // echo "<h2>" . 'You Are Connected' . "</h2>";

    
    $sql = "INSERT INTO tips(`tips_title`,`writer_name`,`release_date`,`first_paragraph`,`sub_title`,`second_paragraph`,`third_paragraph`)
            VALUES ('$tips_main_title','$tips_author_name','$tips_date','$tips_first_para','$tips_sub_title','$tips_sec_para','$tips_third_para')";
    
    $conn->prepare($sql)->execute();
   

   header('Location: /mobzone/admin/index.php');

 }
 
     
   
 function uploadImages($tips_main_title) {
        
    $root = $_SERVER['DOCUMENT_ROOT'];

    $upload_dir = "$root/mobzone/data/upload/tips";

    mkdir("$upload_dir/$tips_main_title", 0777, true);
        
    $pic_num =1;
    
    $paths = array();

    foreach ($_FILES["Pictures"]["error"] as $key => $error) {
    
        if ($error == UPLOAD_ERR_OK) {
    
            $tmp_name = $_FILES["Pictures"]["tmp_name"][$key];
    
            $name = basename($_FILES["Pictures"]["name"][$key]);
    
            $temp = explode(".", $_FILES["Pictures"]["name"][$key]);

            $newfilename = $pic_num . '.' . end($temp);

            $pic_num++;

            move_uploaded_file($tmp_name, "$upload_dir/$tips_main_title/$newfilename");

            array_push($paths,"$upload_dir/$tips_main_title/$newfilename");
    
        }
    }

    return $paths;


}