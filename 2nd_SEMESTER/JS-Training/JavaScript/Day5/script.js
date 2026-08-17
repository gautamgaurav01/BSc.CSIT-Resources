// const age = parseInt(prompt("Enter your age:"));
// const quali = prompt("Enter your qualification:");
// const experience = parseFloat(prompt("Enter your experience in years:"));

// if (
//   age >= 21 &&
//   age <= 35 &&
//   (quali == "bachelor" || quali == "Bachelor" || quali == "BACHELOR") &&
//   experience >= 2
// ) {
//   alert("You are eligible for the job.");
// } else if (
//   age >= 21 &&
//   age <= 35 &&
//   (quali == "bachelor" || quali == "Bachelor" || quali == "BACHELOR")
// ) {
//   alert("You meet age and qualification but not experience.");
// } else if (age >= 21 && age <= 35) {
//   alert("You meet age only.");
// } else {
//   alert("Not eligible.");
// }

// const age = parseInt(prompt("Enter your age:"));
// const income = parseFloat(prompt("Enter your monthly income:"));
// const credit = parseInt(prompt("Enter your credit score:"));

// if (age >= 25 && age <= 60 && income >= 30000 && credit > 650) {
//     alert("Loan Approved.");
// } else if (age >= 25 && age <= 60 && income >= 30000) {
//     alert("Good income and age, but poor credit score.");
// } else if (age >= 25 && age <= 60) {
//     alert("Meets age only.");
// } else {
//     alert("Not eligible for loan.");
// }

const a = Number(prompt("Enter a number"));
if (a<=0 || a>0) 
{
    if (a>0) {
        console.log("Number is positive" );
    }
    else if (a<0) {
        console.log("Number is negative" ); 
    }
    else {
        console.log("Number is Zero" );
    }
}
else {
    console.log("Given input is not a number" )
}
