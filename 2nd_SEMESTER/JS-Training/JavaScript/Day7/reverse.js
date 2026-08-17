let n = parseInt(prompt("Enter number to reverse"), 10);
let s = 0;
let r;

while (n > 0) {
  r = n % 10;
  s = s * 10 + r;
  n = parseInt(n / 10);
}
console.log(s);