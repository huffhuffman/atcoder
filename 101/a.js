// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `+-++`

const s = stdin.split('\n')[0].split('')

let res = 0
s.forEach(e => {
  if (e === '+') {
    res++
  } else {
    res--
  }
})

console.log(res)