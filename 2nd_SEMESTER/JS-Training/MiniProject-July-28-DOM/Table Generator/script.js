document.addEventListener("DOMContentLoaded", () => {
  document.getElementById("generateBtn").addEventListener("click", () => {
    const r = +document.getElementById("rows").value;
    const c = +document.getElementById("cols").value;
    let table = "<table border='1'>";
    for (let i = 0; i < r; i++) {
      table += "<tr>";
      for (let j = 0; j < c; j++) {
        table += `<td>R${i + 1} C${j + 1}</td>`;
      }
      table += "</tr>";
    }
    table += "</table>";
    document.getElementById("tableContainer").innerHTML = table;
  });
});
