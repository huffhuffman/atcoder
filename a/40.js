// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5 2`

const [n, x] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(Math.min(n - x, x - 1))
