// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `8
P Y W G Y W Y Y`

const n = Number(stdin.split('\n')[0])
const s = stdin
  .split('\n')[1]
  .split(' ')

const ans = () => {
  let is4 = false

  for (let i = 0; i < n; i++) {
    if (s[i] === 'Y') {
      is4 = true
    }
  }

  console.log(is4 ? 'Four' : 'Three')
}

ans()
