let arr1 = [1, 2, "abc"];
//array Method
/*
push ()- Adds one or more elements to the end of an array and returns the new length of the array.
pop ()- Removes the last element from an array and returns that element. This method changes the length of the array.
shift ()- Removes the first element from an array and returns that element. This method changes the
unshift ()- Adds one or more elements to the beginning of an array and returns the new length of the array. 
 */
console.log(arr1);
arr1.push(true);
console.log(arr1);
console.log(arr1.pop());
console.log(arr1);

arr1.unshift("hello");
console.log(arr1);

arr1.shift("hello");
console.log(arr1);