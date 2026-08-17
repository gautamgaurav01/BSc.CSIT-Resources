let days = parseInt(prompt("Enter no of days the car was used "));
while (days <= 0 || isNaN(days)) {
  days = parseInt(prompt("Enter no of days the car was used "));
}
let total_rent = 0;
if (days <= 5) {
  total_rent = 1000 * days;
} else {
  let remaining_days = days - 5;
  total_rent = 1000 * 5 + 800 * remaining_days;
}
alert("Total rental cost of your car is Rs. " +total_rent);