// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `1
1000000000`

const n = Number(stdin.split('\n')[0])
const h = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = () => {
  let max = h[0]

  for (let i = 1; i < n; i++) {
    if (max - h[i] > 1) {
      return 'No'
    }

    max = Math.max(max, h[i])
  }

  return 'Yes'
}

console.log(ans())
