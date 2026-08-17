//area of circle
function area(radius) {
    return((Math.PI*Math.pow(radius,2)).toFixed(2));
}
let radius = parseFloat(prompt("Enter radius"));
console.log(area(radius));


//otp generate
function otpGenerator() {
    return (Math.trunc(Math.random()*Math.pow(10,6)));
}
console.log(otpGenerator()); 