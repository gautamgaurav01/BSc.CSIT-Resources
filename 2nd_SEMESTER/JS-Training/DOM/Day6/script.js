const form = document.getElementById("userForm");
const button = document.getElementById("btn");
const nameInput = document.getElementById("name");
const ageInput = document.getElementById("age");
const addressInput = document.getElementById("address");
const result = document.createElement("p");
button.addEventListener("click", function (event) {
  event.preventDefault();
  result.innerHTML = `
    Name: ${nameInput.value}<br>
    Age: ${ageInput.value}<br>
    Address: ${addressInput.value}<br>
  `;
  form.append(result);
});
