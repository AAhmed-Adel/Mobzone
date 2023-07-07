<!-- Header -->
<?php 

    $pageTitle = 'موبزون - مراجعات الهواتف وكل ما يخصها'; // Page Title
    include   ('int.php');


?>  

<!-- body Head -->
<?php include ($template . 'bodyhead.inc'); ?>




<?php



    /*  include Latest Phones  */
    include ($template . 'latest-phones.inc');
    /*  include Latest Phones  */


   

    /*  include Latest News  */
    include ($template .'latest-news.inc');
    /*  include Latest News  */

?>




<!-- Footer -->
<?php include ($template . 'footer.inc'); ?>


