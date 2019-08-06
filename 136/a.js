// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `8 3 9`

const [a, b, c] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  const res = c - (a - b)
  console.log(res >= 0 ? res : 0)
}

ans()
