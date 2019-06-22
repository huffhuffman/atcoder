// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `6 1
3`

const MOD = 1000000007

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
  const steps = A.has(1) ? [1, 0] : [1, 1]

  for (let i = 2; i <= n; i++) {
    if (A.has(i)) {
      steps[i] = 0
    } else if (steps[i - 1] === 0 && steps[i - 2] === 0) {
      return 0
    } else {
      steps[i] = (steps[i - 1] + steps[i - 2]) % MOD
    }
  }

  const last = steps[n]

  return last
}

console.log(ans())
