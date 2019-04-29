// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `8 6 20`

const [a, b, c] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(Math.floor(c / Math.min(a, b)))
