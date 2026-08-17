//Number Object

let num1 = 123;
let num2 = Number("123");

//properties:
// MAX_VALUE
// MIN_VALUE
// POSITIVE_INFINITY
// NEGATIVE_INFINITY
// NaN
// EPSILON


console.log(Number.MAX_VALUE);
console.log(Number.MIN_VALUE);
console.log(Number.POSITIVE_INFINITY);
console.log(Number.NEGATIVE_INFINITY);
console.log(Number.NaN);
console.log(Number.EPSILON);



//methods:
/*
isNaN()
isFinite()
isInteger()
parseInt()
parseFloat()
*/

console.log(isNaN("Gaurav"));
console.log(isFinite(2789098876675487));
console.log(Number.isInteger(10.5));
console.log(parseFloat("10.33"));
console.log(parseInt("10.33"));