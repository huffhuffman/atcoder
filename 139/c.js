// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `4
1 2 3 4`
const input = stdin.split('\n')

const N = input[0]

const H = input[1].split(' ').map(Number)

const ans = () => {
  let streak = 0

  let max = 0

  for (let i = 0; i < N - 1; i++) {
    if (H[i] >= H[i + 1]) {
      streak++
    } else {
      max = Math.max(max, streak)
      streak = 0
    }
  }

  max = Math.max(max, streak)

  console.log(max)
}

ans()
