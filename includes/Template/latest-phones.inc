                
              



<!-- Start Latest Phones -->
<div class="latest-phones">
    
    <div class="box-holder-title">
        <h2 class="heading">أحدث الهواتف</h2>
    </div>

    <section class="box-holder">
        
    <?php 
        // Lateast 4 Phones 
        $theLatestMobile =  getLatest('*', 'mobileinfo', 'MobileID', $limit = 4);
        foreach ($theLatestMobile as $selectField) {
            

        // Select Img Name
        $selectImgeName =  explode('/',  $selectField["image1"]);
        // Get Img Name
        $getImgName = end($selectImgeName);
        // Get Img Path
        $imgPath = 'data\upload\mobiles\\'. $selectField["mob_name"] .'\\'. $getImgName;

        $starCount = '3';
 


        echo    '<article class="box">
                    <a href="mobileReview.php?do=' . $selectField["mob_name"] . '">

                        <header>

                            <h3 class="mobile-name">' . $selectField["mob_name"] . '</h3>
                        </header>

                        <div class="img-box">
                            <img src="' . $imgPath .'">
                            <div class="overlay"><i class="fa-solid fa-magnifying-glass"></i></div>
                        </div>
                        
                    
                        <footer>
                            <div>
                                <span class="count-star">'. $starCount .'/5</span>
                                <i class="fa fa-star the-star"></i>
                            </div>
                        </footer>
                    
                    </a>
                </article>';

        }
        
    ?>  

<!-- <span>سعر ومواصفات</span> -->

    </section>

</div>
<!-- End Latest Phones -->

