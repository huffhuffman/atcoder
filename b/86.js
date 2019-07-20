// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `12 10`

const ab = stdin.split('\n')[0].split(' ')

const ans = () => {
  const joinedAB = ab.join('')
  const numAB = Number(joinedAB)

  const sqrt = Math.sqrt(numAB)

  console.log(Number.isInteger(sqrt) ? 'Yes' : 'No')
}

ans()
