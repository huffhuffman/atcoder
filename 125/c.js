// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5
6 7 8 12 16`

const _n = stdin.split('\n')[0]
const n = Number(_n)

const a = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

// const sorted = a.sort((a, b) => a - b)

let tmp = 0
const l = a.map((e, i) => {
  if (i === 0) {
    tmp = e
    return e
  }
  tmp = gcd(tmp, e)
  return tmp
})

const r = a
  .slice(0)
  .reverse()
  .map((e, i) => {
    if (i === 0) {
      tmp = e
      return e
    }
    tmp = gcd(tmp, e)
    return tmp
  })
  .reverse()

let max = 0

a.forEach((e, i) => {
  let g = 0
  if (i === 0) {
    g = r[1]
  } else if (i === a.length - 1) {
    g = l[i - 1]
  } else {
    g = gcd(l[i - 1], r[i + 1])
  }

  max = max < g ? g : max
})

console.log(max)

function gcd(a, b) {
  if (b === 0) {
    return a;
  }
  return gcd(b, a % b);
}