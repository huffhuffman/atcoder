// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `2 3 4`

const [r, g, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const rgb = Number(`${r}${g}${b}`)

console.log(rgb % 4 === 0 ? 'YES' : 'NO')
