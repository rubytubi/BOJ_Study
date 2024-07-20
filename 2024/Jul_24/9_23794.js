const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("", (input) => {
  const n = parseInt(input);

  console.log("@".repeat(n + 2));

  for (let i = 1; i <= n; i++) {
    console.log("@" + " ".repeat(n) + "@");
  }

  console.log("@".repeat(n + 2));

  rl.close();
});
