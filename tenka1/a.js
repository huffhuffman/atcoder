// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '10 2 4'

const [A, B, C] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

if (A < C && C < B) {
  console.log('Yes')
} else if (A > C && B < C) {
  console.log('Yes')
} else {
  console.log('No')
}
