//finding the digits (0-9) that occurs most least in the number
let num = parseInt (prompt ("Enter a number"));
let d= 0;
let minCount =Infinity;
let minDigits =0;

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
        if (count>0 && count < minCount) {
            minCount = count;
            minDigits = d;
        }
        d++;
    
}

console.log (" Minimum repeat number is " + minDigits + " which is repated " + minCount + " times ");