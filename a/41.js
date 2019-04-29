// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `atcoder
3`

const [s,_i] = stdin.split('\n')
const i = Number(_i)

console.log(s[i-1])
