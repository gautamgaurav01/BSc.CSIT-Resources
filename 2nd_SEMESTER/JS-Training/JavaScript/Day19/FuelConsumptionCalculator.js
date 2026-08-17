//Fuel Consumption Calculator
function fuelConsumption(km,l){
    if (isFinite(km,l)) {
        return (km/l).toFixed(2);
    }
    else {
        return "Error";
    }
}
let kilometer= Number(prompt("Enter kilometers"));
let distance=Number(prompt("Enter liter"));
console.log(fuelConsumption(kilometer,liter));