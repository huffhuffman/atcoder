// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `11 3
1 1 1 1 1 1 1 1 1 1 1
3 1000000000
4 1000000000
3 1000000000`

const [n, m] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)
let a = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const [, , ..._bc] = stdin.trim().split('\n')
const bc = _bc.map(e => e.split(' ').map(Number))

const ans = _ => {
  let pool = a.map(e => [e, 1])

  for (let i = 0; i < m; i++) {
    const [b, c] = bc[i]

    pool.push([c, b])
  }

  pool.sort((a, b) => {
    return b[0] - a[0]
  })

  let i = 0
  let sum = 0
  let count = 0
  while (count < n) {
    const card = pool[i][0]
    sum += card
    count++
    pool[i][1]--
    if (pool[i][1] <= 0) {
      i++
    }
  }

  return sum
}

console.log(ans())
