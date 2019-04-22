// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1`

const _s = stdin.split('\n')[0]
const s = Number(_s)

function fx(n) {
  if (n % 2 === 0) {
    return n / 2
  } else {
    return 3 * n + 1
  }
}

let i = 0
let ai = [s]

while (true) {
  i++
  let r = 0

  if (i === 1) {
    r = fx(s)
  } else {
    r = fx(ai[i - 1])
  }

  if (ai.indexOf(r) > -1) {
    ai.push(r)
    break
  }
  ai.push(r)
}

console.log(ai.length)
