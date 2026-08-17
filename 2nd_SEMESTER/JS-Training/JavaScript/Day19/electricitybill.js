//Electricity Bill Calculator
function calculateBill(units) {
  return isNaN(units) || units < 0 ? "Invalid input" :
    units <= 100 ? units * 5 :
    units <= 200 ? 100 * 5 + (units - 100) * 7 :
    100 * 5 + 100 * 7 + (units - 200) * 10;
}
let units=Number(prompt("Enter a units"));
console.log("Electricity bill for " +units +" units is "  +calculateBill(units));