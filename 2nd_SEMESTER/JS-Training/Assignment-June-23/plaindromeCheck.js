//Check the plaindrome or not
function isPalindrome(str) {
  str = str.toLowerCase();
  let reversedStr = str.split("").reverse().join("");
  return str === reversedStr
    ? "The word " + str + " is Plaindrome "
    : "The word " + str + " is not Plaindrome ";
}
let input = "wow";
console.log(isPalindrome(input));

