                <!-- Start Company Phones -->
                <div class="company-phones">
                        
                    <!-- <div class="box-holder-title">
                        <h2 class="heading">هواتف شركة....</h2>
                    </div> -->

                    <section class="box-holder">



                    <?php 

// Lateast 4 Phones 
$selectAllCompnyMobile = getLatestAll('*', 'mobileinfo', 'mob_company');

// $theLatestMobile =  getLatest('*', 'mobileinfo', 'MobileID', $limit = 4);
foreach ($selectAllCompnyMobile as $selectField) {
    
// Img New Path
$getImgPath = 'data/upload/mobiles/' . $selectField["mob_name"] .'/1.jpg';

$starCount = '3';


            $do = isset($_GET['do']) ? $_GET['do'] : 'Not';

            if ($do == $selectField["mob_company"]) {


                    echo    '<article class="box">
                    <a href="mobileReview.php?do=' . $selectField["mob_name"] . '">
        
                        <header>
        
                            <h3 class="mobile-name">' . $selectField["mob_name"] . '</h3>
                        </header>
        
                        <div class="img-box">
                            <img src="' . $getImgPath .'">
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

            } else {

                
            }

}

?>                         




                    </section>

                </div>
                <!-- End Company Phones -->
