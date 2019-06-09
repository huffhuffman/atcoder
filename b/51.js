// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `5 15`

const [k, s] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  let x = (y = z = 0)
  let count = 0
  for (let i = 0; i <= k; i++) {
    x = i
    for (let j = 0; j <= k; j++) {
      y = j
      z = s - (x + y)
      if (0 <= z && z <= k) {
        count++
      }
    }
  }

  return count
}

console.log(ans())
