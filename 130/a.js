// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `6 6`

const [x, a] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  if (x < a) {
    return 0
  } else {
    return 10
  }
}

console.log(ans())
