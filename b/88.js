// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `4
20 18 2 18`

const n = Number(stdin.split('\n')[0])

const A = stdin
  .split('\n')[1]
  .split(' ')
  .map(Number)

const sorted = A.sort((a,b)=>b-a)

const ans = _ => {
  let res = 0
  for (let i = 0; i < sorted.length; i++) {
    if(i%2===0){
      res += sorted[i]
    } else {
      res -= sorted[i]
    }
  }
  return res
}

console.log(ans())
