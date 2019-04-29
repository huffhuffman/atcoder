// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `0300`

const n = stdin.split('\n')[0]

console.log(n[0] === n[1] && n[1] === n[2] && n[2] === n[3] ? 'SAME' : 'DIFFERENT')
