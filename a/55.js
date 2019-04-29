// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `10`

const _n = stdin.split('\n')[0]
const n = Number(_n)

console.log(n * 800 - Math.floor(n / 15) * 200)
