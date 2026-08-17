//Sum of Even Numbers 

let num = parseInt(prompt("Enter how many even numbers to sum:"));

if (isNaN(num) || num <= 0) {
    alert("Invalid input! Please enter a positive integer.");
} else {
    let sum = 0;
    let Even = 2;
    for (let i = 0; i < num; i++) {
        sum += Even;
        Even += 2;
    }
    alert("Sum of first " +num+ " even numbers is " +sum );
}
