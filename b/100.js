// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `0 8`

const [d, n] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const divideCount = x => {
  let c = 0
  while (x % 100 === 0) {
    c++

    x /= 100

    if (x < 100) {
      return c
    }
  }
  return c
}

const ans = _ => {
  let count = 0
  let num = 1

  while (1) {
    switch (d) {
      case 0:
        if (divideCount(num) === 0) count++
        break
      case 1:
        if (divideCount(num) === 1) count++
        break
      case 2:
        if (divideCount(num) === 2) count++
        break
    }

    if (count === n) {
      return num
    }

    num++
  }
}

console.log(ans())
