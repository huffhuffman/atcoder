const fs = require('fs')
const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const [input, ...rest] = stdin.split('\n')

const res = {
  ['A']: 'T',
  ['G']: 'C',
  ['T']: 'A',
  ['C']: 'G',
}[input]

console.log(res)
