// Extract Numbers from Mixed Array
let input = [1, "hello", 3, true, 5];
let numbers = input.filter((item) => typeof item === "number");
console.log(numbers);
