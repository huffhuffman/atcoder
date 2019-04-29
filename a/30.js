// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `66 30 55 25`

const [a, b, c, d] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(b / a === d / c ? 'DRAW' : b / a > d / c ? 'TAKAHASHI' : 'AOKI')
