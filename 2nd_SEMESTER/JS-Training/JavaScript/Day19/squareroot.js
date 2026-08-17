//√ Square Root Checker
function squareRoot(num) {
  if (!isFinite(num) || num < 0) return false;
  else return Math.sqrt(num);
}
let sq = Number(prompt("Enter number to find square root"));
console.log("Square root of " + sq + " is " + squareRoot(sq));
