let num1 = parseFloat(prompt("Enter a number to check if it's odd or even:"));

if (isNaN(num1)) {
  alert("Invalid input! Please enter a valid number.");
} else {
  if (num1 % 2 === 0) {
    alert(num1 + " is even.");
  } else {
    alert(num1 + " is odd.");
  }
}
