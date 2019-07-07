// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `30
40
50
6000`

const [a, b, c, x] = stdin.split('\n').map(Number)

const ans = () => {
  let count = 0

  for (let i = 0; i <= a; i++) {
    for (let j = 0; j <= b; j++) {
      for (let v = 0; v <= c; v++) {
        const sum = i * 500 + j * 100 + v * 50

        if (sum === x) {
          count++
        }
      }
    }
  }

  console.log(count)
}

ans()
