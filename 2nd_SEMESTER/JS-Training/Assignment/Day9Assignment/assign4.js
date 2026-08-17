//Secret Number Guess (Do-While Challenge)
const secretNumber = 7;
let guess;

do {
    guess = Number(prompt("Guess the secret number:"));
} while (guess !== secretNumber);

alert("Correct!");