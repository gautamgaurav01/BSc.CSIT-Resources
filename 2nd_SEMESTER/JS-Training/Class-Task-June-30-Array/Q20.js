//Remove Duplicate Orders

let numbers= [1, 2, 2, 3, 4, 4, 5];
let uniqueNumbers = numbers.filter((item, index) => numbers.indexOf(item) === index);
console.log(uniqueNumbers);
