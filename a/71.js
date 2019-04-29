// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 999 1000`

const [x, a, b] = stdin.split('\n')[0].split(' ').map(Number)

console.log(Math.abs(x-a) > Math.abs(x-b) ? 'B' : 'A')