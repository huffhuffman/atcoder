// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `234`

const n = Number(stdin)

let i = 1

const ans = _ => {
  while (1) {
    const res = 111 * i
    if (res >= n) {
      return res
    }
    i++
  }
}

console.log(ans())
