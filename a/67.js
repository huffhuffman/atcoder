// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 1`

const [a, b] = stdin.split('\n')[0].split(' ').map(Number)

const res = [a, b, a+b].filter(e=>e%3===0).length

console.log(res > 0 ? 'Possible' : 'Impossible')