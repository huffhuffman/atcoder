// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `28 21`

const [w, h] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(w / h === 4 / 3 ? '4:3' : '16:9')
