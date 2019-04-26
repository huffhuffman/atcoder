// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `2
3
5`

const [n, a, b] = stdin.split('\n')

if(n==='1'){
  console.log('Hello World')
} else {
  console.log(Number(a) + Number(b))
}