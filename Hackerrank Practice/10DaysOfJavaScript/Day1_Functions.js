"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((string) => {
      return string.trim();
    });

  main();
});

function readLine() {
  return inputString[currentLine++];
}
/*
 * Create the function factorial here
 */

function factorial(n) {
  // let f=1;
  // for(let i=1;i<=n;i++){
  //     f*=i;
  // }
  // return f;

  // OR

  if (n == 1) return 1;
  return n * factorial(n - 1);
}

function main() {
  const n = +readLine();

  console.log(factorial(n));
}
