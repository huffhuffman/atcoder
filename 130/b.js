// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `4 9
3 3 3 3`

const [n, x] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)
const l = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = () => {
  b = [0]
  for (let i = 1; i < n + 1; i++) {
    const bounce = b[i - 1] + l[i - 1]

    b.push(bounce)
  }

  return b.filter(e => x >= e).length
}

console.log(ans())
