// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `14
99592 10342 29105 78532 83018 11639 92015 77204 30914 21912 34519 80835 100000 1`

const n = Number(stdin.split('\n')[0])

const d = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = () => {
  const sorted = d.sort((a, b) => a - b)

  const center = n / 2

  const kMax = sorted[center]
  const kMin = sorted[center - 1]

  console.log(kMax - kMin)
}

ans()
