// //program to find the sum of digits of a number until it becomes a single digit
// let num = parseFloat(prompt("Enter any positive number to find sum of digits"));

// do {
//     let sum = 0;
//     let n = Math.floor(num);
//     while (n > 0) {
//         sum += n % 10;
//         n = Math.floor(n / 10);
//     }
//     num = sum;
// } while (num >= 10);

// console.log("Single digit sum is: " + num);
// alert("Single digit sum is: " + num);


//Count How Many Times Digit 5 Appears in a Number
let num = parseInt(
    prompt("Enter a positive number to count how many times digit 5 appears")
);
let count = 0;
let digit;

if (num > 0) {
    do {
        digit = num % 10;
        if (digit === 5) {
            count++;
        }
        num = parseInt(num / 10);
    } while (num > 0);
}

console.log("The digit 5 appears " + count + " times in the number.");
alert("The digit 5 appears " + count + " times in the number.");