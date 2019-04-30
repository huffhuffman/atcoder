// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `2 3 4`

const abc = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const res = abc.sort((a, b) => a - b)[1]

console.log(res)
