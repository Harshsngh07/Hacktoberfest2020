var buttons = document.querySelectorAll(".drum");


for( var i = 0; i < buttons.length; i++) {
  buttons[i].addEventListener("click", function () {
    var keyButton = this.innerHTML;
    playKeySound(keyButton);
    buttonAnimation(keyButton);
  });
}



document.addEventListener("keydown", function (e) {
  playKeySound(e.key);
  buttonAnimation(e.key);
});


function playKeySound(key) {
  switch (key) {
    case "w":
      var tom1 = new Audio("sounds/tom-1.mp3");
      tom1.play();
      break;
    case "a":
      var tom2 = new Audio("sounds/tom-2.mp3");
      tom2.play();
      break;
    case "s":
      var tom3 = new Audio("sounds/tom-3.mp3");
      tom3.play();
      break;
    case "d":
      var tom4 = new Audio("sounds/tom-4.mp3");
      tom4.play();
      break;
    case "j":
      var snare = new Audio("sounds/snare.mp3");
      snare.play();
      break;
    case "k":
      var kickBass = new Audio("sounds/kick-bass.mp3");
      kickBass.play();
      break;
    case "l":
      var crash = new Audio("sounds/crash.mp3");
      crash.play();
      break;
    default:
      console.log(key);
  }
}


function buttonAnimation(key) {
  var activeButton = document.querySelector("." + key);
  activeButton.classList.toggle("pressed");
  setTimeout(function () {
    activeButton.classList.toggle("pressed");
  },100);
}
