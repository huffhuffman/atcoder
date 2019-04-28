// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `3 5 4`

const [a, b, x] = stdin.split('\n')[0].split(' ').map(Number)

let res = 'YES'
if(x > a){
  res = x <= a+b ? 'YES' : 'NO'
} else if (x < a){
  res = 'NO'
}

console.log(res)