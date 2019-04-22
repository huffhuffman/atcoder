// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `8 3`

const [t, x] = stdin.split(' ').map(Number)

console.log(t/x)