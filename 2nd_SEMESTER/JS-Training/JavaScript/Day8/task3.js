//finding the digits (0-9) that occurs most frequently in the number
let num = Number(prompt("Enter a number"));
let d= 0;
let maxCount =0;
let maxDigits =0;

while (d<=9) {
    let temp = num;
    let count = 0;
    while (temp>0) {
        let digits = temp % 10;
        if (digits == d) {
            count ++;
        }
        temp = parseInt (temp/10);
    }
        if (count > maxCount) {
            maxCount = count;
            maxDigits = d;
        }
        d++;
    
}

console.log (" Maximum repeat number is " + maxDigits + " which is repated " + maxCount + " times ");