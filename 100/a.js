// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `9 4`

const ab = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const f = ab.filter(e => 8 >= e)

console.log(f.length === 2 ? 'Yay!' : ':(')