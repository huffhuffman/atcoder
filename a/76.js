// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `4500
0`

const [r, g] = stdin.split('\n').map(Number)

console.log(2 * g - r)
