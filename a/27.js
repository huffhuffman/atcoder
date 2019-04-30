// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 1 2`

const [l1, l2, l3] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const res = _ => {
  if (l1 === l2) return l3
  if (l2 === l3) return l1
  if (l1 === l3) return l2
}

console.log(res())
