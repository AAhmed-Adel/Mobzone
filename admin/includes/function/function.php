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
** Count Number of Items Function v1.0
** Function To Count Number Of Items Rows
** $item  = The Item To Count 
** $table = The Table To Choose From
*/

function countItems($item, $table) {

    global $conn;
    
    $countStmt = $conn->prepare(" SELECT COUNT($item) FROM $table ");

    $countStmt->execute();

    return $countStmt->fetchColumn();

}



/*
** Get Latest Records Function v1.0
** Function To Get Latest Item From Database [Mobile, News]
** $select = Select The Field
** 
*/


function getLatest($select, $table, $order, $limit = 4) {

    global $conn;

    $latestStmt = $conn ->prepare("SELECT $select FROM $table ORDER BY $order DESC LIMIT $limit");

    $latestStmt->execute();

    $rows = $latestStmt->fetchAll();

    return $rows;

}










