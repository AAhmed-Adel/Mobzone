
<?php 

    $pageTitle = 'الملف الشصخي'; // Page Title
    include   ('int.php');
    include ($template . 'bodyhead.inc');
    
?>


<?php 

    // session_start();

echo 
'<div class="company-phones">
            
    <div class="box-holder-title">
        <h2 class="heading">القائمة المفضلة</h2>
    </div>

    <section class="box-holder">';

    
    if(isset($_SESSION['userlogin'])) {
        
        $userName = $_SESSION['userlogin'];

        function getFavorite($select, $table, $order) {

            global $conn;
        
            $latestStmt = $conn ->prepare("SELECT $select FROM $table ORDER BY $order DESC");
        
            $latestStmt->execute();
        
            $rows = $latestStmt->fetchAll();
        
            return $rows;
        
        }


        $theLatestNews =  getFavorite('*', 'favorite', 'Username');
        foreach ($theLatestNews as $selectField) {

            $getImgPath = 'data/upload/mobiles/' . $selectField["mob_name"] .'/1.jpg';

            $starCount = '3';
            
            

            if ($userName == $selectField["Username"]) {

                echo 
                '<article class="box">
    
    
                    <header class="favorite_header">
                        <h3 class="mobile-name">' . $selectField["mob_name"] . '</h3>

                        <button class="delete-btn">
                            <i class="fa-solid fa-xmark"></i>
                        </button>
                    </header>

                    <a href="mobileReview.php?do=' . $selectField["mob_name"] . '">
                    <div class="img-box">
                        <img src="' . $getImgPath .'">
                        <div class="overlay"><i class="fa-solid fa-magnifying-glass"></i></div>
                    </div>
                    </a>

                
                    <footer>
                        <div>
                            <span class="count-star">'. $starCount .'/5</span>
                            <i class="fa fa-star the-star"></i>
                        </div>
                    </footer>
                
            </article>';


            
            }


       }

    } else {

        header('Location: /mobzone/subandlogin.php?do=login');

        exit();

    } 

echo 
    '</section>
</div>';

    include ($template . 'footer.inc'); 
    

?>


