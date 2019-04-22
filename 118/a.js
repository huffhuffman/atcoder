// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `1 1`

const [a,b] = stdin.split('\n')[0].split(' ').map(Number)

let res = 0
if(b % a === 0){
  res = a+b
} else {
  res = b-a
}

console.log(res)