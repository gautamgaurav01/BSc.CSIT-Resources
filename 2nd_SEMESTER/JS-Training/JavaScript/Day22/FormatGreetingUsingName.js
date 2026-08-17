//Return a greeting in the format: "Hello, NAME!" with name in uppercase.
//Use .toUpperCase() and .concat().
let formatGreeting = (name) => "Hello, ".concat(name.toUpperCase(), "!");
let input = "Gaurav Gautam";
console.log(formatGreeting(input));