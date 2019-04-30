// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 2`

const [a, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(`${b} ${a}`)
