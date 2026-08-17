//Movie Duration Filter
let input = [90, 110, 130, 100];
let longMovie = input.find(duration => duration > 120);
if (longMovie) {
    console.log(`First long movie: ${longMovie}`);
}
else {
    console.log("No movie longer than 2 hours found.");
}
