// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `10 3
1 8 5 7 100 4 52 33 13 5
3 10
4 30
1 4`

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
  for (let i = 0; i < bc.length; i++) {
    let [b, c] = bc[i]

    a.sort((a, b) => a - b)
    console.log(a)
    if (a[0] < c) {
      for (let j = 0; j < a.length; j++) {
        if (a[j] < c && b > 0) {
          a[j] = c
          b--
        }
      }
    }
  }

  return a.reduce((p, c) => p + c)
}

console.log(ans())
