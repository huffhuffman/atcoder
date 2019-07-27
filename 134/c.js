// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `2
5
5`

const n = Number(stdin.split('\n')[0])
const [_, ...a] = stdin.split('\n').map(Number)

const ans = () => {
  const sorted = [...a].sort((a, b) => b - a)
  const max = sorted[0]
  const next = sorted[1]

  const resArr = []

  for (let i = 0; i < n; i++) {
    if (a[i] !== max) {
      resArr.push(max)
    } else {
      resArr.push(next)
    }
  }

  for (let i = 0; i < n; i++) {
    console.log(resArr[i])
  }
}

ans()
