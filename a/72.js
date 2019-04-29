// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `100 170`

const [x, t] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(x - t > 0 ? x - t : 0)
