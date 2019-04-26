// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 2`

const [a, b] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

let res = 'No'
for (let i = 1; i < 4; i++) {
  const product = a * b * i
  if (product % 2 !== 0) res = 'Yes'
}

console.log(res)
