// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `998244353 99824435`

const [a, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  const k = (a + b) / 2

  if (Number.isInteger(k)) {
    return k
  } else {
    return 'IMPOSSIBLE'
  }
}

console.log(ans())
