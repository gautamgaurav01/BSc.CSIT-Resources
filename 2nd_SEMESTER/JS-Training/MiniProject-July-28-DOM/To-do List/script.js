const userForm = document.getElementById("userForm");
const listInput = document.getElementById("name");
const listShow = document.getElementById("list");
const button = document.getElementById("btn");

button.addEventListener("click", (event) => {
  event.preventDefault();

  if (listInput.value.trim() === "") {
    alert("Input Required");
    return;
  }

  const listItem = document.createElement("li");
  listShow.appendChild(listItem);

  const checkbox = document.createElement("input");
  checkbox.setAttribute("type", "checkbox");

  listItem.appendChild(checkbox);

  const taskText = document.createElement("p");
  taskText.textContent = listInput.value;

  listItem.appendChild(taskText);

  const deleteButton = document.createElement("button");
  deleteButton.innerText = `Delete`;
  listItem.appendChild(deleteButton);

  deleteButton.addEventListener("click", () => { 
    listShow.removeChild(listItem);
  });

  checkbox.addEventListener("change", () => {
    if (checkbox.checked) {
      taskText.style.textDecoration = "line-through";
    } else {
      taskText.style.textDecoration = "none";
    }
  });

  listInput.value = "";
});
