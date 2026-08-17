let sum = 0;
for (let i = 1; i <= 7; i++) {
  let sales = parseInt(prompt("Enter sale for day " + i));
  while (isNaN(sales) || sales <= 0) {
    sales = parseInt(prompt("Enter sales for day " + i));
  }
  sum += sales;
}
alert("The total sales amount is " + sum);
