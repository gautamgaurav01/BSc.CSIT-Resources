//Remove Duplicates in string
let word = "helloworld";
let result = "";

for (let i = 0; i < word.length; i++) {
  let alreadyExists = false;

  for (let j = 0; j < result.length; j++) {
    if (word[i] === result[j]) {
      alreadyExists = true;
      break;
    }
  }

  if (!alreadyExists) {
    result += word[i];
  }
}
console.log(result);

