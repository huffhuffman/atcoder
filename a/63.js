// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `6 4`

const [a, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(a + b >= 10 ? 'error' : a + b)
