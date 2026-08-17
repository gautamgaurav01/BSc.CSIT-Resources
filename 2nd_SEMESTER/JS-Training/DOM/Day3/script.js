let parent = document.getElementById("container");

parent.style.height="100vh"
parent.style.width="100%"
parent.style.alignItems="center"
parent.style.backgroundColor="grey"
parent.style.display="flex"
parent.style.justifyContent="center"
let newElement =document.createElement("p");
newElement.textContent="Hello world"

parent.appendChild(newElement);

//replace -> replacce element
let secondElement = document.createElement("b");
secondElement.innerText="Hello Ayush";
parent.replaceChild(secondElement,newElement)

secondElement.style.backgroundColor="red";
secondElement.style.color="yellow"
secondElement.style.fontStyle="Italic"
// secondElement.style.padding="15px"
secondElement.style.borderRadius="50%"
secondElement.style.height="70%"
secondElement.style.width="50%"
secondElement.style.border="2px solid black"
secondElement.style.display="flex"
secondElement.style.alignItems="center"
secondElement.style.justifyContent="center"




// parent.removeChild(secondElement)