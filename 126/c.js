// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `100000 5`

const [n, k] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const getPow = num => {
  let c = 0
  let t = num
  while (1) {
    if (t >= k) {
      return c
    }
    t *= 2
    c++
  }
}

const ans = _ => {
  let ans = ''

  let sum = 0
  for (let i = 1; i <= n; i++) {
    const res = (1 / n) * Math.pow(1 / 2, getPow(i))
    sum += res
  }
  return sum
}

console.log(ans())
