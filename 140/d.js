// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `10 1
LLLLLRRRRR`
const input = stdin.split('\n')

const [n, k] = input[0].split(' ').map(Number)
const s = input[1]

const sl = s.split('')

// 連続してる数-1
const ans = () => {
  let seq = 0
  let seqs = []

  for (let i = 1; i < n; i++) {
    if (sl[i] === sl[i - 1]) {
      seq++
    } else {
      seqs.push(seq)
      seq = 0
    }
  }
  seqs.push(seq)

  const hps = seqs.reduce((p, c) => p + c)

  console.log(Math.min(n - 1, hps + 2 * k))
}

ans()
