// Loan Eligibility Checker
function checkLoan(numIncome, numExpense) {
  let bool_true = true;
  let bool_false = false;
  if (!isFinite(numIncome) || !isFinite(numExpense) || numIncome < 0 || numExpense < 0) return false;
  else return numIncome > (3 * numExpense)?bool_true:bool_false;
}
let income=Number(prompt("Enter  Income:"));
let expense=Number(prompt("Enter Expense:"));
console.log("Loan eligibility: " + checkLoan(income,expense)); 