let num = parseFloat(prompt("Enter any positive number to find sum of digits"));

while (num >= 10) {
  let sum = 0;
  let n = Math.floor(num);
  while (n > 0) {
    sum += n % 10;
    n = Math.floor(n / 10);
  }
  num = sum;
}
console.log("Single digit sum is: " + num);
alert("Single digit sum is: " + num);