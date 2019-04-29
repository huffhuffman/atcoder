// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `E C`

const [x, y] = stdin.split('\n')[0].split(' ')

const res = _ => {
  return x === y ? '=' : x > y ? '>' : '<'
}

console.log(res())