document.querySelector(".btn").addEventListener("click", () => {
  if (document.body.style.backgroundColor === "black") {
    document.body.style.backgroundColor = "white";
    document.body.style.color = "black";
  } else {
    document.body.style.backgroundColor = "black";
    document.body.style.color = "white";
  }
});
document.querySelector(".greenBtn").addEventListener("click", () => {
  document.body.style.backgroundColor = "green";
});
document.querySelector(".blueBtn").addEventListener("click", () => {
  document.body.style.backgroundColor = "blue";
});
document.querySelector(".redBtn").addEventListener("click", () => {
  document.body.style.backgroundColor = "red";
  document.body.style.color = "white";
});
