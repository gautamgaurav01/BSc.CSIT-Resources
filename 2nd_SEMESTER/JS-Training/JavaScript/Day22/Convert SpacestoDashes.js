//Replace all spaces in a sentence with dashes.
function spacesToDashes(sentence){
    return sentence.replaceAll(" ", "-");

}
let input="Learn JavaScript Now";
console.log(spacesToDashes(input));