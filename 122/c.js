// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '8 3\nACACTACG\n3 7\n2 3\n1 8\n'

const [N_Q, S, ...l_r] = stdin.split('\n').filter(el=>el)

console.log(l_r)

const [N, Q] = N_Q.split(' ').map(Number)
const [...lr] = l_r.map(el => el.split(' ').map(Number))

let count = 0
const a = S.split('').map((el, i, arr) => {
  if (el === 'C' && arr[i - 1] === 'A') {
    count++
  }
  return count
})

const res = lr.map(el => {
  const [l, r] = el
  return a[r - 1] - a[l - 1]
})

console.log(res.join('\n'))
