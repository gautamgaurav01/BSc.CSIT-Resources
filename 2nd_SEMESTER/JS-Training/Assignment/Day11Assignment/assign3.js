let num = prompt("Enter a number");
let holdNum = parseInt(num);
let leng = num.length;
let rem;
let add = 0;
let power;
while(holdNum>=1){
  rem = holdNum % 10;
  power = rem ** leng; 
  add +=power;
  holdNum = parseInt(holdNum / 10);
}
if(add==parseInt(num)){
    alert(num +" is a armstrong");
}
else{
    alert(num +" is not armstrong");
}