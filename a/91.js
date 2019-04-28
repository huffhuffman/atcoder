// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `50 100 120`

const [a, b, c] = stdin.split('\n')[0].split(' ').map(Number)

const res = a+b >= c ? 'Yes' : 'No'

console.log(res)