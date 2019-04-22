// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '4\n9 5 6 8 4\n'

const input = stdin.split('\n')

const N = input[0]
const H = input[1].split(' ').map(Number)

let v = H[0]

const res = H.filter(h => {
  if(v <= h){
    v = h
    return true
  }
  return false
}).length

console.log(res)