//Bank Interest Calculator
function calculateInterest(P, r, n) {
  return  P * Math.pow(1 + r / 100, n).toFixed(2);
}
let p = parseFloat(prompt("Enter principal"));
let rate =parseFloat( prompt("Enter rate"));
let time = parseFloat(prompt("Enter years"));
console.log("Final amount after " + time+ " years at " + rate + "% is " +calculateInterest(p, rate, time));