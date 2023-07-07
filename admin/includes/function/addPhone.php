<?php 

if ($_SERVER["REQUEST_METHOD"] == "POST") {

    $mobile_company = $_POST['mobile-company'];
 
    $mobile_name =$_POST['mobile-name'];
    
    $release_date =$_POST['releas-date'];
    
    $operating_system =$_POST['operating-system'];
    
    $mob_network =$_POST['mob-network'];
    
    $mob_cpu =$_POST['mob-cpu'];
    
    $mob_screen =$_POST['mob-screen'];
    
    $mob_ram =$_POST['mob-ram'];
    
    $mob_storage =$_POST['mob-storage'];
    
    $mob_battery =$_POST['mob-battery'];
    
    $mob_material =$_POST['mob-material'];
    
    $mob_size =$_POST['mob-size'];
    
    $mob_camera =$_POST['mob-camera'];
    
    $mob_audio =$_POST['mob-audio'];
 
    $mob_mic =$_POST['mob-mic'];
 
    $amazon_price =$_POST['amazon-price'];
 
    $tradeline_price =$_POST['tradeline-price'];
 
    $betech_price =$_POST['betech-price'];
 
    $jumia_price =$_POST['jumia-price'];
 





    /// working with images
    
    $Image_Paths  = uploadImages($mobile_name);

    $first_Image  = $Image_Paths[0];
    
    $second_Image = $Image_Paths[1];
    
    $third_Image  = $Image_Paths[2];
 
    $forth_Image  = $Image_Paths[3];
    

    $dbHost = "mysql:host=localhost;dbname=mobzone";
    $dbUser = "root";
    $dbPass = "";
    $lang = array(

    PDO::MYSQL_ATTR_INIT_COMMAND => "SET NAMES utf8",

    );

   

        $conn = new PDO($dbHost, $dbUser, $dbPass, $lang);
        $conn-> setAttribute( PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        // echo "<h2>" . 'You Are Connected' . "</h2>";
        $sql = "INSERT INTO mobileinfo(`mob_name`,`mob_company`,`release_date`,`network`,`material`,`size`,`audio`,`mic`,`processor`,`camera`,`screen`,`storage`,`ram`,`operating_system`,`battery`,`amazon_price`,`tradeline_price`,`betech_price`,`jumia_price`,`image1`,`image2`,`image3`,`image4`)
        VALUES ('$mobile_name','$mobile_company','$release_date','$mob_network','$mob_material','$mob_size','$mob_audio','$mob_mic','$mob_cpu','$mob_camera','$mob_screen','$mob_storage','$mob_ram','$operating_system','$mob_battery','$amazon_price','$tradeline_price','$betech_price','$jumia_price','$first_Image','$second_Image','$third_Image','$forth_Image')";
     
        $conn->prepare($sql)->execute();
    

   


        header('Location: /mobzone/admin/index.php');

   
 
 }


 function uploadImages($mobile_name) {
        
    $root = $_SERVER['DOCUMENT_ROOT'];

    $upload_dir = "$root/mobzone/data/upload/mobiles";

    mkdir("$upload_dir/$mobile_name", 0777, true);
        
    $pic_num =1;
    
    $paths = array();

    foreach ($_FILES["Pictures"]["error"] as $key => $error) {
    
        if ($error == UPLOAD_ERR_OK) {
    
            $tmp_name = $_FILES["Pictures"]["tmp_name"][$key];
    
            $name = basename($_FILES["Pictures"]["name"][$key]);
    
            $temp = explode(".", $_FILES["Pictures"]["name"][$key]);

            $newfilename = $pic_num . '.' . end($temp);

            $pic_num++;

            move_uploaded_file($tmp_name, "$upload_dir/$mobile_name/$newfilename");

            array_push($paths,"$upload_dir/$mobile_name/$newfilename");
    
        }
    }

    return $paths;


}