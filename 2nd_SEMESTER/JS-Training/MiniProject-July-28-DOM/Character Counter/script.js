let text = document.getElementById("text");
let count = document.getElementById("count");
text.addEventListener("input", function () {
  count.innerText = text.value.length + " characters";
});
