
// NavBar Toggle Button ===============
const burger = document.querySelector('.burger'),
      nav = document.querySelector('.menu');

burger.addEventListener('click', function() {
    
    'use strict';

    this.classList.toggle('active-burger');

    nav.classList.toggle('nav-active');

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


// favorite Button ===============
// $('.click').click(function() {
  
//     if ($('.click span').hasClass('fa-heart')) {


//             $('.click').removeClass('active-1')
//         setTimeout(function() {
//             $('.click').removeClass('active-2')
//         }, 30)
//             $('.click').removeClass('active-3')
//         setTimeout(function() {
//             $('.click span').removeClass('fa-heart')
//             $('.click span').addClass('fa-heart-o')
//         }, 15)


//     } else {


//         $('.click').addClass('active-1')
//         $('.click').addClass('active-2')
//         setTimeout(function() {
//             $('.click span').addClass('fa-heart')
//             $('.click span').removeClass('fa-heart-o')
//         }, 150)
//         setTimeout(function() {
//             $('.click').addClass('active-3')
//         }, 150)
//         $('.info').addClass('info-tog')
//         setTimeout(function(){
//             $('.info').removeClass('info-tog')
//         },1000)


//     }

// })


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





// Start Slider ==============

// Get Sider Items | Array.from [ES6 Feature]
var sliderImages = Array.from(document.querySelectorAll('.slider-container img'));

// Get Number Of Slides
var slidesCount = sliderImages.length;


// Set Current Slide 
var currentSlide = 1;

// Slide Number Element 
var slideNumberElement = document.getElementById('slider-number');

// Previous and Next Buttons
var nextButton = document.getElementById('next');
var prevButton = document.getElementById('prev');

// Handle Click On Previous and Next Buttons
nextButton.onclick = nextSlide;
prevButton.onclick = prevSlide;

// Create The Main Ul Element
var indicatorElements = document.createElement('ul');

// Set Id On Created Ul Element 
indicatorElements.setAttribute('id', 'indicator-ul');

// Create List Item Baesd On Slider Count
for (var i = 1; i <= slidesCount; i++) {

    // Create The Li
    var indicatorElementLi = document.createElement('li');
    
    // Set Custom Attribute On Li
    indicatorElementLi.setAttribute('data-index', i);

    // Set Item Content
    indicatorElementLi.appendChild(document.createTextNode(i));

    // Append Li To The Main Ul
    indicatorElements.appendChild(indicatorElementLi);

}



// Add The Created Ul To The Bage
document.getElementById('indicators').appendChild(indicatorElements);

// Get The New Created Ul 
var indicatorElementsUl = document.getElementById('indicator-ul');

// Get Indicators Items | Array.from [ES6 Feature]
var indicatorsItem = Array.from(document.querySelectorAll('#indicator-ul li'));

// Loop Through All Bullets Items 
for (var i = 0; i < indicatorsItem.length; i++) {

    indicatorsItem[i].onclick = function () {

        currentSlide = parseInt(this.getAttribute('data-index'));
        theChecker();

    }

}


// Trigger The The Checker Function 
theChecker();



function nextSlide() { 

    if (nextButton.classList.contains('disabeld')) {

        // Do Nothing
        return false;

    } else {
        
        currentSlide++;
        theChecker();
    }

}

function prevSlide() {

    if (prevButton.classList.contains('disabeld')) {

        // Do Nothing
        return false;

    } else {
        
        currentSlide--;
        theChecker();
    }

}


// The Checker Function
function theChecker() {

    // Set The Slider Number
    slideNumberElement.textContent =  (currentSlide) + ' / ' + (slidesCount);

    removeAllActive();

    // Set Class Active On Current Slide
    sliderImages[currentSlide - 1].classList.add('active');

    // Set Active Class On Current Indicators Item
    indicatorElementsUl.children[currentSlide - 1].classList.add('active');


    // Check If Current Slide is The First
    if (currentSlide == 1) {

        // Add Disabeld Class on Previous Button
        prevButton.classList.add('disabeld');

    } else {

        // Remove Disabeld Class on Previous Button
        prevButton.classList.remove('disabeld');

    }

        // Check If Current Slide is The Last
        if (currentSlide == slidesCount) {

            // Add Disabeld Class on Previous Button
            nextButton.classList.add('disabeld');
    
        } else {
    
            // Remove Disabeld Class on Previous Button
            nextButton.classList.remove('disabeld');
    
        }


}


// Remove All Active Classes From Images And Indicators Bullets
function removeAllActive() {

    // Loop Through Images
    sliderImages.forEach(function (img) {

        img.classList.remove('active');

    });

    // Loop Through Indicators Item
    indicatorsItem.forEach(function (bullets) {

        bullets.classList.remove('active');

    });
}



// fdsf 


















































































// Second Start Slider ==============

// Get Sider Items | Array.from [ES6 Feature]
var secSliderImages = Array.from(document.querySelectorAll('.sec-slider-container img'));

// Get Number Of Slides
var secSlidesCount = secSliderImages.length;


// Set Current Slide 
var secCurrentSlide = 1;

// Slide Number Element 
var secSlideNumberElement = document.getElementById('sec-slider-number');

// Previous and Next Buttons
var secNextButton = document.getElementById('sec-next');
var secPrevButton = document.getElementById('sec-prev');

// Handle Click On Previous and Next Buttons
secNextButton.onclick = secNextSlide;
secPrevButton.onclick = secPrevSlide;

// Create The Main Ul Element
var secIndicatorElements = document.createElement('ul');

// Set Id On Created Ul Element 
secIndicatorElements.setAttribute('id', 'sec-indicator-ul');

// Create List Item Baesd On Slider Count
for (var s = 1; s <= secSlidesCount; s++) {

    // Create The Li
    var secIndicatorElementLi = document.createElement('li');
    
    // Set Custom Attribute On Li
    secIndicatorElementLi.setAttribute('data-index', s);

    // Set Item Content
    secIndicatorElementLi.appendChild(document.createTextNode(s));

    // Append Li To The Main Ul
    secIndicatorElements.appendChild(secIndicatorElementLi);

}



// Add The Created Ul To The Bage
document.getElementById('sec-indicators').appendChild(secIndicatorElements);

// Get The New Created Ul 
var secIndicatorElementsUl = document.getElementById('sec-indicator-ul');

// Get Indicators Items | Array.from [ES6 Feature]
var secIndicatorsItem = Array.from(document.querySelectorAll('#sec-indicator-ul li'));

// Loop Through All Bullets Items 
for (var s = 0; s < secIndicatorsItem.length; s++) {

    secIndicatorsItem[s].onclick = function () {

        secCurrentSlide = parseInt(this.getAttribute('data-index'));
        secChecker();

    }

}


// Trigger The The Checker Function 
secChecker();



function secNextSlide() { 

    if (secNextButton.classList.contains('sec-disabeld')) {

        // Do Nothing
        return false;

    } else {
        
        secCurrentSlide++;
        secChecker();
    }

}

function secPrevSlide() {

    if (secPrevButton.classList.contains('sec-disabeld')) {

        // Do Nothing
        return false;

    } else {
        
        secCurrentSlide--;
        secChecker();
    }

}


// The Checker Function
function secChecker() {

    // Set The Slider Number
    secSlideNumberElement.textContent =  (secCurrentSlide) + ' / ' + (secSlidesCount);

    secRemoveAllActive();

    // Set Class Active On Current Slide
    secSliderImages[secCurrentSlide - 1].classList.add('sec-active');

    // Set Active Class On Current Indicators Item
    secIndicatorElementsUl.children[secCurrentSlide - 1].classList.add('sec-active');


    // Check If Current Slide is The First
    if (secCurrentSlide == 1) {

        // Add Disabeld Class on Previous Button
        secPrevButton.classList.add('sec-disabeld');

    } else {

        // Remove Disabeld Class on Previous Button
        secPrevButton.classList.remove('sec-disabeld');

    }

        // Check If Current Slide is The Last
        if (secCurrentSlide == secSlidesCount) {

            // Add Disabeld Class on Previous Button
            secNextButton.classList.add('sec-disabeld');
    
        } else {
    
            // Remove Disabeld Class on Previous Button
            secNextButton.classList.remove('sec-disabeld');
    
        }


}


// Remove All Active Classes From Images And Indicators Bullets
function secRemoveAllActive() {

    // Loop Through Images
    secSliderImages.forEach(function (secimg) {

        secimg.classList.remove('sec-active');

    });

    // Loop Through Indicators Item
    secIndicatorsItem.forEach(function (secBullets) {

        secBullets.classList.remove('sec-active');

    });
}