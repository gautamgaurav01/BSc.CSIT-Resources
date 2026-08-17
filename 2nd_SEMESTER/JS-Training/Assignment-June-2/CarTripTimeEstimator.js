//Car Trip Time Estimator
function tripTime(distance, speed) {
  let convertToMinutes = (hours) => hours * 60;
  return convertToMinutes(distance / speed);
}
console.log(tripTime(120, 60)); //120

