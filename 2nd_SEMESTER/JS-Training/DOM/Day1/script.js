let mainId = document.getElementById("mainId").innerText;
console.log(mainId);
let mainClass = document.getElementsByClassName("mainClass")[0].innerText;
console.log(mainClass);
let tag = document.getElementsByTagName("p");
for (i=0; i < tag.length; i++) {
    console.log(tag[i].innerText);3
}