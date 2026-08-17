//area of circle
function area(radi) {
  return (Math.PI * Math.pow(radi, 2)).toFixed(2);
}
let radius = Number(prompt("Enter radius"));
console.log(area(radius));
