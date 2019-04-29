// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `123`

const n = stdin.split('\n')[0]

const r = n.split('').reverse().join('')

console.log(r === n ? 'Yes' : 'No')
