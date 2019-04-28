// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `999`

const i = stdin.split('\n')[0]

const n = Number(i)

let res = ''
if(n<1000){
  res = 'ABC'
} else {
  res = 'ABD'
}

console.log(res)