document.getElementById("myForm").onsubmit = function (event) {
  if (!validateForm()) {
    event.preventDefault();
  }
};
function validateForm() {
  const email = document.getElementById("email").value;
  const password = document.getElementById("password").value;
  if (!email.includes("@") || !email.includes(".")) {
    alert("Please enter a valid email address");
    return false;
  }
  if (password.length < 6) {
    alert("Password must be at least 6 characters");
    return false;
  }
  return true;
}
