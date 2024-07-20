const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = [];

rl.on("line", (line) => {
  input.push(line);

  if (input.length - 1 === parseInt(input[0])) {
    const t = parseInt(input[0]);
    const ret = [];

    for (let i = 1; i <= t; i++) {
      const [a, b, c] = input[i].split(" ").map(Number);
      let cnt = 0;

      for (let i = 1; i <= a; i++) {
        for (let j = 1; j <= b; j++) {
          for (let k = 1; k <= c; k++) {
            if (i % j === j % k && j % k === k % i) cnt++;
          }
        }
      }

      ret.push(cnt);
    }

    ret.forEach((ans) => console.log(ans));
    rl.close();
  }
});
