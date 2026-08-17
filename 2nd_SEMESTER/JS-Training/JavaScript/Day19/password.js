// Random Password Length Generator
function generateLength() {
  return Math.floor(Math.random() * 9) + 8;
}
console.log("Generated password length is " + generateLength());