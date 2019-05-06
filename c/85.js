// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1000 1234000`

const [n, y] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const res = _ => {
  for (let i = 0; i <= n; i++) {
    for (let j = 0; j <= n - i; j++) {
      const total = i * 10000 + j * 5000 + (n - i - j) * 1000
      if (total === y) return `${i} ${j} ${n - i - j}`
    }
  }
  return '-1 -1 -1'
}

console.log(res())
