
<!-- Start The News Artical -->
<div class="artical">
    <?php 

        ob_start();
        
        





            // Get Article Data ============================================
            $articleData = getInfo('*', 'news');
            foreach ($articleData as $selectField) {



         

     


                $do = isset($_GET['do']) ? $_GET['do'] : 'Not';

                if ($do == $selectField["news_title"]) {
            

             
                    // Get All Img Path And Name
                    for ($i = 0; $i < 3; $i++) {

                        $getImg[0] =   $selectField["image1"];
                        $getImg[1] =   $selectField["image2"];
                        $getImg[2] =   $selectField["image3"];
                        
                        // Select Img Name
                        $selectImgeName[$i] =  explode('/', $getImg[$i] );

                        // Get Img Name
                        $getImgName[$i] = end($selectImgeName[$i]);
                        // Get Img Path
                        $imgPath[$i] = 'data\upload\news\\'. $selectField["news_title"] .'\\'. $getImgName[$i];
                    }


                    echo 
                    '
                    <div class="artical-heading">
        
                        <img class="artical-mainimge" src="' . $imgPath[0] . '" alt="">
                        <h2 class="artical-maintitle">' . $selectField["news_title"] . '</h2>
                        <span class="artical-author">' . $selectField["writer_name"] . '</span>
                        <span class="artical-date">' . $selectField["release_date"] . '</span>
        
                    </div>
        
                    <article class="artical-body">
        
                        <p class="artical-para"> ' . $selectField["first_paragraph"] . ' </p>
                        <img class="artical-subimg" src="' . $imgPath[1] . '" alt="" >
                        <h3 class="artical-subtitle">' . $selectField["sub_title"] . '</h3>
                        <p class="artical-para">  ' . $selectField["second_paragraph"] . '</p>
                        <img class="artical-subimg" src="' . $imgPath[2] . '" alt="" width="300px">
                        <p class="artical-para">' . $selectField["third_paragraph"] . '</p>
                        
                    </article>';


                } 
                
                elseif ($do !== $selectField["news_title"]) {
                    
                    // echo '<script type="text/javascript">
                    // window.location = "_notFound.php"
                    // </script>';
            
                } else {
            
                    // Not Found Erorr
                    echo '<h1>Not Found Erorr</h1>';
                }

    



                

            }





        ob_end_flush();
        
    ?>

</div>
<!-- End The News Artical -->


        