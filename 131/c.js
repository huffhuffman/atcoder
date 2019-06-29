// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `10 40 6 8`

const [a, b, c, d] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const s = new Set()

const ans = () => {
  if (c === 1 || d === 1) {
    return 0
  }

  const cs = getCount(c)
  const ds = getCount(d)
  const cds = getCount(c * d)

  const divs = cs + ds - cds

  return b - a + 1 - divs
}

const getCount = n => {
  let i = 1

  let count = 0
  while (1) {
    const num = i * n

    if (a <= num && num <= b && !s.has(num)) {
      s.add(num)
      count++
    } else if (b < num) {
      return count
    }

    i++
  }
}

console.log(ans())
