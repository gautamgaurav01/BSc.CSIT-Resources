//print multiples of 3 from 1 to that number, stopping early if a multiple of 5 
let num = parseInt(prompt("Enter a number: "));
let i = 1;
while (i <= num) {
    if (i % 3 === 0) {
        if (i % 5 === 0) {
            break;
        }
        console.log(i);
    }
    i++;
} 