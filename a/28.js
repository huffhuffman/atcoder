// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `95`

const _n = stdin.split('\n')[0]
const n = Number(_n)

const res = _ => {
  if (n <= 59) {
    return 'Bad'
  } else if (n <= 89) {
    return 'Good'
  } else if (n <= 99) {
    return 'Great'
  } else {
    return 'Perfect'
  }
}

console.log(res())
