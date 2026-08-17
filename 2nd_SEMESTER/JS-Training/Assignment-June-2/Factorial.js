//Recursive Factorial
let factorialRecursive = (n) => (n <= 1 ? 1 : n * factorialRecursive(n - 1));
console.log(factorialRecursive(5)); // Output: 120

