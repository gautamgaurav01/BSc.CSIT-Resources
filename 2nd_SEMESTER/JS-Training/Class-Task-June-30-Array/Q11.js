//Meal Calorie Calculator
let input = [300, 450, 500];
let totalCalories = input.reduce((accumulator, currentValue) => accumulator + currentValue, 0);
console.log(`Total calories: ${totalCalories}`);
