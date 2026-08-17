//Nested Function: Salary Calculator

function calculateSalary(hoursWorked) {
  let overtimePay = (hours) => hours * 15;
  return hoursWorked <= 40 ? hoursWorked * 10 : 400 + overtimePay(hoursWorked - 40);
}
console.log(calculateSalary(45)); // Output: 475

