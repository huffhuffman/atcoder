// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `7
994 518 941 851 647 2 581`

const n = Number(stdin.split('\n')[0])

const a = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

console.log(a.map(e => e - 1).reduce((p, c) => p + c))
