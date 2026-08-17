//Expensive Item find

let input = [199, 499, 1299, 850, 350];
let expensive = input.reduce((accumulator, currentValue) =>
  currentValue > accumulator ? currentValue : accumulator
);
console.log(`The maximum price is ${expensive}`);
