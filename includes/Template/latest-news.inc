              

<!-- Start Latest News -->
<section class="article-box-holder ">
    
        <div class="box-holder-title">
            <h2 class="heading">آخر الأخبار</h2>
        </div>
                

<?php 

ob_start();
  
    // Lateast 4 News ============================================
    $theLatestNews =  getLatest('*', 'news', 'NewsID', $limit = 4);
    foreach ($theLatestNews as $selectField) {





        $do = isset($_GET['do']) ? $_GET['do'] : 'Not';

        if ($do == $selectField["news_title"]) {
    
 
            echo '<script type="text/javascript">
            window.location = "news-article.php?do='. $selectField["news_title"] . '"
            </script>';

        } elseif ($do == 'add') {
    

    
        } else {
    
            
        }


                // Select Img Name
                $selectImgeName =  explode('/',  $selectField["image1"]);
                // Get Img Name
                $getImgName = end($selectImgeName);
                // Get Img Path
                $imgPath = 'data\upload\news\\'. $selectField["news_title"] .'\\'. $getImgName;
        

        echo '<article class="article-box">';
            echo '<a href="?do=' . $selectField["news_title"] .'"> ';
                echo '<div class="article-img">';
                    echo '<img src="' . $imgPath . '">';
                    echo '<div class="overlay"><i class="fa-solid fa-magnifying-glass"></i></div>';
                echo '</div>';
                echo '<div class="title-summary">';
                    echo '<h3 class="article-box-title">' . $selectField["news_title"]  . '</h3>';
                    echo '<p class="article-box-para">' . $selectField["first_paragraph"]  . '</p>';
                echo '</div>';
            echo '</a>';
        echo '</article>';


        

    }



ob_end_flush();
  
?>
    
</section>
<!-- End Latest News -->
