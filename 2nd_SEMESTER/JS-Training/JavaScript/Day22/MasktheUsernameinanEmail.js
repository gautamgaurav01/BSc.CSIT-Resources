// Hide all characters in the email username except the first character.
// Use .charAt(), .slice(), .repeat().
function maskEmailUsername(email) {
    let username = email.split("@")[0];
    let masked = username.charAt(0) + "*".repeat(username.length - 1);
    return masked + email.slice(email.indexOf("@"));
}
let input = "user@example.com";
console.log(maskEmailUsername(input)); 