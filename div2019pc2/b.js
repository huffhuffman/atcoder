// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `3
1 4
4 6
7 8`

const n = Number(stdin.split('\n')[0])

const [, ..._xy] = stdin.split('\n')
const xy = _xy.map(e => e.split(' ').map(Number))

const ans = () => {
  let count = 1

  const diffs = []

  for (let i = 0; i < n - 1; i++) {
    const diff = [xy[i + 1][0] - xy[i][0], xy[i + 1][1] - xy[i][1]]

    if (i === 0) {
      diffs.push(diff)
    } else {
      let pushable = true

      for (let j = 0; j < diffs.length; j++) {
        const [x, y] = diff
        const [dx, dy] = diffs[j]

        if (x === dx && y === dy) {
          pushable = false
        }
      }

      if (pushable) {
        diffs.push(diff)
      }
    }
  }

  count += diffs.length - 1

  console.log(count)
}

ans()
