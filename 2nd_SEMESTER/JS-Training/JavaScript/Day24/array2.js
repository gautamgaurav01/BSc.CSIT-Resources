/* let number =[2,4,56,7,8,9,3,4,7,8,9,9,9,9];

console.log(number.indexOf(56));
console.log(number.lastIndexOf(56));
console.log(number.includes(56));
console.log(number.find((num) => num > 10));
console.log(number.findIndex((num) => num > 10)); 
console.log(number.find((num) => num === 9));
console.log(number.findIndex((num) => num === 9)); */

//find the first even and its index in an array.
let number = [1, 5, 7, 8, 3, 4, 0, 11, 4, 55, 77, 10, 40, 6, 10];
let firstEven = number.find((num) => num % 2 === 0);
let firstEvenIndex = number.findIndex((num) => num % 2 === 0);
console.log("First Even Number:" + firstEven + " at index: " + firstEvenIndex);
//find first multiple of three and its index in an array.
let firstMultipleOfThree = number.find((num) => num % 3 === 0);
let firstMultipleOfThreeIndex = number.findIndex((num) => num % 3 === 0);
console.log(
  "First Multiple of Three: " +
    firstMultipleOfThree +
    " at index: " +
    firstMultipleOfThreeIndex
);

//find the first longest word in array.
let words = ["apple", "banana", "cherry", "date", "elderberry"];
let longestWord = words[0];
for (let i = 1; i < words.length; i++) {
  if (words[i].length > longestWord.length) {
    longestWord = words[i];
  }
}
let longestWordIndex = words.indexOf(longestWord);
console.log("Longest Word: " + longestWord + " at index: " + longestWordIndex);

//find first word starting with constant
let letters = ["apple", "banana", "cherry", "date", "elderberry"];

function startsWithConsonant(word) {
  let firstLetter = word[0].toLowerCase();
  return !"aeiou".includes(firstLetter);
}
let firstConsonantWord = letters.find(startsWithConsonant);
let firstConsonantIndex = letters.findIndex(startsWithConsonant);
console.log("First consonant word: " + firstConsonantWord + " at index: " + firstConsonantIndex);