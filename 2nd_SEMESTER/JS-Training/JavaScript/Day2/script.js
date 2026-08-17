function var1() {
    if (1) {
        var a = 10;
    }
    console.log(a, "var");
}
var1();
function let1() {
    if (1) {
        let a = 20;
        console.log(a, "let");
    }
}
let1();
const name = "John";
console.log(name);

//string
let string = "Hello World!";
console.log(typeof string);
console.log(string);
//number
let number = 42;
console.log(typeof number);
console.log(number);
//boolean
let a = true;
let b = false;
console.log(typeof a, typeof b);
console.log(a, b);
//null
let c = null;
console.log(typeof c);
console.log(c);
//undefined
let d = undefined;
console.log(typeof d); 
console.log(d);