//count the number of vowel and consonant in a word using do while/while loops
let word = prompt("Enter a word to count vowels and consonants");
let vowels = 0;
let consonants = 0;
let i = 0;

while (i < word.length) {
    let ch = word[i].toLowerCase();
    if (ch >= 'a' && ch <= 'z') {
        if (ch === 'a' || ch === 'e' || ch === 'i' || ch === 'o' || ch === 'u') {
            vowels++;
        } else {
            consonants++;
        }
    }
    i++;
}

alert("Vowels: " + vowels + "\nConsonants: " + consonants);
console.log("Vowels: " + vowels + "\nConsonants: " + consonants);