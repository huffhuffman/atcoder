// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `999999999`
const n = Number(stdin.split('\n')[0])

let count = 0

const ans = () => {
  dfs(0)

  console.log(count)
}

const dfs = val => {
  const strVal = String(val)

  if (val > n) {
    return
  }

  if (strVal.indexOf('3') >= 0 && strVal.indexOf('5') >= 0 && strVal.indexOf('7') >= 0) {
    count++
  }

  dfs(10 * val + 3)
  dfs(10 * val + 5)
  dfs(10 * val + 7)
}

ans()
