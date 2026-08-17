let number = [10, 20, 2, 5, 7, 9, 8, 31, 42, 99, 30, 17];
let input = Number(prompt("Enter a number:"));
let found = false;
for (let i = 0; i < number.length; i++) {
  if (input == number[i]) {
    found = true;
    break; 
  }
}
if (found) {
  console.log("The number " + input + " is in array");
} else {
  console.log("The number " + input + " isn't in array");
}
