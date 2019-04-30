// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `50 7
40 8
30 9`

const se = stdin
  .split('\n')
  .filter(e => e)
  .map(e => e.split(' ').map(Number))

console.log(
  se.reduce((p, c) => {
    return p + c[0] * c[1] * 0.1
  }, 0)
)
