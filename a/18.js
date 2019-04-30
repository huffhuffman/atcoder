// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `12
18
11`

const [a, b, c] = stdin.split('\n').map(Number)

const sorted = [a, b, c].sort((A, B) => B - A)

console.log(sorted.indexOf(a) + 1)
console.log(sorted.indexOf(b) + 1)
console.log(sorted.indexOf(c) + 1)
