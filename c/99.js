// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `8 3
7 3 1 8 4 6 2 5`

const [n, k] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

let a = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const res = _ => {
  const d = k - 1
  const l = n - 1
  return Math.ceil(l / d)
}

console.log(res())
