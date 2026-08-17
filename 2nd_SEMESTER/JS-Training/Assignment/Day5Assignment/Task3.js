let marks = Number(prompt("Enter marks to check grade:"));
     
if (isNaN(marks)) {
  alert("Invalid input! Please enter a number.");
} else {
  if (marks >= 90 && marks <= 100) {
    alert("Grade A");
  } else if (marks >= 80 && marks <= 89) {
    alert("Grade B");
  } else if (marks >= 70 && marks <= 79) {
    alert("Grade C");
  } else if (marks >= 60 && marks <= 69) {
    alert("Grade D");
  } else if (marks >= 0 && marks < 60) {
    alert("Grade F");
  } else {
    alert("Invalid Marks");
  }
}