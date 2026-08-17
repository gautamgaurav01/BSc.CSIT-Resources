const form = document.getElementById("userForm");
const button = document.getElementById("btn");
button.addEventListener("click", function (event) {
  event.preventDefault(); 
  const num1 = parseFloat(document.getElementById("num1").value);
  const num2 = parseFloat(document.getElementById("num2").value );
  let createEl = document.createElement("p");
  createEl.innerText = `Sum of ${num1} and ${num2} is ${num1+num2}`;
  form.append(createEl);
});