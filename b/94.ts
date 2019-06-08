// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `10 7 5
1 2 3 4 6 8 9`

const [n, m, x] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const a = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = () => {
  const left = a.filter(v => v < x).length
  const right = a.filter(v => v > x).length

  return Math.min(left, right)
}

console.log(ans())
