// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `5 3
1 2
1 3
1 4
2 1
2 3`

const [n, m] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)
const [_, ..._ab] = stdin.split('\n')
const ab = _ab.map(v => v.split(' ').map(Number))

const ans = () => {
  const abSorted = ab.sort((a, b) => b[0] - a[0]).sort((a, b) => b[1] - a[1])

  console.log(abSorted)

  let count = 0
  let day = 0
  for (let i = 0; i < n; i++) {
    const [a, b] = abSorted[i]

    if (a + day > m) {
      continue
    } else {
      day++
      count += b
    }
  }

  console.log(count)
}

ans()
