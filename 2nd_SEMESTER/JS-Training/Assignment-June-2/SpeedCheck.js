//Nested Function : Speed Check
function speedCheck(speed) {
  let speedCategory = () => speed < 30 ? "Slow" : speed <= 60 ? "Average" : "Fast";
  return speedCategory();
}
console.log(speedCheck(25)); // Output: "Slow"
console.log(speedCheck(45)); // Output: "Average"
console.log(speedCheck(75)); // Output: "Fast"

