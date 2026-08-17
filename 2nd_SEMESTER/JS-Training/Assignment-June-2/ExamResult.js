//Nested Function with Conditions: Exam Result
function examResult(marks1, marks2) {
  let totalMarks = () => marks1 + marks2;
  return totalMarks() >= 50 ? "Pass" : "Fail";
}

console.log(examResult(30, 25)); // Output: Pass
console.log(examResult(20, 25)); // Output: Fail

