// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 3`

const [a, b] = stdin.split('\n')[0].split(' ').map(Number)

const res = _ => {
  return Math.ceil((a+b)/2)
}

console.log(res())