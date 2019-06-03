// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `271828182`

const n = Number(stdin.split('\n')[0])

const ans = _ => {
  for (let i = n; i > 0; i--) {
    const root = Math.sqrt(i)
    if (Number.isInteger(root)) {
      return i
    }
  }
}

console.log(ans())
