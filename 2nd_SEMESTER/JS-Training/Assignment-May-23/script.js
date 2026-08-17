// Using Function to check if a number is odd or even.
let num = parseInt(prompt("Enter a number"));

function checkOddEven(number) {
  if (number % 2 === 0) {
    return "even";
  } else {
    return "odd";
  }
}

alert("The number " + num + " is " + checkOddEven(num));
