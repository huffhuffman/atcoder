// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = ``

const [a, b, k] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const ans = () => {
  let right = a
  for (let i = 0; i < k && right <= b; i++, right++) {
    console.log(right)

    if (right >= b) {
      return
    }
  }

  let left = b
  let lefts = []
  for (let i = 0; i < k && right - 1 < left; i++, left--) {
    lefts.push(left)
  }

  lefts.reverse().forEach(v => console.log(v))
}

ans()


export {}