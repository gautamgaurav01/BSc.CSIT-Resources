// Based on input determine it is a number, boolean, null, or undefined, and display the result using alert.
let input = prompt("Enter a value:");
let type;
if (input === "true" || input === "false") {
    type = "boolean";
} else if (input === "") {
    type = "undefined";
} else if (input === "null") {
    type = "null";
} else if (!isNaN(Number(input)) && input !== "") {
    type = "number";
} else {
    type = "string";
}

alert("Type is " + type);