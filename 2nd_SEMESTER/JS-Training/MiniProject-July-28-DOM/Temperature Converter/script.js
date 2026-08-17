let celsius = document.getElementById("celsius");
let fahrenheit = document.getElementById("fahrenheit");
let kelvin = document.getElementById("kelvin");
let convertBtn = document.getElementById("button");
let clearBtn = document.getElementById("clear");

convertBtn.addEventListener("click", (event) => {
  let c = parseFloat(celsius.value);
  let f = parseFloat(fahrenheit.value);
  let k = parseFloat(kelvin.value);
  if (celsius.value !== "") {
    fahrenheit.value = ((c * 9) / 5 + 32).toFixed(2);
    kelvin.value = (c + 273.15).toFixed(2);
  } else if (fahrenheit.value !== "") {
    c = ((f - 32) * 5) / 9;
    celsius.value = c.toFixed(2);
    k = c + 273.15;
    kelvin.value = k.toFixed(2);
  } else if (kelvin.value !== "") {
    c = k - 273.15;
    celsius.value = c.toFixed(2);
    f = (c * 9) / 5 + 32;
    fahrenheit.value = f.toFixed(2);
  } else {
    alert("Enter a temperature to convert.");
  }
});
clearBtn.addEventListener("click", (event) => {
  celsius.value = "";
  fahrenheit.value = "";
  kelvin.value = "";
});
