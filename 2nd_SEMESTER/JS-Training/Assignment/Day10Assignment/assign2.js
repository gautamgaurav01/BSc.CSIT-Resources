//Sum of Odd Numbers

let num = parseInt(prompt("Enter how many odd numbers to sum:"));

if (isNaN(num) || num <= 0) {
    alert("Invalid input! Please enter a positive integer.");
} else {
    let sum = 0;
    let Odd = 1;
    for (let i = 0; i < num; i++) {
        sum += Odd;
        Odd += 2;
    }
    alert(" Sum of first " +num+ " odd numbers is " +sum );
}
