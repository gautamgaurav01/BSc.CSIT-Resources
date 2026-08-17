let calcBtn = document.getElementById("calcBtn");
let result = document.getElementById("result");

calcBtn.addEventListener("click", function calculate() {
  let bill = document.getElementById("bill");
  let tip = document.getElementById("tip");

  let billValue = parseFloat(bill.value);
  let tipPercent = parseFloat(tip.value);

  if (isNaN(billValue) || isNaN(tipPercent)) {
    result.textContent = "Please enter valid numbers.";
    return;
  }

  let tipAmt = billValue * (tipPercent / 100);
  let total = billValue + tipAmt;

  result.textContent = `Bill: Rs.${billValue}, Tip: Rs.${tipAmt}, Total: Rs.${total}`;

  bill.value = "";
  tip.value = "";
});
