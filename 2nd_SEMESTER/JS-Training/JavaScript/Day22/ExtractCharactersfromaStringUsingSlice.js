//Extract a substring from the 2nd to 5th character (not including 5th).
function extractSubstring(str) {
    return str.slice(1, 5);
}
let input ="developer";
console.log("The extracted substring is: " + extractSubstring(input));