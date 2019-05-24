// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3`

const _n = stdin.trim().split('\n')
const n = Number(_n)

const ans = _ => {
  if (n < 4) return 'No'
  for (let i = 0; 4 * i <= n; i++) {
    for (let j = 0; 7 * j <= n; j++) {
      const ab = 4 * i + 7 * j
      if (ab === n) return 'Yes'
    }
  }
  return 'No'
}

console.log(ans())
