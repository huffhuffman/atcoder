// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5 7`

const [a, b] = stdin.split('\n')[0].split(' ').map(Number)

const res = (a-1)*(b-1)

console.log(res)