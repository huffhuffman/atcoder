// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `7 3`

const [n, k] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(n % k === 0 ? 0 : 1)
