// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5
1 1 1 1 1`

const n = stdin.split('\n')[0]
const a = stdin
  .trim()
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = _ => {
  const min = Math.min(...a)
  const max = Math.max(...a)

  return Math.abs(max - min)
}

console.log(ans())
