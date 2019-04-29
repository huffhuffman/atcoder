// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 3 2`

const [a, b, c] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(c >= a && c <= b ? 'Yes' : 'No')
