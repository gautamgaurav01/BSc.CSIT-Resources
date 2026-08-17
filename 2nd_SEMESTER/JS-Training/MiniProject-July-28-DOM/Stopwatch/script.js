const startBtn = document.getElementById("start");
const stopBtn = document.getElementById("stop");
const resetBtn = document.getElementById("reset");

const hrDisplay = document.getElementById("hr");
const minDisplay = document.getElementById("min");
const secDisplay = document.getElementById("sec");
const countDisplay = document.getElementById("count");
let hour = 0,
  minute = 0,
  second = 0,
  count = 0;
let timer = false;

startBtn.onclick = () => {
  if (!timer) {
    timer = true;
    stopWatch();
  }
};

stopBtn.onclick = () => {
  timer = false;
};

resetBtn.onclick = () => {
  timer = false;
  hour = minute = second = count = 0;
  updateDisplay();
};

function stopWatch() {
  if (!timer) {
    return;
  }

  count++;
  if (count === 100) {
    second++;
    count = 0;
  }
  if (second === 60) {
    minute++;
    second = 0;
  }
  if (minute === 60) {
    hour++;
    minute = 0;
    second = 0;
  }

  updateDisplay();

  setTimeout(stopWatch, 10);
}

function updateDisplay() {
  hrDisplay.textContent = padZero(hour);
  minDisplay.textContent = padZero(minute);
  secDisplay.textContent = padZero(second);
  countDisplay.textContent = padZero(count);
}

function padZero(num) {
  return num < 10 ? "0" + num : num;
}
