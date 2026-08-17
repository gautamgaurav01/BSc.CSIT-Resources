setInterval(() => {
  const now = new Date();
  const h = now.getHours() * 30;
  const m = now.getMinutes() * 6;
  const s = now.getSeconds() * 6;
  console.log(`Hour: ${h}°, Minute: ${m}°, Second: ${s}°`);
}, 1000);
