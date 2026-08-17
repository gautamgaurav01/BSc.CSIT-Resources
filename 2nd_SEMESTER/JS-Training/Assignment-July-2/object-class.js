//1. Create an object called book with the following properties:title author year genre.  Fill in appropriate values of your choice.
const book ={
    title: "Muna-Madan",
    author: "Bhanubhakta Acharya",
    year: 1964,
    genre : "Poetry"
};

//2.Add a new property `pages` to the `book` object and assign it a number.
book.pages = 200;
console.log(book);

//3.Update the `year` property to the newer year.
book.year = 2025;
console.log(book);

//4.Delete the `genre` property from the `book` object.
delete book.genre;
console.log(book);

//5.Check if the property `title` exists in the `book` object using the `in` operator.
console.log('title' in book); 

//6. Use `Object.keys()` to list all properties of the `book` object.
console.log(Object.keys(book));

//7.Use `Object.values()` to list all values of the `book` object.
console.log(Object.values(book));

//8.Use `Object.entries()` to list all key-value pairs of the `book` object.
console.log(Object.entries(book));

//9.Use `Object.defineProperty()` to add a non-enumerable property `summary` with any string value.
Object.defineProperty(book, 'summary', {
    value: "A classic Nepali poem that tells the" ,
    writable: true,
    enumerable: false,
    configurable: true,
});
console.log(Object.getOwnPropertyDescriptor(book , 'summary'));

//10.Loop through the `book` object using a `for...in` loop and print each property and its value.
for (let key in book) {
    console.log(`${key}: ${book[key]}`);
}