// //to check year is leap year or not
// let year= parseInt(prompt("Enter a year to check leap year:"));

// if (isNaN(year) || year <= 0) {
// alert("Invalid")
// }
// else if (year%4==0 && year%100!=0 ||year%400==0 ) {
//     alert(year +" is Leap Year");
// }
// else {
//     alert(year +" is not Leap Year");
// }

// //to check year is leap year or not
// let year= parseInt(prompt("Enter a year to check leap year:"));

// if (isNaN(year) || year <= 0) {
// alert("Invalid")
// }
// else if (year%4==0 && year%100!=0 ||year%400==0 ) {
//     alert(year +" is Leap Year");
// }
// else {
//     alert(year +" is not Leap Year");
// }



// //to calculate electricity bill
// let input=parseInt(prompt("Enter a meter unit:"));
// let bill;
// let left;
// if (input >0 && input <=50) {
//     bill = input *5;
// }
// else if (input >50 && input <=150) {
//     left = input-50;
//     bill = 50*5 + left*7;
// }
// else if (input >150 && input <=300) {
//    left = input-150;
//    bill =  50*5 + 100*7 + left*10;
// }
// else if (input >300) {
//   left = input-300;
//    bill =  50*5 + 100*7 + 150*10 + left*15;
// }
// alert (input+ " units total bill is Rs. " +bill);




// //water consumption tracker
// let temp = 0;
// for (let i = 1; i <= 7; i++) {
//   let liter = parseInt(prompt("Enter consumption of liters in day " + i));
//   if (isNaN(liter) || liter <= 0) {
//     alert("Invalid");
//     i--;
//   } else {
//     temp += liter;
//   }
// }
// alert("consumption of liters in week " +temp); 





// //ATM account 
// let pin = 9876;
// let balance = 5000;
// let count = 1;

// while(count<=3){
//     let pinned = +prompt("Enter your pin");
//     if(pin==pinned){
//         let withdrwal = prompt("enter a withdrwal amount");
//         if(withdrwal<=balance){
//             balance -=withdrwal;
//             alert("You have Withdrwal " +withdrwal +" remaining balance is " +balance);
//         }else{
//             alert("enter valid balance");
//         }
//         count = 5;
//     }
//     count++
//     if(count==3){
//         alert("Account has been blocked");
//     }
// }