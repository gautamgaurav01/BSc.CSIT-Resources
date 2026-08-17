//Grade Calculator
function calculateGrade(score) {
  let bool_false= false;
  if (!isFinite(score) || score < 0 || score > 100) return bool_false;
  else if (score >= 80) return "A";
  else if (score >= 60) return "B";
  else if (score >= 40) return "C";
  else if (score >= 20) return "D";
  else return "F";
}
let score = Number(prompt("Enter score (0-100)"));
console.log("Score " + score + " corresponds to grade " + calculateGrade(score));

