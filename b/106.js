// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `7`

const n = Number(stdin)

let ans = 0
for (let i = 1; i <= n; i++) {
  let count = 0

  if (i % 2 !== 0) {
    for (let j = 1; j <= i; j++) {
      if (i % j === 0) count++
    }

    if (count === 8) ans++
  }
}

console.log(ans)
