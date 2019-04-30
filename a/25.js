// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `abcde
8`

const [s, _n] = stdin.split('\n')
const n = Number(_n)

const sArr = s.split('')

const res = []
for (let i = 0; i < sArr.length; i++) {
  const row = sArr.map(e => `${sArr[i]}${e}`)
  res.push(...row)
}

console.log(res[n - 1])
