<?php 
   session_start();
   $noNav = '';

   if(isset($_SESSION['loggedin'])) {
       header('Location: dashboard.php?do=home'); // Redirect To Dashboard Page
   }

    $pageTitle = 'login'; // Page Title

    include   ('int.php');
 
    
    // Check If User Coming Form HTTP Post Request
    if ($_SERVER['REQUEST_METHOD'] == 'POST') {

        $username = $_POST['admin-user'];
        $passowrd = $_POST['admin-pass'];
        $hashpass = sha1($passowrd);


        // Check If User Exist In Database

        $loginStmt = $conn->prepare("SELECT 	Username, Password FROM Users WHERE Username = ? AND Password = ? AND GroupID = 1");
        $loginStmt->execute(array($username, $hashpass));
        $count = $loginStmt->rowCount();
        
        // echo $count;    

            $adminName = 'Name';

        // if Count > 0 This Mean Database Containe Record About This Username
        if ($count > 0) {

            
            $_SESSION['loggedin'] = $username; // Register Session Name
            header('Location: dashboard.php?do=home'); // Redirect To Dashboard Page

        }


    }
    
?>

<!-- Start Login Box -->
<div class="login-box">
    <form action="<?php echo $_SERVER['PHP_SELF'] ?>" method="POST" >
        <h2>موب<span>زون</span></h2>
        <p>يرجى تسجيل الدخول للمتابعة</p>    

        <input  name="admin-user"  type="text"  placeholder="البريد الألكتروني" required>
        <input  name="admin-pass"  type="password" placeholder="كلمة السر" minlength="8" maxlength="16" required>
        <button type="submit">تسجيل دخول</button>
    </form>
</div>
<!-- End Login Box -->



<!-- Footer -->
<?php include ($admin_tpl . 'footer.inc'); ?>


