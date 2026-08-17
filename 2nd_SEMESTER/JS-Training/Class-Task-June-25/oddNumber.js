let number = [10, 20, 2, 5, 7, 9, 8, 31, 42, 99, 30, 17];
let oddSum=0;
for(let i=0; i<number.length;i++) {
if (number[i]%2!==0) {
    console.log (number[i]);
    oddSum+=number[i];
}
}
console.log("The sum of odd number of above is " +oddSum);
