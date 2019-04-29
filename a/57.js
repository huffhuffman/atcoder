// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `23 2`

const [a, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const res = _ => {
  return (a + b) % 24
}

console.log(res())
