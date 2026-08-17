//Truthy or Falsy Checker
let input = prompt("Enter a value:");
let result;

result =
  input === "false" ||
  input === "0" ||
  input === "" ||
  input === "null" ||
  input === "undefined" ||
  isNaN(input)
    ? "Falsy"
    : "Truthy";

alert("The value is " + result);