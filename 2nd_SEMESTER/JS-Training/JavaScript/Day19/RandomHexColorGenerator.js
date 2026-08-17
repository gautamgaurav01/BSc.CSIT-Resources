function generateHexColor() {
  return Math.floor(Math.random() * 16777215).toString(16).padStart(6, "0");
}
console.log("Generated color code: #" + generateHexColor());