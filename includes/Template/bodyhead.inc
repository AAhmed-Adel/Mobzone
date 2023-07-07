
<body>


<!-- ==== Start Navigation Bar ==== -->
<div class="container">
<nav class="navbar">

        
        <h2 class="logo"><a href="index.php">موب<span>زون</span></a></h2>
        

        <?php
            function active($currect_page){
                $url_array =  explode('/', $_SERVER['SCRIPT_NAME']) ;
                $url = end($url_array);  
                if($currect_page == $url){
                    echo 'active'; //class name in css 
                } 
            }
        ?>

        <ul class="menu">
            <li ><a href="index.php" class=" <?php active('index.php');?>" ><i class="fa-solid fa-house-chimney"></i>الرئيسية</a></li>
            <li><a href="news.php"   class=" <?php active('news.php');?>"><i class="fa-solid fa-newspaper"></i>الاخبار</a></li>
            <li><a href="tips.php" class=" <?php active('tips.php');?>"><i class="fa-solid fa-lightbulb"></i>نصائح</a></li>
            <li><a href="compare_page.php" class=" <?php active('compare_page.php');?>"><i class="fa-solid fa-code-compare"></i>المقارنات</a></li>

        </ul>

        
        <script>

        </script>

        <div class="burger">
            <span class=""></span>
            <span class=""></span>
            <span class=""></span>
        </div> 

        <?php 
                        session_start();

        if(isset($_SESSION['userlogin'])) {


            $getUser = $conn->prepare("SELECT * FROM users WHERE Username = ?");

            $getUser->execute(array($_SESSION['userlogin']));
    
            $userInfo = $getUser->fetch();
    

            echo 
            '
            <div class="profile-button" >
                <a href="profile.php">
                    <img src="'.  $img .'profile/man.png" alt="">
                </a>
                <span>'. $userInfo['Name'].'</span>
                <button><a href="includes/function/logout.php"><i class="fa-solid fa-right-from-bracket"></i></a></button>
            </div>
       
            ';

        } else {
            echo  '
            <div class="profile-button login-btn" >
            <span>تسجيل دخول</span>

                <button><a href="subandlogin.php?do=login"><i class="fa-solid fa-right-to-bracket"></i></a></button>
            </div>
       
            ';
        }
        
        ?>
        


    </nav>
</div>
<!-- ==== End Navigation Bar ==== -->

<!-- ==== Start Header ==== -->
<div class="container">
<header class="header">
    <div class="overlay"></div>
    <div class="overlay-black"></div>
    
        <main>
            <h1>متخصيصين في مراجعة الهواتف</h1>
            <p>نساعدك لاختيار الهاتف الافضل بالنسبة لك</p>

                            
                <button><a href="subandlogin.php?do=Subscribe">أشترك الان</a></button>
           
        </main>
</header>
</div>

<!--  End Header  -->

<!-- ==== Start Brands ==== -->
<div class="container">
<section class="brand-list">

        <div class="brand">
            <a href="company_phones.php?do=apple" id="apple">
                <img src="<?php echo $img; ?>brand logo/apple-black-logo.png" alt="">
                <p>أبل</p>
            </a>
        </div>
        
        <div class="brand">
            <a href="company_phones.php?do=oneplus" id="one-plus">
                <img src="<?php echo $img; ?>brand logo/one-plus.png" alt="">
                <p>وان بلس</p>
            </a>
        </div>
        
        <div class="brand">
            <a href="company_phones.php?do=xiaomi" id="xiaomi">
                <img src="<?php echo $img; ?>brand logo/xiaomi.png" alt="">
                <p>شاومي</p>
            </a>
        </div>
        
        <div class="brand">
            <a href="company_phones.php?do=oppo" id="oppo">
                <img src="<?php echo $img; ?>brand logo/oppo.png"  alt="">
                <p>اوبو</p>
            </a>
        </div>
        
        <div class="brand">
            <a href="company_phones.php?do=samsung" id="samsung">
                <img src="<?php echo $img; ?>brand logo/Logo-Samsung.png" alt="">
                <p>سامسونج</p>
            </a>
        </div>

        <div class="brand">
            <a href="company_phones.php?do=huawei" id="huawei">
                <img src="<?php echo $img; ?>brand logo/huawei.png" alt="">
                <p>هواوي</p>
            </a>
        </div>
    </section>
</div> 
<!-- ==== End Brands ==== -->



<!-- Start Main Body -->
<div class="mainbody">
    <div class="container">
        <!-- Start Content -->
        <section class="bodycontent">
