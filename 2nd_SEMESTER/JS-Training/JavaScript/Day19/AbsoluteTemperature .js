//Absolute Temperature Difference
function tempDifference(t1, t2) {
  if (!isFinite(t1) || !isFinite(t2)) return "Invalid input";
  else return  Math.abs(t1 - t2).toFixed(1);
}
let temp1 = Number(prompt("Enter temperature 1"));
let temp2 = Number(prompt("Enter temperature 2"));
console.log("Temperature difference is " +tempDifference(temp1, temp2));
