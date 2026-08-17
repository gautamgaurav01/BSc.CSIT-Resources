//finding the first digit from right that is not 7
let num = parseInt(prompt("Enter a positive number to find first digit from right that is not 7"));
let firstNonSeven = 0;
while (num > 0) {
    let digit = num % 10;
    if (digit !== 7) {
        firstNonSeven = digit;
        break;
    }
    num = Math.floor(num / 10);
}
console.log(firstNonSeven);
alert(firstNonSeven);