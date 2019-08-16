// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `13 3`

const [a, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  console.log(Math.max(a + b, a - b, a * b))
}

ans()
