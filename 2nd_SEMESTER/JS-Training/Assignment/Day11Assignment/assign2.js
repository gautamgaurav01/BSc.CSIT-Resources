//Fibonacci Series Generator

let a = parseInt(prompt("Enter the number"));
let b = 0;
let c = 1;
let d;
let output = b + "," + c;
for (let i = 1; i <= a; i++) {
    d = b + c;
    b = c;
    c = d;
    output += "," + d;
}
alert("Fibonacci Series of " + a + " terms is: " + output);  