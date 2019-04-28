// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3 4`

const [a, b] = stdin.split('\n')[0].split(' ').map(Number)

console.log((a*b)%2===0 ? 'Even' : 'Odd')