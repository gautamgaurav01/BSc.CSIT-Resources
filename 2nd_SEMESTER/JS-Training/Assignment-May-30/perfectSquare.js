function isPerfectSquare(n) {
  if (n < 1) return false;
  for (let i = 1; i * i <= n; i++) {
    if (i * i === n) {
      return true;
    }
  }
  return false;
}

console.log("Is 25 a perfect square?", isPerfectSquare(25));
console.log("Is 26 a perfect square?", isPerfectSquare(26));

