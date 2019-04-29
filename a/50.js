// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 + 2`

const s = stdin
  .split('\n')[0]
  .split(' ')
  .join('')

console.log(eval(s))