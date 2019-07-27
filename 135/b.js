// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `5
5 2 3 4 1`

const n = Number(stdin.split('\n')[0])
const p = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = () => {
  if (isUpperOrder(p)) 'YES'

  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      const arr = [...p]

      arr[i] = p[j]
      arr[j] = p[i]

      if (isUpperOrder(arr)) {
        return 'YES'
      }
    }
  }

  return 'NO'
}

const isUpperOrder = ar => {
  for (let i = 1; i < n; i++) {
    if (ar[i - 1] > ar[i]) {
      return false
    }
  }

  return true
}

console.log(ans())
