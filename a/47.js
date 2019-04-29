// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `30 30 20`

const [a, b, c] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const s = [a, b, c].sort((a, b) => a - b)

console.log(s[0] + s[1] === s[2] ? 'Yes' : 'No')
