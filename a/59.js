// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `atcoder beginner contest`

const s = stdin.split('\n')[0].split(' ')

const res = s.map(e=>e[0]).join('').toUpperCase()

console.log(res)