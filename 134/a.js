// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `80`

const r = Number(stdin.split('\n')[0])

const ans = () => {
  console.log(3 * r ** 2)
}

ans()
