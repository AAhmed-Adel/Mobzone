<?php include 'int.php';



    $do = isset($_GET['do']) ? $_GET['do'] : 'Not';

    if ($do == 'Subscribe' ) {

        echo 
        '
        <div class="login" id="login">
            <h2>أنضم الينا</h2>
    
            <div class="login-box">
                <ul class="form-tabs-list">
                    <a href="?do=login"><li data-class="tap-1">تسجيل</li></a>
                    <li data-class="tap-1" class="form-active-tab">أشتراك</li>
                </ul>

                <div class="form-taps-content">
                    

                    <div class="tap-1 tap-style">

                            <form action="includes/function/subscribe.php" method="POST">

                                <input type="text"      name="subscribe_name"        placeholder="الأسم">
                                <input type="email"     name="subscribe_email"       placeholder="البريد الألكتروني">
                                <input type="text"      name="subscribe_username"    placeholder="أسم المستخدم">
                                <input type="password"  name="subscribe-password"    placeholder="كلمة السر">
                            
                
                                <button type="submit">أشتراك</button>

                            </form>

                    </div>
                </div>
            </div>
        </div>
        ';


    } elseif ($do == 'login' ) {


        echo 
        '
        <div class="login" id="login">
            <h2>تسجيل الدخول</h2>
            <p></p>
            <div class="login-box">
                <ul class="form-tabs-list">
                    <li data-class="tap-1" class="form-active-tab">تسجيل</li>
                    <a href="?do=Subscribe"><li data-class="tap-2">أشتراك</li></a>
                </ul>

                <div class="form-taps-content">
                    
                    <div class="tap-1 tap-style">

                    <form action="includes/function/login.php" method="POST" >
                        <input  type="text"     name="login_username"     placeholder="أسم المستخدم" required>
                        <input  type="password"  name="login_password"     placeholder="كلمة السر" minlength="8" maxlength="16" required>
                        <button type="submit">تسجيل دخول</button>
                    </form>

                    </div>

                </div>
            </div>
        </div>
        ';

        
    }



?>    