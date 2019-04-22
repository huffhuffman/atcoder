// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '0\n'

const S = stdin.split('\n')[0].split('').map(Number)

let blueCnt = redCnt = 0

S.forEach((e,i)=>{
  if(e === 1) blueCnt++
  if(e === 0) redCnt++
})

const min = Math.min(blueCnt, redCnt)

if(min === 0){
  console.log(0)
} else {
  console.log(min*2)
}