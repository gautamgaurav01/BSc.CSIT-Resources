const person = {
    name: "Gaurav",
    city: "Gulmi", 
    hobbies: ["reading", "coding", "gaming"],
    greet: function() {
        return `Hello`;
    }
};
// console.log(person.name);
// console.log(person.city); 
// console.log(person.hobbies);
// console.log(person.greet());

// person.age = 20; // Update age
// console.log(person.age); // Check updated age
// delete person.age; // Delete age property
// console.log(person.age);     



console.log(Object.keys(person)); // Get keys of the object
console.log(Object.hasOwn(person, 'name')); 
console.log(Object.values(person)); // Get values of the object
console.log(Object.is(person, person)); // Check if person is the same object
console.log(Object.entries(person)); // Get key-value pairs of the object
console.log(Object.freeze(person)); // Freeze the object to prevent modifications
console.log(Object.seal(person)); // Seal the object to prevent adding new properties
console.log(Object.getOwnPropertyDescriptor(person, 'name')); // Get property descriptor for 'name'