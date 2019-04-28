// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3 5 7`

const [a, b, t] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(Math.floor(t / a) * b)
