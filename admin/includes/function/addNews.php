<?php 

if ($_SERVER["REQUEST_METHOD"] == "POST") {

    $news_main_title = $_POST['news_main_title'];
 
    $news_author_name = $_POST['news_author_name'];
    
    $news_date = $_POST['news_date'];
    
    $news_first_para = $_POST['news_first_para'];
    
    $news_sub_title = $_POST['news_sub_title'];
    
    $news_sec_para = $_POST['news_sec_para'];
    
    $news_third_para = $_POST['news_third_para'];


 

    /// working with images
    $Image_Paths  =  uploadImages($news_main_title);

    $first_Image  =  $Image_Paths[0];
    $second_Image =  $Image_Paths[1];
    $third_Image  =  $Image_Paths[2];
 

    $dbHost = "mysql:host=localhost;dbname=mobzone";
    $dbUser = "root";
    $dbPass = "";
    $lang = array( PDO::MYSQL_ATTR_INIT_COMMAND => "SET NAMES utf8",);



    $conn = new PDO($dbHost, $dbUser, $dbPass, $lang);
    $conn-> setAttribute( PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    
    $sql = "INSERT INTO `news`(`news_title`, `writer_name`, `release_date`, `first_paragraph`, `sub_title`, `second_paragraph`, `third_paragraph`, `image1`, `image2`, `image3`)
            VALUES ('$news_main_title','$news_author_name','$news_date','$news_first_para','$news_sub_title','$news_sec_para','$news_third_para','$first_Image','$second_Image','$third_Image')";
    
    $conn->prepare($sql)->execute();
   

   header('Location: /mobzone/admin/index.php');

 }
 
    
 function uploadImages($news_main_title) {
        
    $root = $_SERVER['DOCUMENT_ROOT'];

    $upload_dir = "$root/mobzone/data/upload/news";

    mkdir("$upload_dir/$news_main_title", 0777, true);
        
    $pic_num =1;
    
    $paths = array();

    foreach ($_FILES["Pictures"]["error"] as $key => $error) {
    
        if ($error == UPLOAD_ERR_OK) {
    
            $tmp_name = $_FILES["Pictures"]["tmp_name"][$key];
    
            $name = basename($_FILES["Pictures"]["name"][$key]);
    
            $temp = explode(".", $_FILES["Pictures"]["name"][$key]);

            $newfilename = $pic_num . '.' . end($temp);

            $pic_num++;

            move_uploaded_file($tmp_name, "$upload_dir/$news_main_title/$newfilename");

            array_push($paths,"$upload_dir/$news_main_title/$newfilename");
    
        }
    }

    return $paths;


}