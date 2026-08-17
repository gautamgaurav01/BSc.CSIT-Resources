const age = parseInt(prompt("Enter your age:"));
const quali = prompt("Enter your qualification:");
const experience = parseFloat(prompt("Enter your experience in years:"));

let result =
  age >= 21 &&
    age <= 35 &&
    (quali == "bachelor" || quali == "Bachelor" || quali == "BACHELOR") &&
    experience >= 2
    ? "You are eligible for the job."
    : age >= 21 &&
      age <= 35 &&
      (quali == "bachelor" || quali == "Bachelor" || quali == "BACHELOR")
      ? "You meet age and qualification but not experience."
      : age >= 21 && age <= 35
        ? "You meet age only."
        : "Not eligible.";
alert(result);  