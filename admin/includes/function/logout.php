<?php 

session_start(); // Start The Session
session_unset(); // Unset The Data
session_destroy(); // Destroy The Session


header('Location: /mobzone/admin/index.php'); // Redirect To index Page

exit();