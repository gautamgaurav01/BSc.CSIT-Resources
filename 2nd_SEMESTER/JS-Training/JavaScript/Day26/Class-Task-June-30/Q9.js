//Failing Students Alert

let marks = [70, 55, 30, 85];
let hasFailed = marks.some((mark) => mark < 40);
if (hasFailed) {
  console.log("There is at least one failed student.");
} else {
  console.log("All students passed the exam.");
}
