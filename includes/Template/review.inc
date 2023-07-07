










    <a href="compare_page.php" class="compare-btn">
        <i class="fa-solid fa-code-compare"></i>
        <span>قارن بين هاتفين</span>
    </a>


<?php 

        
        $selectAllMobileData =  getInfo('*', 'mobileinfo');
        foreach ($selectAllMobileData as $selectField) { 
            
            // Img New Path

            $do = isset($_GET['do']) ? $_GET['do'] : 'Not';

            if ($do == $selectField['mob_name']) {
             

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

                    echo   '<article class="review-box" >
                        <div class="review-header-box">
                            <h3 class="mobile-name">' . $selectField['mob_name'] . '</h3>
                    
                            <!-- <div class="click" id="favorite">
                
                                <span class="fa fa-heart-o favorite-span"></span>
                                <div class="ring"></div>
                                <div class="ring2"></div>
                                <p class="info">المفضلة <strong>&#43;</strong></p>
                            </div> -->
                            
                           <div id="favorite" class="favorite-btn"></div>

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
                    
                            <div class="star-rating">
                                    
                                    <input class="rating-input" id="star-5" type="radio" name="rating-5" value="5" />
                                    <label class="rating-label" for="star-5" title="5 stars">
                                        <i class="active fa fa-star" aria-hidden="true"></i>
                                    </label>
                            
                                    <input class="rating-input" id="star-4" type="radio" name="rating-4" value="4" />
                                    <label class="rating-label" for="star-4" title="4 stars">
                                        <i class="active fa fa-star" aria-hidden="true"></i>
                                    </label>
                            
                                    <input class="rating-input" id="star-3" type="radio" name="rating-3" value="3" />
                                    <label class="rating-label" for="star-3" title="3 stars">
                                        <i class="active fa fa-star" aria-hidden="true"></i>
                                    </label>
                            
                                    <input class="rating-input" id="star-2" type="radio" name="rating-2" value="2" />
                                    <label class="rating-label" for="star-2" title="2 stars">
                                        <i class="active fa fa-star" aria-hidden="true"></i>
                                    </label>
                            
                                    <input class="rating-input" id="star-1" type="radio" name="rating-1" value="1" />
                                    <label class="rating-label" for="star-1" title="1 star">
                                        <i class="active fa fa-star" aria-hidden="true"></i>
                                    </label>
                                </div>
                        </div>
                    </article>';


                    if(isset($_SESSION['userlogin'])) {

                        $userName   =   $_SESSION['userlogin'];
                        $mobName    =   $selectField["mob_name"];
                  


                        // Check If User Exist In Database

                        $loginStmt = $conn->prepare("SELECT mob_name FROM favorite WHERE mob_name = '$mobName'");
                        $loginStmt->execute();
                        $count = $loginStmt->rowCount();
                        


                        // $addToFav = addToFav($userName, $mobName);
                        // $deletFav = deleteFav($mobName);
    
                        echo 
                        "<script>
                            var favBtn = document.getElementById('favorite');

                 
                            favBtn.onclick = function () {

                                favBtn.classList.toggle('favActive');

                                $.ajax({
                                    url: 'ajax.php',
                                }).done(function( msg ) {
                                    console.log( 'Data Saved: ' + msg );
                                });
                

                     

                            }

                        </script>";


                        // if Count > 0 This Mean Database Containe Record About This Username
                        if ($count > 0) {

                            echo  
                            "<script>

                                favBtn.classList.add('favActive');

                            </script>";

                        } else {

                            echo '<h1> Not Has </h1>';

                        }  
                  
                    } else {
                  
                        echo 
                            "<script>
                                    
                                var favBtn = document.getElementById('favorite');
                                favBtn.classList.add('favDisabled');
                                favBtn.onclick = function () { 
                                    alert('يجب تسجيل الدخول');

                                }
                            </script>";
                    }

                    echo '                
                    <table class="one-table">
                        <tbody>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-calendar-days"></i>تاريخ الاصدار</td> 
                                <td class="sec-td">' . $selectField["release_date"] . '</td>
                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-gear"></i>نظام التشغيل</td> 
                                <td class="sec-td">' . $selectField["operating_system"] .'</td>
                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-wifi"></i>الشبكات</td> 
                                <td class="sec-td">' .   $selectField["network"] . '</td>

                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-microchip"></i>المعالج</td> 

                                <td class="sec-td">' .  $selectField["processor"] . '</td>
                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-mobile-button"></i>الشاشة</td> 

                                <td class="sec-td">' .  $selectField["screen"] . '</td>
                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-memory"></i>الذاكرة</td> 

                                <td class="sec-td">' .  $selectField["ram"] . '</td>
                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-hard-drive"></i>التخزين</td> 
                                <td class="sec-td">' . $selectField["storage"] . '</td>
                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-battery-full"></i>البطارية</td> 
                                <td class="sec-td">' . $selectField["battery"] . '</td>
                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-screwdriver-wrench"></i>خامات التصنيع</td> 
                                <td class="sec-td">' . $selectField["material"] . '</td>
                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-maximize"></i>ابعاد الهاتف</td> 
                                <td class="sec-td">' . $selectField["size"] .'</td>
                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-camera"></i>الكاميرا </td> 
                                <td class="sec-td">'. $selectField["camera"] . '</td>
                            </tr>
                    
                            <tr>
                                <td class="first-td"><i class="fa-solid fa-volume-low"></i>الصوت</td> 
                                <td class="sec-td">' . $selectField["audio"] . '</td>
                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-microphone"></i>الميكروفون</td> 
                                <td class="sec-td">' . $selectField["mic"] . '</td>
                            </tr>

                            <tr>
                                <td class="first-td"><i class="fa-solid fa-dollar-sign"></i>السعر</td> 

                                <td class="sec-td price-table">

                                    <a href="">
                                        <div class="img-price-box">
                                        <img src="'.  $img . 'supplier/amazon.png"  alt="">
                                        </div>
                                        <span class="price">' . $selectField["amazon_price"] .'</span>
                                    </a>

                                    <a href="">
                                        <div class="img-price-box">
                                        <img src="'.  $img . 'supplier/tradeline.png"  alt="">
                                        </div>
                                        <span class="price">'. $selectField["tradeline_price"] . '</span>
                                    </a>

                                    <a href="">
                                        <div class="img-price-box">
                                        <img src="'.  $img . 'supplier/btech.png"alt="">
                                        </div>
                                        <span class="price">' . $selectField["betech_price"] . '</span>
                                    </a>

                                
                                    
                                    <a href="">
                                        <div class="img-price-box">
                                        <img src="'.  $img . 'supplier/jumia.png"alt="">
                                        </div>
                                        <span class="price">' . $selectField["jumia_price"] . '</span>
                                    </a> 

                                </td>

                            </tr>

                        </tbody>
                </table>';




            }
        }
?>

