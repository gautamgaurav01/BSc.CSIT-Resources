const form = document.getElementById("userForm");
const button = document.getElementById("btn");

button.addEventListener("click", function (event) {
  event.preventDefault();
  const nameInput = document.getElementById("name");
  const phoneInput = document.getElementById("phone");
  const emailInput = document.getElementById("email");
  const passwordInput = document.getElementById("password");
  const confirmPasswordInput = document.getElementById("confirmPassword");
  const name = nameInput.value;
  const phone = phoneInput.value;
  const email = emailInput.value;
  const password = passwordInput.value;
  const confirmPassword = confirmPasswordInput.value;
  if (name === "" || phone === "" || email === "" || password === "" || confirmPassword === "") {
    alert("Please fill in all the fields.");
    return;
  }
  if (password !== confirmPassword) {
    alert("Passwords do not match.");
    return;
  }
  const createEl = document.createElement("p");
  createEl.innerText = `Name: ${name}\nPhone: ${phone}\nEmail: ${email}`;
  form.append(createEl);
  nameInput.value = "";
  phoneInput.value = "";
  emailInput.value = "";
  passwordInput.value = "";
  confirmPasswordInput.value = "";
});
