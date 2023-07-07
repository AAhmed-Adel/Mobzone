
                <section class="article-box-holder ">

                    <div class="box-holder-title">
                        <h2 class="heading">اهم النصائح</h2>
                        <p >نقدم لك نصائح هامة للأستفادة بالهاتف الخاص بك بافضل شكل ممكن, مثال كيفية الحفاظ علي الهالبطارية والشاشة, وأيضا اهم المميزات الخفية في الهاتف.</p>
                    </div>
            
                    <?php 
       
       
       // Lateast 4 Tips ============================================
       $theLatestTips =  getLatestAll('*', 'tips', 'TipsID');
       foreach ($theLatestTips as $selectField) {


           // Select Img Name
           $selectImgeName =  explode('/',  $selectField["image1"]);
           // Get Img Name
           $getImgName = end($selectImgeName);
           // Get Img Path
           $imgPath = 'data\upload\tips\\'. $selectField["tips_title"] .'\\'. $getImgName;


     

           echo '<article class="article-box">';
               echo '<a href="tips-article.php"> ';
                   echo '<div class="article-img">';
                       echo '<img src="' .  $imgPath .'">';
                       echo '<div class="overlay"><i class="fa-solid fa-magnifying-glass"></i></div>';
                   echo '</div>';
                   echo '<div class="title-summary">';
                       echo '<h3 class="article-box-title">' . $selectField["tips_title"]  . '</h3>';
                       echo '<p class="article-box-para">' . $selectField["first_paragraph"]  . '</p>';
                   echo '</div>';
               echo '</a>';
           echo '</article>';

       }

?>
        
                  
                </section>
