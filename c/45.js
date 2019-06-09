// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `9999999999`

const s = stdin.split('\n')[0]

const ans = () => {
  const exp = s.length - 1
  const pattern = 2 ** exp

  let sum = 0
  for (let i = 0; i < pattern; i++) {
    const calc = []

    for (let j = 0; j < s.length; j++) {
      calc.push(s[j])

      if ((i >> j) & 1) {
        calc.push('+')
      }
    }

    sum += calc
      .join('')
      .split('+')
      .map(Number)
      .reduce((p, c) => p + c)
  }

  return sum
}

console.log(ans())
