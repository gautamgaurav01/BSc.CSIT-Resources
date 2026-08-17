// console.log("hello");
// const num1 = prompt("Enter the first number");
// const num2 = prompt("Enter the second number");
// let a = parseFloat(num1);
// let b = parseFloat(num2);
// const sum = a + b;
// const diff = a - b;
// const mul = a * b;
// const div = a / b;
// console.log("sum is : " +sum );
// console.log("Difference is : " + diff);
// console.log("Multiply is : " + mul);
// console.log("Division is : " + div);
// ++a;
// console.log("Increment of first number: " + a);
// ++b;
// console.log("Increment of second number: " + b);

// let c = 5;
// let d = 5;
// console.log(c == 5 && d == 0); // && logical and true && false = false
// console.log(c == 5 || d ==0);   // || logical or true || false = true
// console.log(!(c == 0 && b == 0)); // ! logical not !(false && false) = !false = true

// console.log(c >= 5 && d < 1); // true && true => true
// console.log(b <= 2 || c > 10); // true || false => true
// console.log(!(b >= 3 && c <= 4)); // !(false && false) => !false => true

// let result = (!(c == 0 && b == 0)) ? "Condition is NOT true" : "Condition is true";
// console.log(result); // Output: Condition is NOT true

const age = prompt("Enter your age");
let a = parseInt(age);
const country = prompt("Enter your nationality");
let nation = country.toLowerCase(); // make it lowercase for consistent check
let result = (a >= 18 && nation === "nepali")? "You can Vote." : "You Cannot Vote.";
alert(result);   