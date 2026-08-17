//Temperature Converter with Validation
function convertToFahrenheit(celsius) {
  if (!isFinite(celsius)) {
    return false
  }
  else {
      return ((celsius * 9/5) + 32).toFixed(2);
  }
}
let temp = Number(prompt("Enter temperature in Celsius"));
console.log(temp +" °C equal to " +convertToFahrenheit(temp) + " °F");