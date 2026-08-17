//Out of Stock Alert
let products = [true, true, false, true];
let outOfStock = products.some((product) => product === false)
  ? "Some items are out of stock"
  : "All items are in stock";
console.log(outOfStock);

