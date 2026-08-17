let username = prompt("Enter to check first and last digit");
let first =(name)=> +name.charAt(0);
let last =(name)=> +name.charAt(name.length-1);
console.log("The first character is " + first(username) +" and last character is " + last(username));