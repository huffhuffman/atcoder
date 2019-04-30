// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `25
12
`

const [a, b] = stdin.split('\n').map(Number)

console.log(a === b ? 0 : b - (a % b))
