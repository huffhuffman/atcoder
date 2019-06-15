// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `10 2
4
5`

const mod = 1000000007

const [n, m] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const a = stdin
  .split('\n')
  .map(Number)
  .slice(1)

const A = new Set(a)


const ans = () => {
}

ans()
