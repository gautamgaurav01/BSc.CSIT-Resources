//Reverse a Name

let input = "coding";
let splited = input.split("");
let reversed = splited.reduceRight((acc, char) => acc + char, "");
console.log(reversed); 
