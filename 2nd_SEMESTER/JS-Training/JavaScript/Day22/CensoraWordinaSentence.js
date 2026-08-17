//Censor a Word in a Sentence
//Replace a given word with *** in a sentence.

function censorWord(sentence, word) {
    return sentence.replace(word, "***");
}
let inputSentence = "He is rude";
let censor = "rude";
let outputSentence = censorWord(inputSentence, censor);
console.log(outputSentence);