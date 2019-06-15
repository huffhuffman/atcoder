// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `8
27 23 76 2 3 5 62 52`

const n = Number(stdin.split('\n')[0])
const w = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = () => {
  const t = w.length - 2

  let res = Infinity
  for (let i = 0; i <= t; i++) {
    let s1 = 0
    let s2 = 0
    for (let j = 0; j < w.length; j++) {
      if (j <= i) {
        s1 += w[j]
      } else {
        s2 += w[j]
      }
    }
    const abs = Math.abs(s1 - s2)

    res = Math.min(abs, res)
  }

  return res
}

console.log(ans())
