// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `100 100 100`

const a = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

a.sort((a, b) => b - a)

let cost = 0

cost = Math.abs(a[0] - a[1])

cost += Math.abs(a[1] - a[2])

console.log(cost)
