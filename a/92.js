// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `600
300
220
420`

const [a, b, c, d] = stdin.split('\n').map(Number)

const t = a > b ? b : a

const bus = c > d ? d : c

console.log(t+bus)