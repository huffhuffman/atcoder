// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `4 0`

const [k, x] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  const min = Math.max(x - (k - 1), -1000000)
  const max = Math.min(x + (k - 1), 1000000)

  let res = []

  for (let i = min; i <= max; i++) {
    res.push(i)
  }

  console.log(res.join(' '))
}

ans()
