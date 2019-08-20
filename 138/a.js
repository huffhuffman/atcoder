// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `4049
red`

const a = Number(stdin.split('\n')[0])
const s = stdin.split('\n')[1]

const ans = () => {
  console.log(a >= 3200 ? s : 'red')
}

ans()
