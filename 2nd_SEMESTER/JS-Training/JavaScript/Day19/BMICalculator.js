function calculateBMI(weight, height) {
  if (!isFinite(weight) || !isFinite(height) || weight <= 0 || height <= 0) return false;
  else return (weight / (height * height)).toFixed(1);
}
let w = Number(prompt("Enter weight in kg"));
let h = Number(prompt("Enter height in meters"));
console.log("BMI calculated as " + calculateBMI(w, h));
