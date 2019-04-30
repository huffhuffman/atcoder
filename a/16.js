// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `12 6`

const [m, d] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(m % d === 0 ? 'YES' : 'NO')
