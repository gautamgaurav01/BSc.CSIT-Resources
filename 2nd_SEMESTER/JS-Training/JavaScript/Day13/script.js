// function gau() {
//             console.log("Gaurav Gautam");
// }
// gau();

//area of rectangle
let l = parseFloat(prompt("Enter length of rectangle in meter"));
let b = parseFloat(prompt("Enter breadth of rectangle in meter"));
function add(a, c) {
  return a * c;
}
let area = add(l, b);
alert(
  "Area of rectangle of " +
    l +
    " meter length and " +
    b +
    " meter breadth is " +
    area +
    " square meter"
);
