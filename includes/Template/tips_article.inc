
<!-- Start The News Artical -->
<div class="artical">
    <?php 

        ob_start();
        
        




            // Get Article Data ============================================
            $articleData = getInfo('*', 'tips');
            foreach ($articleData as $selectField) {




                $do = isset($_GET['do']) ? $_GET['do'] : 'Not';

                if ($do == $selectField["tips_title"]) {
            

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
                    $imgPath[$i] = 'data\upload\tips\\'. $selectField["tips_title"] .'\\'. $getImgName[$i];

                }
                    
                    echo 
                    '
                    <div class="artical-heading">
        
                        <img class="artical-mainimge" src="'.  $imgPath[0] . '" alt="">
                        <h2 class="artical-maintitle">' . $selectField["tips_title"] . '</h2>
                        <span class="artical-author">' . $selectField["writer_name"] . '</span>
                        <span class="artical-date">' . $selectField["release_date"] . '</span>
        
                    </div>
        
                    <article class="artical-body">
        
                        <p class="artical-para"> ' . $selectField["first_paragraph"] . ' </p>
                        <img class="artical-subimg" src="'.  $imgPath[1] . '" alt="" >
                        <h3 class="artical-subtitle">' . $selectField["sub_title"] . '</h3>
                        <p class="artical-para">  ' . $selectField["second_paragraph"] . '</p>
                        <img class="artical-subimg" src="'.  $imgPath[3] . '" alt="" width="300px">
                        <p class="artical-para">' . $selectField["third_paragraph"] . '</p>
                        
                    </article>';


                } 
                

            }





        ob_end_flush();
        
    ?>

</div>
<!-- End The News Artical -->


        