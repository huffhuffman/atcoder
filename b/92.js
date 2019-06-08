// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `5
30 44
26
18
81
18
6`

const n = Number(stdin.split('\n')[0])
const [d, x] = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)
const a = stdin
  .split('\n')
  .map(Number)
  .slice(2)

const ans = () => {
  const count = a
    .map(v => {
      const arr = []
      for (let i = 0; i * v + 1 <= d; i++) {
        arr.push(i * v + 1)
      }
      return arr.length
    })
    .reduce((p, c) => p + c)

  return count + x
}

console.log(ans())
