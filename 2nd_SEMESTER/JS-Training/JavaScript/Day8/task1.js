//taking number from input and multiply all its digits repeadly until result becomes a single digits using while loop
let num = parseInt(prompt("Enter a positive number to find product of digits"));
let product = 1;
let digit;
while(num >= 10) {
    product = 1;
    let n = Math.floor(num);
    while (n > 0) {
        digit = n % 10;
        product *= digit;
        n = Math.floor(n / 10);
    }
    num = product;
}
console.log("Product is " +product);
alert("Product is " +product);