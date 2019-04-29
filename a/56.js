// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `H H`

const [a, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(e=>e==='H'?1:0)

console.log(a^b===0?'H':'D')
