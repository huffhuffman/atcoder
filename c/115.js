// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5 3
10
15
11
14
12`

const [n, k] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const [, ..._h] = stdin.trim().split('\n')
const h = _h.map(Number)

const s = h.sort((a, b) => a - b)

const getMin = _ => {
  let min = Infinity
  for (let i = 0; i <= s.length - k; i++) {
    const diff = s[i + k - 1] - s[i]
    min = min > diff ? diff : min
  }
  return min
}

console.log(getMin())
