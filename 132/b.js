// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `9
9 6 3 2 5 8 7 4 1`

const n = Number(stdin.split('\n')[0])

const p = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = () => {
  let count = 0
  for (let i = 1; i < n - 1; i++) {
    const sorted = [p[i - 1], p[i], p[i + 1]].sort((a, b) => a - b)
    if (sorted[1] === p[i]) {
      count++
    }
  }

  console.log(count)
}

ans()
