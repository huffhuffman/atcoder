// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3 4 5`

const [ab, bc] = stdin.split('\n')[0].split(' ').map(Number)

const res = ab * bc / 2

console.log(res)
