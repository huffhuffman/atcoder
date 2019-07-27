// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `2
100 1 1
1 100`

const n = Number(stdin.split('\n')[0])
const a = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)
const b = stdin
  .split('\n')[2]
  .split(' ')
  .map(Number)

const ans = () => {
  const aRev = [...a].reverse()
  const bRev = [...b].reverse()

  let count = 0

  for (let i = 0; i < n; i++) {
    if (bRev[i] >= aRev[i]) {
      bRev[i] -= aRev[i]
      count += aRev[i]

      aRev[i] = 0
    } else {
      aRev[i] -= bRev[i]
      count += bRev[i]

      bRev[i] = 0
    }

    if (bRev[i] >= aRev[i + 1]) {
      bRev[i] -= aRev[i + 1]
      count += aRev[i + 1]

      aRev[i + 1] = 0
    } else {
      aRev[i + 1] -= bRev[i]
      count += bRev[i]

      bRev[i] = 0
    }
  }

  console.log(count)
}

ans()
