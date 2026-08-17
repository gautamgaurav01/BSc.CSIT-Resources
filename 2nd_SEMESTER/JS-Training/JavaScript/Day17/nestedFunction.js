/* function outer(a, b) {
    function inner() {
        return a + b;
    }
    console.log(inner());
}
outer(2, 3) */

/* //final score 

function finalScore(mark1,mark2) {
    function addBonus(score) {
        return score+5;
    } 
    return (addBonus(mark1+mark2));
}
console.log(finalScore(50,20)); */

//conditionMath

function conditionalMath(num1,num2) {
    function lastDigit(num) {
       return num%10;
    }
    let result=(lastDigit(num1)==lastDigit(num2)) ? (num1+num2): (num1*num2);
    return result;
}
console.log(conditionalMath(23,43));
console.log(conditionalMath(23,44));