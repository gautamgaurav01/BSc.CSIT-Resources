let num = "5";
console.log(num.padStart(3, "0")); // "005"
console.log(num.padEnd(3, "0")); // "500" 

let arr = [0,1,  2, 3, 4]
arr.splice(2, 0, 99); // Replace 1 element at index 2 with 99
console.log(arr);     // [0, 1, 99, 2, 3, 4]

//forEach method to iterate over an array
const fruits = ["apple", "banana", "cherry"];
fruits.forEach((fruit, index) => {
  console.log(`${index+1}. ${fruit}`);
});   

//map() 
const numbers = [1, 2, 3, 4, 5];
const doubled = numbers.map(num => num * 2);
console.log(numbers); // [1, 2, 3, 4, 5]
console.log(doubled); // [2, 4, 6, 8, 10]

//filter()
const ages = [18, 20, 15, 30, 25];
const adults = agesbo;
console.log(adults); // [18, 20, 30, 25] 

//reduce()
const numbers2 = [1, 2, 3, 4, 5];
const sum = numbers2.reduce((accumulator, currentValue) => accumulator + currentValue, 0);
console.log(sum); // 15

//reduceRight()
const names =["v", "a","r","u","a" ,"G"]
const reversedName = names.reduceRight((accumulator, currentValue) => accumulator + currentValue, "");
console.log(reversedName);//"Gaurav"

//every()
const numbers1 = [2, 4, 6, 8];
const allEven = numbers1.every(num => num % 2 === 0);
console.log(allEven); // true

//some()
const numbers3 = [1, 2, 3, 4, 5]; 
const hasEven = numbers3.some(num => num % 2 === 0);
console.log(hasEven); // trued