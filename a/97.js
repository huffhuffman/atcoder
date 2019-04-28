// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `4 7 9 3`

const [a, b, c, d] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

let is = false
if (Math.abs(a - b) <= d && Math.abs(b - c) <= d) is = true
if (Math.abs(a - c) <= d) is = true

console.log(is ? 'Yes' : 'No')
