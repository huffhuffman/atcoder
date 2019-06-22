// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `10`

const num = Number(stdin.split('\n')[0])

const makeFibN = n => {
  const fib = [1, 1]

  for (let i = 2; i <= n; i++) {
    fib[i] = fib[i - 1] + fib[i - 2]
  }

  console.log(fib)
}

const ans = () => {
  makeFibN(num)
}

ans()
