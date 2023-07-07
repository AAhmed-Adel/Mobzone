        
<!-- Start Compare Box -->
<form action="<?php echo $_SERVER['PHP_SELF'] ?>" class="compare-box" method="POST">

    <div class="comper-title">
        <h4>قارن بين هاتفين</h4>
    </div>
    
    <div class="comper-inputs">
        <input type="search" id="firs-phone" name="first-phone" placeholder="الهاتف الاول" required>

        <input type="search" id="sec-phone" name="sec-phone" placeholder="الهاتف الثاني" required>

        <button type="submit">
            <i class="fa-solid fa-magnifying-glass"></i>
        </button>
    </div>
</form>
<!-- End Compare Box  -->

<?php 
    if ($_SERVER['REQUEST_METHOD'] == 'POST') {

        $firstItem  =  $_POST['first-phone'];
        $secItem    =  $_POST['sec-phone'];



        
        function getTwoPhones($select, $table) {

            global $conn;
        
            $InfoStmt = $conn ->prepare("SELECT $select FROM $table");
        
            $InfoStmt->execute();
        
            $rows = $InfoStmt->fetchAll();
        
            return $rows;
        
        }
        echo ' <div class="two-review-box">';

            $getPhones =  getTwoPhones('*', 'mobileinfo');
            foreach ($getPhones as $selectField) {



                    if ($firstItem == $selectField['mob_name']) {


                        //Get First Mobile Info 
                        $firstName      =   $selectField['mob_name'];
                        $firstDate      =   $selectField['release_date'];
                        $firstNetwork   =   $selectField['network'];
                        $firstMate      =   $selectField['material'];
                        $firstSize      =   $selectField['size'];
                        $firstAudio     =   $selectField['audio'];
                        $firstMic       =   $selectField['mic'];
                        $firstPro       =   $selectField['processor'];
                        $firstCamera    =   $selectField['camera'];
                        $firstScreen    =   $selectField['screen'];
                        $firstStorage   =   $selectField['storage'];
                        $firstRam       =   $selectField['ram'];
                        $firstOP        =   $selectField['operating_system'];
                        $firstBattery   =   $selectField['battery'];
                        $firstAmazon    =   $selectField['amazon_price'];
                        $firstTrade     =   $selectField['tradeline_price'];
                        $firstBetech    =   $selectField['betech_price'];
                        $firstJumia     =   $selectField['jumia_price'];


                        // Get All Img Path And Name
                        for ($i = 0; $i < 4; $i++) {

                            $getImg[0] =   $selectField["image1"];
                            $getImg[1] =   $selectField["image2"];
                            $getImg[2] =   $selectField["image3"];
                            $getImg[3] =   $selectField["image4"];

                            // Select Img Name
                            $selectImgeName[$i] =  explode('/', $getImg[$i] );

                            // Get Img Name
                            $getImgName[$i] = end($selectImgeName[$i]);
                            // Get Img Path
                            $imgPath[$i] = 'data\upload\mobiles\\'. $selectField["mob_name"] .'\\'. $getImgName[$i];

                        }



                        echo 
                        '
                    
                        <article class="review-box" >
                            <div class="review-header-box">
                                <h3 class="mobile-name">' . $selectField['mob_name'] .  '</h3>
                        
                    
                            </div>
                        
                            <div class="slider-container">
                                <div id="slider-number" class="slider-number"></div>
                                <div class="overlay"></div>
                        
                                <img src="' . $imgPath[0] .'" alt="">
                                <img src="' . $imgPath[1] .'" alt="">
                                <img src="' . $imgPath[2] .'" alt="">
                                <img src="' . $imgPath[3] .'" alt="">


                                <div class="slider-controls">
                                    <span id="prev" class="prev"><i class="fas fa-angle-left"></i></span>
                                    <span id="indicators" class="indicators"></span>
                                    <span id="next" class="next"><i class="fas fa-angle-right"></i></span>
                                </div>
                            </div>
                        
                            <div class="rating-box">
                                <span class="count-star">4/5</span>
                                <i class="fa fa-star the-star"></i>
                            </div>

                        </article>';

                    }

                    if ($secItem == $selectField['mob_name']) {


                        //Get Sec Mobile Info 
                        $secName      =   $selectField['mob_name'];
                        $secDate      =   $selectField['release_date'];
                        $secNetwork   =   $selectField['network'];
                        $secMate      =   $selectField['material'];
                        $secSize      =   $selectField['size'];
                        $secAudio     =   $selectField['audio'];
                        $secMic       =   $selectField['mic'];
                        $secPro       =   $selectField['processor'];
                        $secCamera    =   $selectField['camera'];
                        $secScreen    =   $selectField['screen'];
                        $secStorage   =   $selectField['storage'];
                        $secRam       =   $selectField['ram'];
                        $secOP        =   $selectField['operating_system'];
                        $secBattery   =   $selectField['battery'];
                        $secAmazon    =   $selectField['amazon_price'];
                        $secTrade     =   $selectField['tradeline_price'];
                        $secBetech    =   $selectField['betech_price'];
                        $secJumia     =   $selectField['jumia_price'];



                    // Get All Img Path And Name
                    for ($i = 0; $i < 4; $i++) {

                        $getImg[0] =   $selectField["image1"];
                        $getImg[1] =   $selectField["image2"];
                        $getImg[2] =   $selectField["image3"];
                        $getImg[3] =   $selectField["image4"];

                        // Select Img Name
                        $selectImgeName[$i] =  explode('/', $getImg[$i] );

                        // Get Img Name
                        $getImgName[$i] = end($selectImgeName[$i]);
                        // Get Img Path
                        $imgPath[$i] = 'data\upload\mobiles\\'. $selectField["mob_name"] .'\\'. $getImgName[$i];

                    }


                        echo '
                        
                        <article class="review-box" >
                        
                            <div class="review-header-box">
                                <h3 class="mobile-name">'. $selectField['mob_name'] .'</h3>
                        
                
                            </div>
                        
                            <div class="sec-slider-container">
                                <div id="sec-slider-number" class="sec-slider-number"></div>
                                <div class="overlay"></div>
                        
                                <img src="' . $imgPath[0] .'" alt="">
                                <img src="' . $imgPath[1] .'" alt="">
                                <img src="' . $imgPath[2] .'" alt="">
                                <img src="' . $imgPath[3] .'" alt="">

                                
                                <div class="sec-slider-controls">
                                    <span id="sec-prev" class="sec-prev"><i class="fas fa-angle-left"></i></span>
                                    <span id="sec-indicators" class="sec-indicators"></span>
                                    <span id="sec-next" class="sec-next"><i class="fas fa-angle-right"></i></span>
                                </div>
                            </div>
                        
                            <div class="rating-box">
                                <span class="count-star">4/5</span>
                                <i class="fa fa-star the-star"></i>
                            </div>
                            
                        </article>
                        '; 
                        
                    }

            }

        echo '</div>';

        echo '
        
        <table class="two-table">
        <tbody>

            <tr>
                <td class="first-td"><i class="fa-solid fa-calendar-days"></i>تاريخ الاصدار</td> 
                <td class="sec-td">'.   $firstDate .'</td>
                <td class="third-td">'. $secDate .'</td>
            </tr>

            <tr>
                <td class="first-td"><i class="fa-solid fa-gear"></i>نظام التشغيل</td> 
                <td class="sec-td">'. $firstOP .'</td>
                <td class="third-td">'. $secOP .'</td>

            </tr>

            <tr>
                <td class="first-td"><i class="fa-solid fa-wifi"></i>الشبكات</td> 
                <td class="sec-td">'. $firstNetwork .'</td>
                <td class="third-td">'. $secNetwork .'</td>

            </tr>

            <tr>
                <td class="first-td"><i class="fa-solid fa-microchip"></i>المعالج</td> 
                <td class="sec-td">'. $firstPro .'</td>
                <td class="third-td">'. $secPro .'</td>                        
            </tr>

            <tr>
                <td class="first-td"><i class="fa-solid fa-mobile-button"></i>الشاشة</td> 
                <td class="sec-td">'. $firstScreen .'</td>
                <td class="third-td">'. $secScreen .'</td>
            </tr>

            <tr>
                <td class="first-td"><i class="fa-solid fa-memory"></i>الذاكرة</td> 
                <td class="sec-td">'. $firstRam .'</td>
                <td class="third-td">'. $secRam .'</td>
            </tr>

            <tr>
                <td class="first-td"><i class="fa-solid fa-hard-drive"></i>التخزين</td> 
                <td class="sec-td">'. $firstStorage .'</td>
                <td class="third-td">'. $secStorage .'</td>
            </tr>

            <tr>
                <td class="first-td"><i class="fa-solid fa-battery-full"></i>البطارية</td> 
                <td class="sec-td">'. $firstBattery .'</td>
                <td class="third-td">'. $secBattery .'</td>
            </tr>

            <tr>
                <td class="first-td"><i class="fa-solid fa-screwdriver-wrench"></i>خامات التصنيع</td> 
                <td class="sec-td">'. $firstMate .'</td>
                <td class="third-td">'. $secMate .'</td>
            </tr>

            <tr>
                <td class="first-td"><i class="fa-solid fa-maximize"></i>ابعاد الهاتف</td> 
                <td class="sec-td">'. $firstSize .'</td>
                <td class="third-td">'. $secSize .'</td>
            </tr>

            <tr>
                <td class="first-td"><i class="fa-solid fa-camera"></i>الكاميرا </td> 
                <td class="sec-td">'. $firstCamera .'</td>
                <td class="third-td">'. $secCamera .'</td>
            </tr>
    
            <tr>
                <td class="first-td"><i class="fa-solid fa-volume-low"></i>الصوت</td> 
                <td class="sec-td">'. $firstAudio .'</td>
                <td class="third-td">'. $secAudio .'</td>
            </tr>

            <tr>
                <td class="first-td"><i class="fa-solid fa-microphone"></i>الميكروفون</td> 
                <td class="sec-td">'. $firstMic .'</td>
                <td class="third-td">'. $secMic .'</td>
            </tr>

            <tr class="price-rwo">

                <td class="first-td"><i class="fa-solid fa-dollar-sign"></i>السعر</td> 

                <td class="sec-td price-table">

                    <a href="">
                        <div class="img-price-box">
                        <img src="'. $img .'supplier/amazon.png"  alt="">
                        </div>
                        <span class="price">'. $firstAmazon .'</span>
                    </a>

                    <a href="">
                        <div class="img-price-box">
                        <img src="'. $img .'supplier/tradeline.png"  alt="">
                        </div>
                        <span class="price">'. $firstTrade .'</span>
                    </a>

                    <a href="">
                        <div class="img-price-box">
                        <img src="'. $img .'supplier/btech.png"alt="">
                        </div>
                        <span class="price">'. $firstBetech .'</span>
                    </a>

                
                    
                    <a href="">
                        <div class="img-price-box">
                        <img src="'. $img .'supplier/jumia.png"  alt="">
                        </div>
                        <span class="price">'. $firstJumia .'</span>
                    </a> 

                </td>

                <td class="third-td price-table">

                    <a href="">
                        <div class="img-price-box">
                        <img src="'. $img .'supplier/amazon.png"  alt="">
                        </div>
                        <span class="price">'. $secAmazon .'</span>
                    </a>

                    <a href="">
                        <div class="img-price-box">
                        <img src="'. $img .'supplier/tradeline.png"  alt="">
                        </div>
                        <span class="price">'. $secTrade .'</span>
                    </a>

                    <a href="">
                        <div class="img-price-box">
                        <img src="'. $img .'supplier/btech.png"alt="">
                        </div>
                        <span class="price">'. $secBetech .'</span>
                    </a>

                
                    
                    <a href="">
                        <div class="img-price-box">
                        <img src="' .$img. 'supplier/jumia.png"  alt="">
                        </div>
                        <span class="price">'. $secJumia .'</span>
                    </a> 
                </td>
                
            </tr>

        </tbody>
    </table>

        ';



    }
?>




                <!-- <div class="two-review-box">

                    <article class="review-box" >
                        <div class="review-header-box">
                            <h3 class="mobile-name">Oneplus 8 Pro</h3>
                    
                
                        </div>
                    
                        <div class="slider-container">
                            <div id="slider-number" class="slider-number"></div>
                            <div class="overlay"></div>
                    
                            <img src="<?php echo $img; ?>phones/OnePlus/OnePlus-7T.jpg" alt="">
                            <img src="<?php echo $img; ?>phones/Xiaomi/Xiaomi-Poco-M3-Pro-5G.jpg" alt="">
                            <img src="<?php echo $img; ?>phones/Oppo/Oppo-A73-2.jpg" alt="">
                            <img src="<?php echo $img; ?>phones/Xiaomi/Xiaomi-Poco-X3-Pro.jpg" alt="">
                            <img src="<?php echo $img; ?>/phones/iPhone/Apple-iPhone-12-Pro.jpg" alt="">
                            
                            <div class="slider-controls">
                                <span id="prev" class="prev"><i class="fas fa-angle-left"></i></span>
                                <span id="indicators" class="indicators"></span>
                                <span id="next" class="next"><i class="fas fa-angle-right"></i></span>
                            </div>
                        </div>
                    
                        <div class="rating-box">
                            <span class="count-star">4/5</span>
                            <i class="fa fa-star the-star"></i>
                        </div>

                    </article>

                    
                    <article class="review-box" >
                        <div class="review-header-box">
                            <h3 class="mobile-name">Oneplus 8 Pro</h3>
                    
            
                        </div>
                    
                        <div class="sec-slider-container">
                            <div id="sec-slider-number" class="sec-slider-number"></div>
                            <div class="overlay"></div>
                    
                            <img src="<?php echo $img; ?>phones/OnePlus/OnePlus-7T.jpg" alt="">
                            <img src="<?php echo $img; ?>phones/Xiaomi/Xiaomi-Poco-M3-Pro-5G.jpg" alt="">
                            <img src="<?php echo $img; ?>phones/Oppo/Oppo-A73-2.jpg" alt="">
                            <img src="<?php echo $img; ?>phones/Xiaomi/Xiaomi-Poco-X3-Pro.jpg" alt="">
                           
                            
                            <div class="sec-slider-controls">
                                <span id="sec-prev" class="sec-prev"><i class="fas fa-angle-left"></i></span>
                                <span id="sec-indicators" class="sec-indicators"></span>
                                <span id="sec-next" class="sec-next"><i class="fas fa-angle-right"></i></span>
                            </div>
                        </div>
                    
                    <div class="rating-box">
                            <span class="count-star">4/5</span>
                            <i class="fa fa-star the-star"></i>
                        </div>
                        
                    </article>
                </div> -->

                <!-- Start Info Table -->
         
                <!-- End Info Table  -->