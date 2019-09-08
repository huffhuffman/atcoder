// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `2
3`
const input = stdin.split('\n')

const n = Number(input[0])
const b = input[1].split(' ').map(Number)

const ans = () => {
  let a = []

  b.push(Infinity)
  b.push(Infinity)

  for (let i = 0; i < n; i++) {
    if(i === 0) {
      a.push(b[0])
    } else {
      const prevB = b[i - 1]
      const curB = b[i]
      const v = Math.min(curB, prevB)
      a.push(v)
    }
  }

  console.log(a.reduce((p, c) => p + c))
}

ans()
