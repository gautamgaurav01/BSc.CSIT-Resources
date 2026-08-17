//Roll a dice once; if 1, roll again 
function diceGame() {
  let first = Math.ceil(Math.random() * 6);
  if (first !== 1) {
    return "First roll: " + first;
  } else {
    let second = Math.ceil(Math.random() * 6);
    return "First roll: 1, Re-roll: " + second;
  }
}
console.log(diceGame());