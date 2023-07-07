<!-- ==== Start Header ==== -->
<div class="container">
        <header class="sec-header">
            <div class="overlay"></div>

            
            <!-- <div class="admin-hero">
                <h1>أهلا بك في اللوحة الادارية</h1>
            </div> -->


            <div class="info-box-holder">

                <div class="info-box">
                    <h3>المستخدمين</h3>
                    <span class="count-up"> <?php echo countItems('UserID', 'users'); ?> </span>
                    <i class="fa-solid fa-user"></i>
                </div>

                <div class="info-box">
                    <h3>الهواتف</h3>
                    <span class="count-up"><?php echo countItems('MobileID', 'mobileinfo'); ?></span>
                    <i class="fa-solid fa-mobile"></i>                
                </div>

                <div class="info-box">
                    <h3>المقالات</h3>
                    <span class="count-up"><?php echo countItems('NewsID', 'news'); ?></span>
                        <i class="fa-solid fa-newspaper"></i>
                </div>

                <div class="info-box">
                    <h3>التقيمات</h3>
                    <span class="count-up"><?php echo countItems('EvaluationID', 'evaluations'); ?></span>
                    <i class="fa-solid fa-comments"></i>
                </div>


            </div>

        </header>
</div>
<!-- ==== End Header ==== -->
