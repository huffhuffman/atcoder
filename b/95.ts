// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `5 3000
150
130
150
130
110`

const [n, _x] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const [, ...m] = stdin.split('\n').map(Number)

const ans = () => {
  const ms = m.sort((a, b) => a - b)

  let x = _x

  let count = 0

  for (let i = 0; i < n; i++) {
    x -= ms[i]

    if (x >= 0) {
      count++
    } else {
      return count
    }
  }

  return count + Math.floor(x / ms[0])
}

console.log(ans())
