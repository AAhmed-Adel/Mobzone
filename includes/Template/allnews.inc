
                <!-- Start  News -->
                <section class="article-box-holder ">
                    
                        <div class="article-holder-title">
                            <h2 class="heading">اخبار الهواتف</h2>
                            <p>ستجد هنا اخر اخبار واحدث التطورات المتعلقة بالهواتف.</p>
                        </div>
                
                        <?php 
       
        // Lateast 4 News ============================================
        $theLatestNews =  getLatestAll('*', 'news', 'NewsID');
        foreach ($theLatestNews as $selectField) {


            // Select Img Name
            $selectImgeName =  explode('/',  $selectField["image1"]);
            // Get Img Name
            $getImgName = end($selectImgeName);
            // Get Img Path
            $imgPath = 'data\upload\news\\'. $selectField["news_title"] .'\\'. $getImgName;


      

            echo '<article class="article-box">';
                echo '<a href="news-article.php"> ';
                    echo '<div class="article-img">';
                        echo '<img src="' .  $imgPath .'">';
                        echo '<div class="overlay"><i class="fa-solid fa-magnifying-glass"></i></div>';
                    echo '</div>';
                    echo '<div class="title-summary">';
                        echo '<h3 class="article-box-title">' . $selectField["news_title"]  . '</h3>';
                        echo '<p class="article-box-para">' . $selectField["first_paragraph"]  . '</p>';
                    echo '</div>';
                echo '</a>';
            echo '</article>';

        }

?>
                </section>
                <!-- End  News -->

