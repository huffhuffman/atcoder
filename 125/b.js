// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1
1
50`

const _n = stdin.split('\n')[0]
const n = Number(_n)

const v = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)
const c = stdin
  .split('\n')[2]
  .split(' ')
  .map(Number)

let x = 0
let y = 0
const diff = v.map((e, i) => {
  if (e - c[i] > 0) {
    x += e
    y += c[i]
  }
  return e - c[i]
})

const res = x - y

console.log(res)
