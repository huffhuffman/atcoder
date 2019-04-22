// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '9\neducation\n7\n'

let [n, s, k] = stdin.split('\n')

const i = Number(k) - 1

const repStr = s[i]

const filtered = s.split('').filter(e=>e!==repStr)

filtered.forEach(e => {
  s = s.replace(e, '*')
})

console.log(s)
