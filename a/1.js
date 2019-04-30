// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `15
10`

const [h1, h2] = stdin.split('\n')

console.log(h1 - h2)
