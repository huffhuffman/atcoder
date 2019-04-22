// const fs = require('fs')
// const stdin = fs.readFileSync('/dev/stdin', 'utf8')

const stdin = '2019/04/30'

const S = stdin.split('\n')[0]

const [y,m,d] = S.split('/').map(Number)

let res = ''

if(m > 4){
  res = 'TBD'
} else if(m === 4 && d === 31){
  res = 'TBD'
} else {
  res = 'Heisei'
}


console.log(res)