const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')
 
const [n, ...xy] = stdin.split('\n')
const x_y = xy.map(e=>e.split(' '))
const x = x_y.map(e=>Number(e[0]))
const y = x_y.map(e=>e[1])
 
function getBCV(b){
  return b * 380000
}
 
let sum = 0
for (let i = 0; i < x.length; i++) {
  if(y[i] === 'JPY'){
    sum += x[i]
  } else {
    sum += getBCV(x[i])
  }
}
 
console.log(sum)