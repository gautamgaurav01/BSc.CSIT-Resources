let age = parseInt(prompt("Enter age "));
let distance = parseInt(prompt("Enter travel distance in km "));
while (age <= 0 || distance <= 0 || isNaN(age) || isNaN(distance)) {
  if (age <= 0 || isNaN(age)) {
    age = parseInt(prompt("Enter age "));
  } else {
    distance = parseInt(prompt("Enter travel distance in km "));
  }
}
let fare = 0;
if (age < 5) {
  fare = 0;
} else if (age >= 5 && age <= 12) {
  fare = 2 * distance;
} else if (age >= 13 && age <= 60) {
  fare = 5 * distance;
} else if (age > 60) {
  fare = 3 * distance;
}
alert("Fare is Rs. "+ fare);