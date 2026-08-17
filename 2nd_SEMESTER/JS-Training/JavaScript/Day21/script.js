/* let username ="Gaurav Gautam";
console.log(username.length);

console.log(username.charAt(0));
console.log(username.charCodeAt(1));
console.log(username.toLowerCase());
console.log(username.toUpperCase());
console.log(username.split(" "));
let nameValue= "G,a,u,r,a,v";
console.log(nameValue.trim(" "));
console.log(nameValue.split(","));
let splitString= nameValue.split(",");
console.log(splitString[0]);

//string manipulation methods
let str1= "Nepathya";
let str2 = "College";
console.log(str1.concat(" ", str2));
console.log(str1.slice(2,5)); 
console.log(str1.substring(2,5)); 

let district="Gulmi";
console.log(district.lastIndexOf("i"));  */


let message = "Hello Everyone ! I am from Kaligandaki Gulmi";
console.log(message.replaceAll(" ","-"));

let country="Nepal";
country = country.trim();
let len= country.length;
if (country.slice(0,1).toUpperCase() =="A" && country.slice(len-1,len).toUpperCase()=="A") {
console.log(country + " is start and end with A letter");
}
else {
    console.log (country + " is not start and end with A letter");
}

 