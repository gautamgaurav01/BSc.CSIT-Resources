//Restaurent Billing with Vat
let input =[100,200,150];
let vat = input.map(num => num * (13/100) +num);
let reduced= vat.reduce((accumulator, currentValue) => accumulator + currentValue, 0);
console.log(`Total bill is : ${reduced}`); 
