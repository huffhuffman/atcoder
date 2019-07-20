// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `4 2 8`

const [n, a, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  const t = n * a
  console.log(Math.min(t, b))
}

ans()
