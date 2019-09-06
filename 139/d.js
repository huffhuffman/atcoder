// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `1`
const input = stdin.split('\n')

const N = input[0]

const sum = num => {
  if (num === 0) return 0

  return sum(num - 1) + num
}

const ans = () => {
  const res = sum(N - 1)

  console.log(res)
}

ans()
