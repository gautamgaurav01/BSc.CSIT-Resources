// Banking System Transaction
// deposit, withdraw, and transfer based on account type and amount

let transactionType = prompt(
  "Enter transaction type (deposit, withdraw, transfer):"
);
let accountType = prompt("Enter account type (savings, checking):");
let amount = parseFloat(prompt("Enter amount:"));
transactionType = transactionType.toLowerCase();
accountType = accountType.toLowerCase();
switch (transactionType) {
  case "deposit":
    if (amount > 10000) {
      console.log("Large deposit - requires manager approval.");
    } else {
      console.log("Deposit successful.");
    }
    break;
  case "withdraw":
    if (accountType === "savings") {
      if (amount > 1000) {
        console.log("Savings withdrawal limit exceeded.");
      } else {
        console.log("Withdrawal from savings successful.");
      }
    } else if (accountType === "checking") {
      if (amount > 5000) {
        console.log("Overdraft alert! Transaction blocked.");
      } else {
        console.log("Withdrawal from checking successful.");
      }
    } else {
      console.log("Invalid account type.");
    }
    break;
  case "transfer":
    if (accountType === "savings") {
      console.log("Transfers from savings are not allowed.");
    } else if (accountType === "checking") {
      if (amount > 2000) {
        console.log("Transfer requires OTP verification.");
      } else {
        console.log("Transfer successful.");
      }
    } else {
      console.log("Invalid account type.");
    }
    break;
  default:
    console.log("Invalid transaction type.");
}
