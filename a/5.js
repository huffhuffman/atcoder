// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `4 3`

const [x, y] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(Math.floor(y / x))
