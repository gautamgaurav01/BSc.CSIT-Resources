const image = document.getElementById("image");
const img1 = document.getElementById("img1");
const image1 = document.getElementById("image1");
const p = document.getElementById("p");
Object.assign(image.style, {
  height: "100vh",
  display: "flex",
  flexDirection: "column",
  alignItems: "center",
  justifyContent: "center",
  gap: "10px",
});
Object.assign(img1.style, {
  overflow: "hidden",
  width: "300px",
  height: "200px",
});
Object.assign(p.style, {
  display: "none",
});
img1.addEventListener("mouseover", () => {
  Object.assign(image1.style, {
    scale: "1.2",
    transition: "0.8s ease-in-out",
  });
  Object.assign(p.style, {
    display: "flex",
    backgroundColor: "yellow",
  });
});
img1.addEventListener("mouseout", () => {
  Object.assign(image1.style, {
    scale: "1",
  });
  Object.assign(p.style, {
    display: "none",
  });
});
