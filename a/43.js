// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1`

const _n = stdin.split('\n')[0]
const n = Number(_n)

const rec = x => {
  if(x===1)return 1
  return rec(x-1)+x
}

console.log(rec(n))