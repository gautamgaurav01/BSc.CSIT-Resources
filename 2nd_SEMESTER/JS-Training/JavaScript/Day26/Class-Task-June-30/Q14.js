//Product of All Elements
let numbers = [1, 2, 3, 4];
let product = numbers.reduce((accumulator, currentValue) => accumulator * currentValue, 1);
console.log(`Product: ${product}`);