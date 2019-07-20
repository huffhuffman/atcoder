// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `5 1
1
2
3
4
5`

const [n, d] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const [, ...x] = stdin.split('\n').map(e => e.split(' ').map(Number))

const ans = () => {
  let count = 0
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      const p1 = x[i]
      const p2 = x[j]

      const dist = calc(p1, p2)

      if (Number.isInteger(dist)) {
        count++
      }
    }
  }

  console.log(count)
}

const calc = (p1, p2) => {
  let sum = 0
  for (let i = 0; i < d; i++) {
    const yz = p1[i] - p2[i]
    sum += yz ** 2
  }

  return Math.sqrt(sum)
}

ans()
