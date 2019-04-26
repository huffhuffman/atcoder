// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 1`

const [n, i] = stdin.split('\n')[0].split(' ').map(Number)

console.log(n-i+1)