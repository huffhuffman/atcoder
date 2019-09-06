// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `RRR
SSS`
const input = stdin.split('\n')

const [S, T] = input

const ans = () => {
  let count = 0
  for (let i = 0; i < 3; i++) {
    if (S[i] === T[i]) count++
  }
  console.log(count)
}

ans()
