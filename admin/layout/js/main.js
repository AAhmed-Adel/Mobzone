




// Admin Menu ==============
$('.admin-tabs-list li').click(function () {
    // Add Active Class To Avtive Link
    $(this).addClass('admin-active-tab').siblings().removeClass('admin-active-tab');

    // Hide All Divs
    $('.admin-taps-content > .hide-big-div').hide();
    // Show Div Connected With This Link
    $('.' + $(this).data('class')).show();
    
});


// Tabs Menu ==============
$('.form-tabs-list li').click(function () {
    // Add Active Class To Avtive Link
    $(this).addClass('form-active-tab').siblings().removeClass('form-active-tab');

    // Hide All Divs
    $('.form-taps-content > div').hide();
    // Show Div Connected With This Link
    $('.' + $(this).data('class')).show();
    
});


$('.tabs-list li').click(function () {
    // Add Active Class To Avtive Link
    $(this).addClass('active-tab').siblings().removeClass('active-tab');

    // Hide All Divs
    $('.taps-content > div').hide();
    // Show Div Connected With This Link
    $('.' + $(this).data('class')).show();
    
});



// Start Go Top Button =============
const goTopButton = document.querySelector('.gotop');

window.onscroll = function () {

    'use strict';

    if(window.scrollY >= 900) {
        
        goTopButton.classList.add('active-gotop');
    
    } else {

        goTopButton.classList.remove('active-gotop');
    }

}

goTopButton.onclick = function () {

    window.scroll(0,0);

}
