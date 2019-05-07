// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `31 41 5`

const [a, b, c] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const s = [a, b, c].sort((a, b) => b - a)

const max = s[0]

const diff = s[0] - s[1] + s[0] - s[2]

const res = _ => {
  let count = Math.ceil(diff / 2)

  if (diff % 2 !== 0) count++

  return count
}

console.log(res())
