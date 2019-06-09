// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `6
red
red
blue
yellow
yellow
red
5
red
red
yellow
green
blue`

const n = Number(stdin.split('\n')[0])
const s = stdin.split('\n').slice(1, n + 1)
const m = Number(stdin.split('\n')[n + 1])
const t = stdin.split('\n').slice(n + 2, n + 2 + m)

const getTotal = str => {
  let total = 0
  for (let i = 0; i < n; i++) {
    if (s[i] === str) {
      total++
    }
  }

  for (let i = 0; i < m; i++) {
    if (t[i] === str) {
      total--
    }
  }

  return total
}

const ans = () => {
  const totals = s.map(str => getTotal(str))

  const max = Math.max(...totals)

  return max < 0 ? 0 : max
}

console.log(ans())
