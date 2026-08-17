//maximum and minimum of an array
let number=[3,2,1,4,16,20,7,22,44,7,3,2,3]
let max = number[0];
let min = number[0];
for (let i = 1; i < number.length; i++) {
    if (number[i] > max) {
        max = number[i];
    }
    if (number[i] < min) {
        min = number[i];
    }
}
console.log("The maximum number is " + max);
console.log("The minimum number is " + min);
console.log("Difference between maximum and minimum is " + (max - min));