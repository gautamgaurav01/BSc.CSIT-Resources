const password = document.getElementById("password");
const strengthText = document.getElementById("strength-text");

function hasUpperCase(str) {
  for (let i = 0; i < str.length; i++) {
    let code = str.charCodeAt(i);
    if (code >= 65 && code <= 90) return true;
  }
  return false;
}

function hasNumber(str) {
  for (let i = 0; i < str.length; i++) {
    let code = str.charCodeAt(i);
    if (code >= 48 && code <= 57) return true;
  }
  return false;
}

function hasSpecialChar(str) {
  const specialChars = "!@#$%^&*()_+[]{}|;:',.<>?/~`-=";
  for (let i = 0; i < str.length; i++) {
    if (specialChars.includes(str[i])) return true;
  }
  return false;
}

password.addEventListener("input", () => {
  let pass = password.value;
  let strength = 0;

  if (pass.length >= 6) strength++;
  if (hasUpperCase(pass)) strength++;
  if (hasNumber(pass)) strength++;
  if (hasSpecialChar(pass)) strength++;

  if (pass.length === 0) {
    strengthText.textContent = "";
    strengthText.style.color = "black";
  } else if (strength <= 1) {
    strengthText.textContent = "Weak";
    strengthText.style.color = "red";
  } else if (strength === 2 || strength === 3) {
    strengthText.textContent = "Medium";
    strengthText.style.color = "orange";
  } else {
    strengthText.textContent = "Strong";
    strengthText.style.color = "green";
  }
});
