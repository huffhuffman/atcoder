// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `7
zenkoku
touitsu
program`

const [_n, a, b, c] = stdin.trim().split('\n')

const n = Number(_n)

const ans = _ => {
  let count = 0
  for (let i = 0; i < n; i++) {
    if (a[i] !== b[i] && b[i] !== c[i] && a[i] !== c[i]) {
      count += 2
    } else if (!(a[i] === b[i] && b[i] === c[i] && a[i] === c[i])) {
      count++
    }
  }
  return count
}

console.log(ans())
