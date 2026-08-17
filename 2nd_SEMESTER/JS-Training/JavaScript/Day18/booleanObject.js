//booleanObject
//primitive boolean
let a = true;
console.log(a);

//boolean object: avoid
let bool = new Boolean();
let trueBool = new Boolean(true);
console.log(bool);
console.log(trueBool);

//to string()
console.log(a.toString());

//valueOf()
console.log(bool.valueOf());
console.log(trueBool.valueOf());