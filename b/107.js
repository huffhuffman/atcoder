// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `4 4
##.#
....
##.#
.#.#`

const [h, w] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const [, ...a] = stdin.trim().split('\n')

const aij = a.map(e => e.split(''))

let delRowIdx = []
let delColIdx = []

for (let i = 0; i < h; i++) {
  let rowStreak = true

  for (let j = 0; j < w; j++) {
    const el = aij[i][j]

    if (i === 0) {
      delColIdx.push(el === '#' ? false : true)
    } else if (el === '#') {
      delColIdx[j] = false
    }

    if (el === '#') {
      rowStreak = false
    }

    if (j === w - 1 && rowStreak) {
      delRowIdx.push(i)
    }
  }
}

for (let i = 0; i < h; i++) {
  if (delRowIdx.indexOf(i) === -1) {
    const row = aij[i].filter((r, j) => !delColIdx[j])
    console.log(row.join(''))
  }
}
