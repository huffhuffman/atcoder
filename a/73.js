// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `20`

const n = stdin.split('\n')[0].split('')

console.log(n.indexOf('9') > -1 ? 'Yes' : 'No')