//Odd Number Skipper

let num = Number(prompt("Enter a number:"));
let i = 0;

while (i <= num) {
    if (i % 2 !== 0) {
        i++;
        continue;
    }
    console.log(i);
    i++;
}