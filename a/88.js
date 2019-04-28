// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `37
514`

const [n, a] = stdin
  .split('\n')
  .filter(e => e)
  .map(Number)

const mod = n % 500

let res = 'No'

if (mod === 0) res = 'Yes'

if (mod <= a) res = 'Yes'

console.log(res)
