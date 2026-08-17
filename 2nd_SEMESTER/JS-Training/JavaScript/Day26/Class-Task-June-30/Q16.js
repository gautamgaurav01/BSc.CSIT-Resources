//Count Specific Number Frequency

let scores = [5, 2, 5, 6, 5];
let targetScore = 5;
let count = scores.filter((score) => score === targetScore).length;
console.log(`${targetScore} occurs ${count} times`);