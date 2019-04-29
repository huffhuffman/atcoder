// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `2 5 6`

const [a, b, c] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const res = _ => {
  if (b - a === c - b) return 'YES'
  return 'NO'
}

console.log(res())
