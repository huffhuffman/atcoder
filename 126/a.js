// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `4 3
CABA`

const [n,k] = stdin.split('\n')[0].split(' ')
const s = stdin.split('\n')[1].split('')

const ans = _ => {
  return s.map((e,i)=>{
    if(i === k - 1){
      return e.toLocaleLowerCase()
    }
    return e
  })
}

console.log(ans().join(''))