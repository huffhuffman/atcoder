// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `100 200 50 20
40 10`

const [a, b, c, k] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)
const [s, t] = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const total = a * s + t * b
const dsc = s + t >= k ? (s + t) * c : 0

console.log(total - dsc)
