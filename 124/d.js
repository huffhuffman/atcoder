// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '14 2\n11101010110011\n'
const input = stdin.split('\n')

const [N, K] = input[0].split(' ').map(Number)
const S = input[1].split('')

const is0Start = S[0] === '0'
const is0End = S[S.length - 1] === '0'

let tmp = []

if (is0Start) {
  tmp = [0]
}

let count = 0
for (let i = 0; i < S.length; i++) {
  if (S[i] === S[i - 1] || i === 0) {
    count++
  } else {
    tmp[tmp.length] = count
    count = 1
  }
}

tmp[tmp.length] = count

if (is0End) {
  tmp[tmp.length] = 0
}

let cSumTmp = [0]

for (let i = 0; i < tmp.length; i++) {
  cSumTmp[i+1] = cSumTmp[i] + tmp[i]
}

let max = 0

for (let i = 0; i < cSumTmp.length; i += 2) {
  const right = Math.min(i + 2 * K + 1, cSumTmp.length - 1)
  const left = i

  const sum = cSumTmp[right] - cSumTmp[left]

  max = max > sum ? max : sum
}

console.log(max)
