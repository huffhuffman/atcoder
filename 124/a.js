// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '3 4\n'

let [A,B] = stdin.split('\n')[0].split(' ').map(Number)

let coin = 0

for(let i = 0; i < 2; i++){
  if(A<B){
    coin += B
    B--
  }else {
    coin += A
    A--
  }
}


console.log(coin)