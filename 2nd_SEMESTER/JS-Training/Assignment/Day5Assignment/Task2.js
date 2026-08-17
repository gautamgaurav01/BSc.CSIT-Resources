let a = parseFloat(prompt("Enter first number:"));
let b = parseFloat(prompt("Enter second number:"));
let c = parseFloat(prompt("Enter third number:"));

if (isNaN(a) || isNaN(b) || isNaN(c)) {
  alert("Invalid input! Please enter valid numbers.");
} else {
  let greatest = a;
  if (b > greatest) {
    greatest = b;
  }
  if (c > greatest) {
    greatest = c;
  }

  let smallest = a;
  if (b < smallest) {
    smallest = b;
  }
  if (c < smallest) {
    smallest = c;
  }

  alert("Greatest is " + greatest + " and Smallest is " + smallest);
}
