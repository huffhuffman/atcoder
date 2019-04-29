// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `12 34`

const [x, y] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

console.log(x > y ? 'Worse' : 'Better')
