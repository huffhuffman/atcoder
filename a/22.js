// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5 50 100
120
-10
-20
-30
70`

const [n, s, t] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)
const _w = stdin.split('\n')[1]
const w = Number(_w)
const [, , ..._a] = stdin.split('\n')
const a = _a.filter(e=>e).map(Number)

let tmp = w
const list = [
  w,
  ...a.map(e => {
    tmp += e
    return tmp
  }),
]

const res = list.filter(e => e >= s && e <= t).length

console.log(res)
