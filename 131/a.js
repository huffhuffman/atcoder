// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8').trim()

const stdin = `1233`

const s = stdin.split('\n')[0]

const ans = () => {
  const sAry = s.split('')

  for (let i = 1; i < sAry.length; i++) {
    if (sAry[i] === sAry[i - 1]) {
      return 'Bad'
    }
  }
  return 'Good'
}

console.log(ans())
