// Age Validator
function validateAge(numAge) {
  return isFinite(numAge) && numAge >= 0 && numAge <= 120;
}
let age =Number(prompt("Enter a age:"))
console.log(validateAge(age));