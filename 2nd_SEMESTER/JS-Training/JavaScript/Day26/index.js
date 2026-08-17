//reverse
let number =[1,3,4,5,6];
console.log(number.reverse());
let username="varuaG";
let split = username.split("");
console.log(split);

let reversed=split.reverse();
console.log(reversed);

console.log(reversed.join(""));

//sort 
let num =[1,4,6,3,9,10,8,12,56,87,1,4,2];
// console.log(num.sort((a,b)=>a-b));
// console.log(num.sort((a,b)=>-a+b));

console.log(num.toString());

let user = "Gaurav"
console.log(Array.from(user));
console.log(Array.isArray(user));
console.log(Array.of(1,2,3)) ; 

let fruits=["cherry" ,"Cherry", "banana", "apple", "grapes"];

let frt1=fruits[0];
let frt2=fruits[1];
let frt3=fruits[3];
console.log(frt1.charCodeAt(0));
console.log(frt2.charCodeAt(0));
console.log(frt3.charCodeAt(0));
console.log(fruits.sort())