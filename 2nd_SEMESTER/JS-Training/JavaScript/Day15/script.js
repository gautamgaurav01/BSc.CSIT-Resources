/* //add sub,div,mul
function add (a,b) {
    return a+b;
}

function sub (a,b) {
    return a-b;
}

function mul (a,b) {
    return a*b;
}

function div (a,b) {
    return a/b;
}

let num1 = 6;
let num2 = 3;
console.log(num1+ " + " + num2 +" = " + add(num1,num2));
console.log(num1+ " - " + num2 +" = " + sub(num1,num2));
console.log(num1+ " x " + num2 +" = " + mul(num1,num2));
console.log(num1+ " / " + num2 +" = " + div(num1,num2)); */


/* //to check equal
function isEqual(a,b) {
    return a==b;
}


console.log(isEqual(1,1));
console.log(isEqual(1,2)); */


/* //odd even
function checkOddEven(number) {
  if (number % 2 === 0) {
    return "even";
  } else {
    return "odd";
  }
}

console.log("The number is " + checkOddEven(2));
console.log("The number is " + checkOddEven(3)); */


/* //display name 
function displayName (namee) {
    console.log(namee);
}

let namee= prompt("Enter a name");
displayName(namee);  */


//get and display name 
function getName() {
let enterName= prompt("Enter a name");
return enterName; 
}
function displayName (printName) {
    console.log(printName); 
}
let printName= getName();
displayName(printName);  