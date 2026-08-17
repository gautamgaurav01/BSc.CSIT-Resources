let number = [10, 20, 2, 5, 7, 9, 8, 31, 42, 99, 30, 17];
let evenSum=0;
for(let i=0; i<number.length;i++) {
if (number[i]%2==0) {
    console.log (number[i]);
    evenSum+=number[i];
}
}
console.log("The sum of even number of above is " +evenSum);