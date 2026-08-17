//Delivery Completion Check
let input = [true, true, false, true];
let check = input.every((num) => num == true);
if (check) {
  console.log(`All orders are delivered`);
} else {
  console.log(`Not all orders are delivered`);
}