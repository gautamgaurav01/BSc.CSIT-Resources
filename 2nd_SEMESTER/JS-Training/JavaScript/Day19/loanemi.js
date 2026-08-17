function calculateEMI(P, R, T) {
  let r = R / (12 * 100);
  let n = T * 12;
  // EMI formula
  let emi = Math.floor((P * r * Math.pow(1 + r, n)) / (Math.pow(1 + r, n) - 1));
  return emi;
}
let principal = parseFloat(prompt("Enter principal"));
let annualRate = parseFloat(prompt("Enter annualRate"));
let tenureYears = parseFloat(prompt("Enter tenureYears"));
console.log("EMI is " + calculateEMI(principal, annualRate, tenureYears));