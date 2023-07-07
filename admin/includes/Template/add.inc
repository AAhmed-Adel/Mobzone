<div class="container">
    <ul class="tabs-list">
        <li data-class="tap-1" class="active-tab">أضافة هاتف</li>
        <li data-class="tap-2">أضافة خبر</li>
        <li data-class="tap-3">أضافة نصيحة</li>
    </ul>


    <div class="taps-content">


        <!-- ============== Tap 1 ============== -->
        <div class="tap-1 hide-div">

            <!-- Start Add Mobile Form -->
            <form action="includes/function/addPhone.php" id="add-mobile" method="post" class="form-style" enctype="multipart/form-data">

                <h3 class="underline">أضافة هاتف جديد <span>&#43;</span></h3>


                <section class="input-holder">
                    <label for="mobile-company">أختر الشركة</label>
                    <br>
                    <select name="mobile-company" id="mobile-company" require>

                            <optgroup label="Android">
                                <option value="oneplus">oneplus</option>
                                <option value="xiaomi">xiaomi</option>
                                <option value="oppo">oppo</option>
                                <option value="samsung">samsung</option>
                                <option value="huawei">huawei</option>
                            </optgroup>
                            
                            <optgroup label="IOS">
                                <option value="apple">apple</option>
                            </optgroup>

                        </select>

                </section>

                <section class="input-holder">
                    <label for="mobile-name">أسم الهاتف</label>
                    <br>
                    <input type="text" name="mobile-name" id="mob-name" require>
                </section>


                <section class="input-holder">
                    <label for="releas-date">تاريخ الاصدار</label>
                    <br>
                    <input type="date" name="releas-date" id="releas-date" require>
                </section>

                <section class="input-holder">
                    <label for="operating-system">نظام التشغيل</label>
                    <br>
                    <textarea id="operating-system" name="operating-system" require></textarea>
                </section>

                <section class="input-holder">
                    <label for="mob-network">الشبكات</label>
                    <br>
                    <textarea name="mob-network" id="mob-network" require></textarea>
                </section>

                <section class="input-holder">
                    <label for="mob-cpu">المعالج</label>
                    <br>
                    <textarea name="mob-cpu" id="mob-cpu" require></textarea>
                </section>

                <section class="input-holder">
                    <label for="mob-screen">الشاشة</label>
                    <br>
                    <textarea name="mob-screen" id="mob-screen" require></textarea>
                </section>

                <section class="input-holder">
                    <label for="mob-ram">الذاكرة</label>
                    <br>
                    <textarea name="mob-ram" id="mob-ram" require></textarea>
                </section>

                <section class="input-holder">
                    <label for="mob-storage">التخزين</label>
                    <br>
                    <textarea name="mob-storage" id="mob-storage" require></textarea>
                </section>

                <section class="input-holder">
                    <label for="mob-battery">البطارية</label>
                    <br>
                    <textarea name="mob-battery" id="mob-battery" require></textarea>
                </section>

                <section class="input-holder">
                    <label for="mob-material">خامات التصنيع	</label>
                    <br>
                    <textarea name="mob-material" id="mob-material" require></textarea>
                </section>

                <section class="input-holder">
                    <label for="mob-size">ابعاد الهاتف</label>
                    <br>
                    <textarea name="mob-size" id="mob-size" require></textarea>
                </section>



                <section class="input-holder">
                    <label for="mob-camera">الكاميرا</label>
                    <br>
                    <textarea name="mob-camera" id="mob-camera" require></textarea>
                </section>

                <section class="input-holder">
                    <label for="mob-audio">الصوت</label>
                    <br>
                    <textarea name="mob-audio" id="mob-audio" require></textarea>
                </section>

                <section class="input-holder">
                    <label for="mob-mic">الميكروفون</label>
                    <br>
                    <textarea name="mob-mic" id="mob-mic" require></textarea>
                </section>

                <section class="input-holder">
                    <label for="amazon-price">سعر امازون</label>
                    <br>
                    <input type="text" name="amazon-price" id="amazon-price" require>
                </section>

                <section class="input-holder">
                    <label for="tradeline-price" >سعر تريدلاين</label>
                    <br>

                    <input type="text" name="tradeline-price" id="tradeline-price" require>
                </section>

                <section class="input-holder">
                    <label for="betech-price">سعر بي تك</label>
                    <br>
                    <input type="text" name="betech-price" id="betech-price" require>
                </section>

                <section class="input-holder">
                    <label for="jumia-price">سعر جوميا</label>
                    <br>
                    <input type="text" name="jumia-price" id="jumia-price" require>
                </section>

                <section class="input-holder">
                    <label for="">صورة رئيسية</label>
                    <br>
                    <input name="Pictures[]" type="file" require>
                </section>

                <section class="input-holder">
                    <label for="">صورة ثانية</label>
                    <br>
                    <input type="file" name="Pictures[]" require>
                </section>


                <section class="input-holder">
                    <label for="">صورة ثالثة</label>
                    <br>
                    <input type="file" name="Pictures[]" require>
                </section>

                <section class="input-holder">
                    <label for="">صورة المحتويات</label>
                    <br>
                    <input type="file" name="Pictures[]" require>
                </section>
                <section class="input-holder">
                    <button type="submit">أضف</button>
                </section>

            </form>
            <!-- End Add Mobile Form -->

        </div>
        <!-- ============== Tap 1 ============== -->





        <!-- ============== Tap 2 ============== -->
        <div class="tap-2 hide-div">

            <!-- Start Add News Form -->
            <form action="includes/function/addNews.php" id="add-news" method="POST" class="form-style" enctype="multipart/form-data">
                
                <h3 class="underline">أضافة خبر جديد <span>&#43;</span></h3>
            
                <section class="input-holder"> 
                    <label for="news-main-img">صورة رئيسية</label>
                    <br>
                    <input type="file" id="news-main-img" name="Pictures[]" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="news-title">عنوان الخبر</label>
                    <br>
                    <input type="text" id="news-title" name="news_main_title" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="news-author-name">اسم الكاتب</label>
                    <br>
                    <input type="text" id="news-author-name"  name="news_author_name" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="news-date">تاريخ  صدور الخبر</label>
                    <br>
                    <input type="date" id="news-date" name="news_date" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="first-news-para">قطعة نصية اولي</label>
                    <br>
                    <textarea id="first-news-para" name="news_first_para" require></textarea> 
                </section>
            
                <section class="input-holder"> 
                    <label for="news-sub-img">صوره فرعية</label>
                    <br>
                    <input type="file" id="news-sub-img" name="Pictures[]" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="news-sub-title">عنوان فرعي</label>
                    <br>
                    <input type="text" id="news-sub-title" name="news_sub_title" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="news-sec-para">قطعة نصية ثانية</label>
                    <br>
                    <textarea id="news-sec-para" name="news_sec_para" require></textarea> 
                </section>
                
                
                <section class="input-holder"> 
                    <label for="news-third-img">صوره فرعية ثالثة</label>
                    <br>
                    <input type="file" id="news-third-img" name="Pictures[]" require>
                </section>
            
            
                <section class="input-holder"> 
                    <label for="third-para">قطعة نصية ثالثة</label>
                    <br>
                    <textarea id="third-para" name="news_third_para" require></textarea> 
                </section>
                
                <section class="input-holder"> 
                    <button type="submit">أضف</button>
                </section>
            
            
            </form>
            <!-- End Add News Form -->

        </div>
        <!-- ============== Tap 2 ============== -->





        <!-- ============== Tap 3 ============== -->
        <div class="tap-3 hide-div">

            <!-- Start Add Tips Form -->
            <form action="includes/function/addTips.php" id="add-tips" method="POST" class="form-style" enctype="multipart/form-data">
                
                <h3 class="underline">أضافة نصيحة جديدة <span>&#43;</span></h3>
            
                <section class="input-holder"> 
                    <label for="tips-main-img">صورة رئيسية</label>
                    <br>
                    <input type="file" id="tips-main-img" name="tips_main_img" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="tips-title">عنوان النصيحة</label>
                    <br>
                    <input type="text" id="tips-title" name="tips_main_title" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="tips-author-name">اسم الكاتب</label>
                    <br>
                    <input type="text" id="tips-author-name"  name="tips_author_name" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="tips-date">تاريخ الصدور</label>
                    <br>
                    <input type="date" id="tips-date" name="tips_date" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="first-tips-para">قطعة نصية اولي</label>
                    <br>
                    <textarea id="first-tips-para" name="tips_first_para" require></textarea> 
                </section>
            
                <section class="input-holder"> 
                    <label for="tips-sub-img">صوره فرعية</label>
                    <br>
                    <input type="file" id="tips-sub-img" name="tips_sec_img" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="tips-sub-title">عنوان فرعي</label>
                    <br>
                    <input type="text" id="tips-sub-title" name="tips_sub_title" require>
                </section>
            
                <section class="input-holder"> 
                    <label for="tips-sec-para">قطعة نصية ثانية</label>
                    <br>
                    <textarea id="tips-sec-para" name="tips_sec_para" require></textarea> 
                </section>
                
                
                <section class="input-holder"> 
                    <label for="tips-third-img">صوره فرعية ثالثة</label>
                    <br>
                    <input type="file" id="tips-third-img" name="tips_third_img" require>
                </section>
            
            
                <section class="input-holder"> 
                    <label for="third-para">قطعة نصية ثالثة</label>
                    <br>
                    <textarea id="third-para" name="tips_third_para" require></textarea> 
                </section>
                
                <section class="input-holder"> 
                    <button type="submit">أضف</button>
                </section>
            
            
            </form>
            <!-- Start Add Tips Form -->

        </div>
        <!-- ============== Tap 3 ============== -->


        
    </div>

</div>


