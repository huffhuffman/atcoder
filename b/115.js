// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3
4980
7980
6980`

const n = Number(stdin.split('\n')[0])

const [, ..._p] = stdin.trim().split('\n')
const p = _p.map(Number)

const s = p.sort((a, b) => b - a)

let sum = 0
for (let i = 0; i < s.length; i++) {
  if (i === 0) {
    sum += s[i] / 2
  } else {
    sum += s[i]
  }
}

console.log(sum)
