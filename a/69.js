// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3 4`

const [n, m] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log((n - 1) * (m - 1))
