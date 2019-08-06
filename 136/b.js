// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `100000`

const n = Number(stdin.split('\n')[0])

const ans = () => {
  let count = 0

  for (let i = 1; i <= n; i++) {
    const len = String(i).length

    if (len % 2 !== 0) count++
  }

  console.log(count)
}

ans()
