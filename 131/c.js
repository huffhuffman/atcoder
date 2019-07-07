// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `314159265358979323 846264338327950288 419716939 937510582`

const [a, b, c, d] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  const aCount = getCount(a - 1)
  const bCount = getCount(b)

  return bCount - aCount
}

const getCount = num => {
  const cmul = Math.floor(num / c)
  const dmul = Math.floor(num / d)

  const l = lcm(c, d)
  const dups = Math.floor(num / l)

  return num - cmul - dmul + dups
}

const lcm = (a,b) => {
  const g = (n, m) => m ? g(m, n % m) : n
  return a * b / g(a, b)
}

const gcd = (a, b) => {
  if (b === 0){
      return a
  }
  return gcd(b, a % b)
}

console.log(ans())
