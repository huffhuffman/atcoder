// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 5 2`

const [a, b, c] = stdin.split('\n')[0].split(' ').map(Number)

const sorted = [a,b,c].sort((p,v)=>v-p)

const res = sorted[0] * 10 + sorted[1] + sorted[2]

console.log(res)