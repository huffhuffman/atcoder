// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `20 4`

const [n, d] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  return Math.ceil(n / (d * 2 + 1))
}

console.log(ans())
