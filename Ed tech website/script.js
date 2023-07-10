let burger = document.querySelector('.burger');
let navbar = document.querySelector('.navbar');
let rightNav = document.querySelector('.right-nav');
let navList = document.querySelector('.nav-list');



burger.addEventListener('click', ()=> {
  navList.classList.toggle('visibility-resp');
  rightNav.classList.toggle('visibility-resp');
  navbar.classList.toggle('height-nav-resp');
})