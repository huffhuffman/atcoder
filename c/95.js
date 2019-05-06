// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1500 2000 500 90000 100000`

const [a, b, c, x, y] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const res = _ => {
  const totals = []

  for (let n = 0; n <= Math.max(x, y) * 2; n += 2) {
    const aCount = x - Math.abs(n / 2) >= 0 ? x - Math.abs(n / 2) : 0
    const bCount = y - Math.abs(n / 2) >= 0 ? y - Math.abs(n / 2) : 0
    const total = aCount * a + bCount * b + n * c

    totals.push(total)
  }

  return Math.min(...totals)
}

console.log(res())
