const fs = require('fs')
const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const input = stdin.split('\n')[0]

const arr = input.split('')

let count = 0
let res = 0

arr.map(el => {
  if (el === 'A' || el === 'C' || el === 'G' || el === 'T') {
    count++
  } else {
    count = 0
  }

  if (count > res) {
    res = count
  }
})

console.log(res)
