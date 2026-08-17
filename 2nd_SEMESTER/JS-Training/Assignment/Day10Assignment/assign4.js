//Perfect Square Sum

let n = parseInt(prompt("Enter a number to find sum of perfect squares:"));

if (isNaN(n) || n <= 0) {
    alert("Invalid input! Please enter a positive integer.");
} else {
    let sum = 0;
    for (let i = 1; i <= n; i++) {
        sum += i * i;
    }
    alert("Sum of first " +n + " perfect squares is " +sum);
}
