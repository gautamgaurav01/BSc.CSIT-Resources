let input = " Gaurav Gautam   ";
function lowerWord(name) {
  function tripWord(word) {
    return word.trim();
  }
  return tripWord(name).toLowerCase();
}
console.log(lowerWord(input));
