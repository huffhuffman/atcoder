// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1199`

const _r = stdin.split('\n')[0]

const r = Number(_r)

let res = 'AGC'
if (r < 1200) {
  res = 'ABC'
} else if (r < 2800) {
  res = 'ARC'
}

console.log(res)
