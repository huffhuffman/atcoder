// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `25`

const d = Number(stdin.split('\n')[0])

let res = ''

if(d === 25){
  res = 'Christmas'
} else if(d === 24){
  res = 'Christmas Eve'
} else if(d === 23){
  res = 'Christmas Eve Eve'
}else if(d === 22){
  res = 'Christmas Eve Eve Eve'
}

console.log(res)