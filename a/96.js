// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `11 30`

const [a, b] = stdin.split('\n')[0].split(' ').map(Number)

let res = 0

res = a <= b ? a : a - 1

console.log(res)

