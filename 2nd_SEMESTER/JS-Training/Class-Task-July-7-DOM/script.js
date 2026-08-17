/*
Task 1: getElementById
Change the text of the element with id "main-title" to:
"DOM Assignment – ID Access" 
 */

let mainTitle = document.getElementById("main-title");
mainTitle.textContent = "DOM Assignment - ID Access";

/*
Task 2: getElementsByClassName
Change the color of the first element with class "fruit" to red.
(You'll add class "fruit" to one <li> in HTML if it's not there.)
 */
let fruit = document.getElementsByTagName("li");
  fruit[0].setAttribute("class", "fruit"); 
  fruit[0].style.color = "red";    
/*
Task 3: getElementsByTagName
Change the innerText of the first <li> tag to:
"Changed by Tag Access" 
 */
let liElements = document.getElementsByTagName("li");
liElements[0].innerText = "Changed by Tag Access";

/*
Task 4: querySelector
Use querySelector("p") to select the first <p> and make its text color blue. 
 */
let firstParagraph = document.querySelector("p");
firstParagraph.style.color = "blue";

/*
Task 5: querySelectorAll
Use querySelectorAll("li") to select all <li> elements.
Change the text of the second one to:
"Second Item Updated"
 */

let allLiElements = document.querySelectorAll("li");
allLiElements[1].textContent = "Second Item Updated";

/* Task 6: innerHTML
Use innerHTML to replace the content of the element with id "box" with:
<i>This box was updated using innerHTML</i>
*/
let boxElement = document.getElementById("box");
boxElement.innerHTML = "<i>This box was updated using innerHTML</i>";

/*
Task 7: .style
Change the background color of the element with id "box" to lightgray. 
 */
boxElement.style.backgroundColor = "lightgray";

/*
Task 8: setAttribute()
Use setAttribute() to change the image "src" of id="profile" to:
"new.jpg" 
 */
let profileImage = document.getElementById("profile");
profileImage.setAttribute("src", "new.jpg");

/*
Task 9: setAttribute() again
Change the "alt" text of the image with id="profile" to:
"New Profile Pic" 
 */
profileImage.setAttribute("alt", "New Profile Pic");


/*
 Task 10: Set input value
Use either .value = or setAttribute("value", "...") to set the input value with id="username" to:
"GuestUser" 
*/
let usernameInput = document.getElementById("username");
usernameInput.value = "GuestUser";