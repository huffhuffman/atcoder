// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `4
4
4`

const [a, b, h] = stdin.split('\n').map(Number)

console.log(((a + b) * h) / 2)
