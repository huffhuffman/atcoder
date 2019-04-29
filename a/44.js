// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5
3
10000
9000`

const [n, k, x, y] = stdin.split('\n').map(Number)

console.log(n > k ? k * x + (n - k) * y : n * x)
