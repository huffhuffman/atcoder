// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `?44`

const s = stdin.split('\n')[0]

const mod = 10 ** 9 + 7

const ans = () => {
  let str = s.split('')

  let i = 1

  let count = 0

  for (let i = 0; i < s.length; i++) {
    if (str[i] === '?') {
      str[i] = '9'
    }
  }

  const num = Number(str.join(''))

  console.log((Math.floor((num - 18) / 13) + 1) % mod)
}

ans()
