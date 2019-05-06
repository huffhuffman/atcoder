// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `4
1 1 1 1
1 1 1 1`

const _n = stdin.split('\n')[0]
const n = Number(_n)

const a1 = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)
const a2 = stdin
  .split('\n')[2]
  .split(' ')
  .map(Number)

const a1Total = i => {
  let sum = 0
  for (let j = 0; j <= i; j++) {
    sum += a1[j]
  }
  return sum
}

const a2Total = i => {
  let sum = 0
  for (let j = i; j < a2.length; j++) {
    sum += a2[j]
  }
  return sum
}

const res = _ => {
  let max = 0
  for (let i = 0; i < n; i++) {
    const sum = a1Total(i) + a2Total(i)
    max = sum > max ? sum : max
  }
  return max
}

console.log(res())
