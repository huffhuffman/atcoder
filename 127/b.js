// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `4 40 60`

const [r, d, x] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = _ => {
  let prev = x
  for (let i = 0; i < 10; i++) {
    const res = r * prev - d
    console.log(res)
    prev = res
  }
}

ans()
