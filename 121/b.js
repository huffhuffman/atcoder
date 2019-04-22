// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '2 3 -10\n1 2 3\n3 2 1\n1 2 2\n'

const input = stdin.split('\n')

const [N, M, C] = input[0].split(' ').map(Number)
const [...B] = input[1].split(' ').map(Number)
const [, , ...rawA] = input
const [...A] = rawA.filter((e, i) => i < N).map(el => el.split(' ').map(Number))

const res = A.filter(el => {
  const abArr = el.map((a,i)=>B[i]*a)
  const calc = abArr.reduce((pv,cv)=>pv+cv) + C
  return calc > 0
}).length

console.log(res)