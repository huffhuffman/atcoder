// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `8 9`
const input = stdin.split('\n')

const [A, B] = input[0].split(' ').map(Number)

const ans = () => {
  let count = 0

  let i = 0

  let slot = 1
  while (1) {
    if (slot >= B) break

    slot += A - 1
    count++
  }

  console.log(count)
}

ans()
