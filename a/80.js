// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `7 17 120`

const [n, a, b] = stdin.split('\n')[0].split(' ').map(Number)

const res = _ => {
  return Math.min(n*a, b)
}

console.log(res())