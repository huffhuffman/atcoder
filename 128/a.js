// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `32 21`

const [a, p] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = _ => {
  const keppen = p + a * 3

  return Math.floor(keppen / 2)
}

console.log(ans())
