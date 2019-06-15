// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `3 2 3`

const [p, q, r] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  let min = Infinity

  min = p + q < min ? p + q : min
  min = p + r < min ? p + r : min
  min = q + r < min ? q + r : min

  return min
}

console.log(ans())
