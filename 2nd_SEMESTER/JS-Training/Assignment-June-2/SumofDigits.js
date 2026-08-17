function sumDigitsRecursive(num) {
  return num == 0 ? 0 : (num % 10) + sumDigitsRecursive(Math.floor(num / 10));
}
console.log(sumDigitsRecursive(1234)); // Output: 10

