// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `3 -1`

const [n, l] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  const ajis = Array(n)
    .fill(0)
    .map((e, i) => {
      return l + i
    })

  let sum = 0

  if (ajis[0] > 0) {
    for (let i = 1; i < ajis.length; i++) {
      sum += ajis[i]
    }
    return sum
  } else if (ajis[ajis.length - 1] < 0) {
    for (let i = 0; i < ajis.length - 1; i++) {
      sum += ajis[i]
    }
    return sum
  } else {
    return ajis.reduce((p, c) => p + c)
  }
}

console.log(ans())
