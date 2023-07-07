<div class="container">
    <nav class="navbar">

        <a class="logo" href="?do=home">موب<span>زون</span></a>

        <ul class="menu">
            <li><a href="?do=home">الرئيسية</a></li>
            <li> <a href="?do=add">أضافة جديدة</a></li>
            <li><a href="?do=edit"> تعديل البيانات</a></li>
        </ul>

        <div class="admin_log_info">
            <button><a href="<?php echo $admin_function . 'logout.php'?>"><i class="fa-solid fa-right-from-bracket"></i></a> </button>
            <h4> <?php  echo $_SESSION['loggedin']; ?> <i class="fa-solid fa-user"></i></h4>           
        </div> 

    </nav>

</div>