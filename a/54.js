// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `8 6`

const [a, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)
  .map(e => (e === 1 ? 14 : e))

const res = _ => {
  if (a === b) return 'Draw'
  if (a > b) return 'Alice'
  return 'Bob'
}

console.log(res())
