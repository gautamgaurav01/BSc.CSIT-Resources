//Convert a word to uppercase and repeat it twice, separated by -.
let convertWord = (word) =>
  word.toUpperCase() + "-" + word.toUpperCase();
let input="wow"
console.log(convertWord(input));