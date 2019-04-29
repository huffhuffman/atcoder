// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `12
8
25`

const [a, b, n] = stdin.split('\n').map(Number)

const res = _ => {
  let i = n
  while(1){
    if(i % a === 0 && i % b === 0){
      return i
    }
    i++
  }
}

console.log(res())
