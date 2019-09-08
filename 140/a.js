// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `2`
const input = stdin.split('\n')

const n = input[0].split(' ')

const ans = () => {
  console.log(n ** 3)
}

ans()
