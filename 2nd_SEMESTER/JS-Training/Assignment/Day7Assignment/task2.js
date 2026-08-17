//Count How Many Times Digit 5 Appears in a Number
//program using a while loop and if-else statements to count how many times the digit 5 appears in a given positive number.
let num = parseInt(
  prompt("Enter a positive number to count how many times digit 5 appears")
);
let count = 0;
let digit;
while (num > 0) {
  digit = num % 10;
  if (digit === 5) {
    count++; 
  }
  num = parseInt(num / 10);
}
console.log("The digit 5 appears " + count + " times in the number.");
alert("The digit 5 appears " + count + " times in the number.");