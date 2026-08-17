// // function changeBackgroundColor() {
// //   if (document.body.style.backgroundColor == "black") {
// //         document.body.style.backgroundColor="white";
// //     }
// //     else {
// //         document.body.style.backgroundColor = "black";
// //     }
// // }

//let button = document.getElementsByClassName("btn")[0];
// button.addEventListener("click", () => {
//   if (document.body.style.backgroundColor == "black") {
//     document.body.style.backgroundColor = "white";
//   } else {
//     document.body.style.backgroundColor = "black";
//   }
// });
// button.addEventListener("mouseover",() => {
//     if (document.body.style.backgroundColor == "black") {
//     document.body.style.backgroundColor = "white";
//   } else {
//     document.body.style.backgroundColor = "black";
//   }
// });
// button.addEventListener("mouseout",() => {
//     if (document.body.style.backgroundColor == "black") {
//     document.body.style.backgroundColor = "white";
//   } else {
//     document.body.style.backgroundColor = "black";
//   }
// });

const form = document.getElementById("userForm");
const button = document.getElementById("btn");
button.addEventListener("click", function (event) {
  event.preventDefault();
  const name = document.getElementById("name").value;
  const age = document.getElementById("age").value;
  const address = document.getElementById("address").value;
  let createEl = document.createElement("p");
  createEl.innerText = `Name: ${name}\nAge: ${age}\nAddress: ${address}`;
  form.append(createEl);
});
