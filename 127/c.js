// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `4 2
1 3
2 4`

const [n, m] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const [, ..._lr] = stdin.trim().split('\n')
const lr = _lr.map(e => e.split(' ').map(Number))

const ans = _ => {
  let lMax = lr[0][0]
  let rMin = lr[0][1]

  for (let i = 0; i < lr.length; i++) {
    const [l, r] = lr[i]

    if (l > lMax) {
      lMax = l
    }

    if (r < rMin) {
      rMin = r
    }
  }

  if (rMin >= lMax) {
    return rMin - lMax + 1
  } else {
    return 0
  }
}

console.log(ans())
