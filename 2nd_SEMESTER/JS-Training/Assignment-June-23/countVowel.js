//CountVowel
function countVowel(str) {
  str = str.toLowerCase();
  let count = 0;
  for (let i = 0; i < str.length; i++) {
    if (
      str[i] === "a" ||
      str[i] === "e" ||
      str[i] === "i" ||
      str[i] === "o" ||
      str[i] === "u"
    ) { 
      count++;
    }
  }
  return count;
}
let input = "Apple";
console.log(countVowel(input));

