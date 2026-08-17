//Remove leading and trailing spaces from a string.
function removeExtraSpaces(str) {
    return str.trim();
}
let input = prompt("Enter a string to remove extra spaces");
console.log("The string after removing extra spaces is: " + removeExtraSpaces(input));