/* //function expression
let printName = function (username) {
  console.log(username);
};
printName("Gaurav");

//arrow function
let displayName = (username) => {
  console.log(username);
};
displayName("Gaurav") 


//Immediately Invoked Function Expression (IIFE)
(function (username) {
  console.log(username);
})("Gaurav");

(function (a,b) {
    console.log(a+b)
})(2,2); */

/* //Sum of digits //arrow function
let sumOfDigits = (n) => {
  let sum = 0;
  while (n > 0) {
    let digit = n % 10;
    sum += digit;
    n = Math.floor(n / 10);
  }
  return sum;
};

console.log("Sum of digits:", sumOfDigits(1234)); */


/* //count of even number //IIFE

(function (start, end) {
  let count = 0;
  for (let i = start + 1; i < end; i++) {
    if (i % 2 === 0) {
      count++;
    }
  }
  console.log("Even numbers between " +start + " and " +end + " is "  +count);
})(5, 12); */


/* // Basic Salary //Function expression
let calculateTotalSalary =function(basicSalary, extraHours) {
  return basicSalary + extraHours * 50;
}
console.log("Total salary:", calculateTotalSalary(10000, 5)); */
