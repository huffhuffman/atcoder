// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = ``

const [s, t] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(t - s + 1)
