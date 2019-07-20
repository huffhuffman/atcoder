// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `2020 2040`

const [l, r] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  if (r - l > 2019) {
    return 0
  } else {
    let min = Infinity
    for (let i = l; i < r; i++) {
      for (let j = i + 1; j <= r; j++) {
        if (i !== j) {
          const mod = (i * j) % 2019

          min = Math.min(min, mod)
        }
      }
    }

    return min
  }
}

console.log(ans())
