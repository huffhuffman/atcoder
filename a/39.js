// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `2 3 4`

const [a, b, c] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(2 * (a * b + a * c + b * c))
