// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `31 -41 -59 26`

const [x1, y1, x2, y2] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const x3 = x2 - (y2 - y1)
const y3 = y2 + (x2 - x1)

const x4 = x1 - (y2 - y1)
const y4 = y1 + (x2 - x1)

console.log(x3, y3, x4, y4)
