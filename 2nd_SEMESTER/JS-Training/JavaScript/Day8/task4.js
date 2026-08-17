//program to check is a string is palindrome or not 
let str = prompt("Enter a string to check if it is palindrome or not");
str = str.toLowerCase();
let i = 0;
let j = str.length - 1;
let isPalindrome = true;

while (i < j) {
    if (str[i] !== str[j]) {
        isPalindrome = false;
    }
    i++;
    j--;
}

if (isPalindrome) {
    console.log("Palindrome");
    alert("Palindrome");
} else {
    console.log("Not Palindrome");
    alert("Not Palindrome");
}
