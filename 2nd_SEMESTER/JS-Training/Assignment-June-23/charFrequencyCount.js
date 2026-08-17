//Character Frequency Counter
function charFrequencyCount(str) {
  str = str.toLowerCase();
  for (let i = 0; i < str.length; i++) {
    let alreadyShown = false;
    for (let k = 0; k < i; k++) {
      if (str[k] === str[i]) {
        alreadyShown = true;
        break;
      }
    }
    if (alreadyShown) continue;
    let count = 0;
    for (let j = 0; j < str.length; j++) {
      if (str[j] === str[i]) {
        count++;
      }
    }
  
    console.log(str[i] + " repeated " + count + " times");
  }
}
let input = "Apple";
charFrequencyCount(input);

