// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `xxx`

const s = stdin.split('\n')[0].split('')

let len = s.filter(e=>e==='o').length

console.log(len * 100 + 700)
