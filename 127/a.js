// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `0 100`

const [a, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const cost = _ => {
  if (a >= 13) {
    return b
  } else if (a >= 6) {
    return b / 2
  } else {
    return 0
  }
}

console.log(cost())
