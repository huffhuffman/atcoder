// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `12 100`

const [a,b] = stdin.split('\n')[0].split(' ').map(Number)

console.log(Math.ceil(b/a))