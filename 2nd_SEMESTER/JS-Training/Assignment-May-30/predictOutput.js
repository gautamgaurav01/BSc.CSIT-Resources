let a = 10;
function test() {
  let a = 5;
  if (true) {
    let a = 20;
    console.log(a); //  Output: 20 (inner-most block variable)
  }
  console.log(a); //  Output: 5 (function scope variable)
}
test();
console.log(a); //  Output: 10 (global variable)

