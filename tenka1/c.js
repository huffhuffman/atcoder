// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '8\n....##..\n'

const N = Number(stdin.split('\n')[0])
const s = stdin.split('\n')[1]

const S = s.split('')

let leftBlack = 0
let rightWhite = S.reduce((p, c) => {
  return p += c === '.' ? 1 : 0
}, 0)

let min = Math.min(rightWhite, N - rightWhite)
S.forEach(v => {
  leftBlack += v === '#' ? 1 : 0 
  rightWhite -= v === '.' ? 1 : 0
  
  const sum = leftBlack + rightWhite

  min = sum < min ? sum : min
})

console.log(min)