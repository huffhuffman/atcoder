// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `1
1000`

const n = Number(stdin.split('\n')[0])
const a = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const ans = () => {
  const revs = a.map(v => 1 / v)
  const res = 1 / revs.reduce((p, c) => p + c)

  console.log(res)
}

ans()
