/* //square number
function square(num) {
  return num ** 2;
}
let number = 2;
 console.log("The square of " +number +" is " + square(number)); */

/* //print number 1 to 10
function printNumber() {
  for (i = 1; i <= 10; i++) {
    console.log(i);
  }
}
 printNumber(); */

/* //multiply
function multiplyorDefault(a, b) {
  return a * b;
}
let num1 = 3;
let num2;
if (isNaN(num2)) {
  num2 = 1;
}
console.log(multiplyorDefault(num1, num2));
 */

/* //Max of three
function maxofThree(a,b,c) {
    if(a>b && a>c) {
        return a;
    }
    else if (b>c && b>a) {
        return b;
    }
    else {
        return c;
    }
}
let num1=2;
let num2=8;
let num3=4;
console.log("The greatest number amoung " +num1  +" , "+ num2 +" , " +num3 +" is " +maxofThree(num1,num2,num3));  */

/* //multiplication table 
function multTable(a,i) {
    return a*i;
}
for(i=1;i<=10;i++) {
    console.log(multTable(2,i));
} */

/* //reverse number 
function reverseNumber(a) {
  let reve = 0;
  let temp;
  while (a > 0) {
    temp = a % 10;
    reve = reve * 10 + temp;
    a = parseInt(a / 10);
  }
  return reve;
}
console.log(reverseNumber(23)); */

/* //digitcount
function digitCount(num) {
    return String(num).length;
}
console.log(digitCount(11002)); */

//function call function sum diiff mul
function sum(a, b) {
  return a + b;
}
function diff(a, b) {
  return a - b;
}
function mul(a, b) {
  return a * b;
}
function div(a, b) {
  return a / b;
}
function higherfunction(a, b, func) {
  return func(a,b);
}
console.log(higherfunction(10, 40, sum));
console.log(higherfunction(10, 40, diff));
console.log(higherfunction(10, 40, mul));
console.log(higherfunction(10, 40, div));