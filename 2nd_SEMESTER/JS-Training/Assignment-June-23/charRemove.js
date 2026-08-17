//Character Frequency Counter
function charFrequencyCount(str) {
  str = str.toLowerCase();
  newWord = str;
  for (let i = 0; i < str.length; i++) {
    let char = str[i];
    let count = 0;
    for (let j = 0; j < str.length; j++) {
      if (str[j] === char) {
        count++;
      }
    }
    if (count > 1) {
      newWord = newWord.replace(char, "");
    }
  }
  return newWord;
}
let input = "Apple";
console.log(charFrequencyCount(input));

