// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3
4`

const [n, a] = stdin.split('\n').map(Number)

console.log(n * n - a)
