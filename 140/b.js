// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `2
1 2
50 50
50`
const input = stdin.split('\n')

const n = Number(input[0])
const a = input[1].split(' ').map(Number)
const b = input[2].split(' ').map(Number)
const c = input[3].split(' ').map(Number)

const ans = () => {
  let prevFood = -100
  let count = 0
  for (let i = 0; i < n; i++) {
    const food = a[i] - 1

    const m = b[food]

    const additionalM = food === prevFood + 1 ? c[food - 1] : 0

    count += m + additionalM

    prevFood = food
  }

  console.log(count)
}

ans()
