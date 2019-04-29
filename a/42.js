// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5 5 7`

const s = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const res = s.filter(e => e === 5).length === 2 && s.filter(e => e === 7).length === 1 ? 1 : 0

console.log(res ? 'YES' : 'NO')
