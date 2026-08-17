const userForm = document.getElementById("userForm");
const listInput = document.getElementById("name");
const listShow = document.getElementById("list");
const button = document.getElementById("btn");
  
button.addEventListener("click", (event) => {
  event.preventDefault();
  const listItem = document.createElement("li");
  listItem.textContent = listInput.value;
  listShow.appendChild(listItem);
  const deleteButton = document.createElement("button");
  deleteButton.innerText = `Delete`;
  listItem.appendChild(deleteButton);
  deleteButton.addEventListener("click", (event) => {
    listShow.removeChild(listItem);
  });
  listInput.value = "";
});