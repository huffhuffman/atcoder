// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `5 7 7`

const [a, b, c] = stdin.split('\n')[0].split(' ')

const res = _ => {
  return a === b ? c : b === c ? a : b
}

console.log(res())