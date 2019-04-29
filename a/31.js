// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `101 65`

const [a, d] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const res = _ => {
  if ((a + 1) * d >= a * (d + 1)) {
    return (a + 1) * d
  } else {
    return a * (d + 1)
  }
}

console.log(res())
