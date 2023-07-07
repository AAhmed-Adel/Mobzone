<?php 


/*
 ** Function For Get The Title Of The Page
 
 */

function getTitle() {

    global $pageTitle;

    if (isset($pageTitle)) {

        echo $pageTitle;

    } else {

        echo 'Default';

    }

}






/*
** Get Latest Records Function v1.0
** Function To Get Latest Item From Database [Mobile, News]
** $select = Select The Field
** getLatestNews() For Latest News
** getLatestMobile() For Latest Mobile
*/

function getLatest($select, $table, $order, $limit = 4) {

    global $conn;

    $latestStmt = $conn ->prepare("SELECT $select FROM $table ORDER BY $order DESC LIMIT $limit");

    $latestStmt->execute();

    $rows = $latestStmt->fetchAll();

    return $rows;

}






/*
** Get Records Function v1.0
** Function To Get Latest Item From Database [Mobile, News]
** $selectMob = Select Mobile Name Field
** $Mobtable  = The Mobile Tab
*/
function getInfo($select, $table) {

    global $conn;

    $InfoStmt = $conn ->prepare("SELECT $select FROM $table");

    $InfoStmt->execute();

    $rows = $InfoStmt->fetchAll();

    return $rows;

}






/*
** Get Latest Records Function v1.0
** Function To Get Latest Item From Database [Mobile, News]
** $select = Select The Field
** getLatestNews() For Latest News
** getLatestMobile() For Latest Mobile
*/

function getLatestAll($select, $table, $order) {

    global $conn;

    $latestStmt = $conn ->prepare("SELECT $select FROM $table ORDER BY $order DESC");

    $latestStmt->execute();

    $rows = $latestStmt->fetchAll();

    return $rows;

}








// function addToFav($selectUser, $selectMobile) {
//     global $conn;


//     $sql = "INSERT INTO `favorite`(`Username`, `mob_name`)
//     VALUES ('$selectUser','$selectMobile')";

//     $conn->prepare($sql)->execute();

// }

// function deleteFav($selectMobile) {
//     global $conn;


//     $sqlDelete = "DELETE FROM favorite WHERE mob_name = '$selectMobile'";
//     $conn->prepare($sqlDelete)->execute();

// }