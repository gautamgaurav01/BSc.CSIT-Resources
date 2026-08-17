// //print star using rows and column
// let rows = parseInt(prompt("Enter number of rows"));
// let cols = parseInt(prompt("Enter number of columns"));
// for (let i = 0; i < rows; i++) {
//     let star=""
//   for (let j = 0; j < cols; j++) {
//     star+="*"
//   }
// console.log(star);
// console.log("\n");
// }






// //Program in Js to count occurence of 3 in 1 to n number
// let n=parseInt(prompt("Enter number upto you want to count  occurence of 3"));
// let count = 0;
// for (let i=1; i<=n; i++) {
//     let temp = i;
//      while (temp>0) {
//         let digits = temp % 10;
//         if (digits == 3) {
//             count ++;
//         }
//         temp = parseInt (temp/10);
//     }
// }  
// console.log("Occurence of 3 in 1 to " +n+ " is " +count );
// alert("Occurence of 3 from 1 to " +n+ " is " +count );





// //program to generate all possible three digits combination using 1,2 and 3
// for (let i = 1; i <= 3; i++) {
//     for (let j = 1; j <= 3; j++) {
//         for (let k = 1; k <= 3; k++) {
//             // console.log(`${i}${j}${k}`); //Not read
//             console.log((i*100) +(j*10) +k); 
//         }
//     }
// }





// //program to generate three digits number with the combination of numbers 1 ,2 ,3 ,4 . while printing if the digits are repating skipeed it like skipped 112 121
// for (let i = 1; i <= 4; i++) {
//     for (let j = 1; j <= 4; j++) {
//         for (let k = 1; k <= 4; k++) {
//             if (i !== j && i !== k && j !== k) {
//                 let result = (i * 100) + (j * 10) + k;
//                 console.log(result);
//             }
//         }
//     }
// }





// //program to print all the no from 10 to 500 whose product of digit equals to 6 
//  let num=500;
//  let mul=1;
//  for (let i=10; i<=num; i++) {
//     let temp= i;
//     while (temp>0) {
//          let digits = temp % 10;
//          mul = digits * mul;
//         temp = parseInt (temp/10);
//     }
//      if (mul == 6) {
//             console.log(i);
//         }  
//  }