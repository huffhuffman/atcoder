// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '100 1 10'

const [A, B, C] = stdin.split('\n')[0].split(' ').map(Number)

const res = Math.floor(B/A) > C ? C : Math.floor(B/A)

console.log(res)