function countEvenBetween(start, end) {
  let count = 0;
  for (let i = start + 1; i < end; i++) {
    if (i % 2 === 0) {
      count++;
    }
  }
  return count;
}

console.log("Even numbers between 5 and 12:", countEvenBetween(5, 12));

