//First Prime Number Detection
let numbers = [4, 6, 8, 11, 15];
function isPrime(n) {
  if (n < 2) return false;
  for (let i = 2; i < n; i++) {
    if (n % i === 0) return false;
  }
  return true;
}
let firstPrime = numbers.find(isPrime);
if (firstPrime) {
  console.log(`First prime: ${firstPrime}`);
} else {
  console.log("No prime number found.");
}

