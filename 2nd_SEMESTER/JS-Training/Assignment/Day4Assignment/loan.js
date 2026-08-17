const age = parseInt(prompt("Enter your age:"));
const income = parseFloat(prompt("Enter your monthly income:"));
const credit = parseInt(prompt("Enter your credit score:"));

let loanResult =
  age >= 25 && age <= 60 && income >= 30000 && credit > 650
    ? "Loan Approved."
    : age >= 25 && age <= 60 && income >= 30000
    ? "Good income and age, but poor credit score."
    : age >= 25 && age <= 60
    ? "Meets age only."
    : "Not eligible for loan.";

alert(loanResult);

