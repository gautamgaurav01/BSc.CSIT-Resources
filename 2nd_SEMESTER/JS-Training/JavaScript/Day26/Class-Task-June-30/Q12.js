//Hotel Room Availability Checker
let rooms = ["booked", "booked", "available", "booked"];
let available= rooms.findIndex(room => room === "available");
console.log(`First available room at index ${available}`);