let a = 0;
while (a <= 100) {

  if (a % 3 == 0 && a % 5 == 0) {
    console.log(a + " FizzBuzz ");
  } else if (a % 5 == 0) {
    console.log(a + " Buzz ");
  } else if (a % 3 == 0 ) {
    console.log(a + " Fizz ");
  } else {
    console.log( a+ " Invalid ");
  } 
}
