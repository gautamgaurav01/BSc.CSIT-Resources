let n = parseInt(prompt("Enter a positive number:"));
if (isNaN(n) || n <= 1) {
  alert("Invalid");
} else {
  let prime = true;
  for (let i = 2; i < n; i++) {
    if (n % i === 0) {
      prime = false;
      break;
    }
  }
  alert(n + (prime ? " is Prime" : " is Composite"));
}
