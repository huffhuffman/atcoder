// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `2017/01/07`

const s = stdin.split('\n')[0]

const res = s.replace('2017', '2018')

console.log(res)