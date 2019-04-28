// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = `3 4 5 6
4
7
7`

const [n, A, B, C] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const [, ...rest] = stdin.split('\n')

const ls = rest.filter(e => e).map(Number)

function dfs(current, a, b, c) {
  console.log(current, a, b, c)
  if (current === n) {
    if (a === 0 || b === 0 || c === 0) return Infinity
    return Math.abs(a - A) + Math.abs(b - B) + Math.abs(c - C)
  }

  const r0 = dfs(current + 1, a, b, c)
  const r1 = dfs(current + 1, a + ls[current], b, c) + 10
  const r2 = dfs(current + 1, a, b + ls[current], c) + 10
  const r3 = dfs(current + 1, a, b, c + ls[current]) + 10
  return Math.min(r0, r1, r2, r3)
}

console.log(dfs(0, 0, 0, 0) - 3 * 10)
