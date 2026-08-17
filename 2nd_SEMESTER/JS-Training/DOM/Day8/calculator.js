let display = document.getElementById("display");
let buttons = document.querySelectorAll("button");
buttons.forEach(function (button) {
  button.addEventListener("click", function () {
    let value = button.textContent;
    if (value === "=") {
      try {
        display.value = eval(display.value);
      }
       catch (error) {
        display.value = "Error";
      }
    } 
    else if (value === "C") {
      display.value = "";
    } else {
      display.value += value;
    }
  });
});
