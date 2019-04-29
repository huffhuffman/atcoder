// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `100 600 200 300`

const [a, b, c, d] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(a * b >= c * d ? a * b : c * d)
