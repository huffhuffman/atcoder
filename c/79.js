// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `3242`

const s = stdin
  .split('\n')[0]
  .split('')
  .map(Number)

const ans = () => {
  const ops = []

  for (let i = 0; i < 2 ** 3; i++) {
    const op = []
    for (let j = 0; j < 3; j++) {
      if ((i >> j) & 1) {
        op.push('+')
      } else {
        op.push('-')
      }
    }

    ops.push(op)
  }

  const svn = ops.map(e => calculate(e)).filter(o => o.res === 7)

  return svn[0].calc.map(String).join('')
}

const calculate = op => {
  const calc = []
  for (let i = 0; i < 3; i++) {
    calc.push(s[i])
    calc.push(op[i])
  }
  calc.push(s[3])
  calc.push('=7')

  let res = calc[0]
  for (let i = 0; i < 7; i++) {
    if (calc[i] === '+') {
      res += calc[i + 1]
    } else if (calc[i] === '-') {
      res -= calc[i + 1]
    }
  }

  return { res, calc }
}

console.log(ans())
