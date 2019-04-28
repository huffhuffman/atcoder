// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1234
150
100`

const [x, a, b] = stdin.split('\n').map(Number)

const res = (x - a)%b

console.log(res)
