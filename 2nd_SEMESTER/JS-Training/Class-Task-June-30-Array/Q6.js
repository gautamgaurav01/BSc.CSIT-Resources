//Game Scores with Bonus
let input = [30, 55, 70, 45, 90];
let filters= input.filter(age => age >= 50);
let bonous = filters.map(num => num + 10);
console.log(bonous);