//Currency Converter
function usdToEuro(numUSD) {
    return numUSD * 0.195;
}
let usd=Number(prompt("Enter USD"));
console.log(usd + " USD equals to " +usdToEuro(usd) + " EURO");