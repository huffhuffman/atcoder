// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `8 5`

const [n, k] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  if (k === 1 || n === k) {
    return 0
  }

  return n - k
}

console.log(ans())
