// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `SSSP`

const s = stdin.split('\n')[0]

const ans = () => {
  const uniq = new Set(s)

  if (uniq.size === 2) {
    const s0 = s[0]
    const len = s.split('').filter(e => e === s[0]).length

    if (len === 2) {
      return true
    }
  }
  return false
}

console.log(ans() ? 'Yes' : 'No')
