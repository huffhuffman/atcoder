// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `5 3`

const [n, k] = stdin
  .split('\n')[0]
  .split(' ')
  .map(Number)

const MOD = 10 ** 9 + 7

const ans = () => {
  let counts = []

  for (let i = 0; i < k; i++) {
    if (i === 0) {
      counts.push(n - k + 1)
    } else {
      counts.push(getCom(n - i, k - i))
    }
  }

  for (let i = 0; i < k; i++) {
    console.log(counts[i] % MOD)
  }
}

const fact = num => {
  let fac = 1
  for (let i = 1; i <= num; i++) {
    fac = fac * i
  }
  return fac
}

const getCom = (N, R) => {
  return fact(N) / (fact(R) * fact(N - R))
}

ans()
