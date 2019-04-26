// const stdin = require('fs').readFileSync('/dev/stdin', 'utf8')

const stdin = `7`

const x = Number(stdin.split('\n')[0])

let res = 'NO'
switch (x) {
  case 3:
    res = 'YES'    
    break
  case 5:
    res = 'YES'
    break
  case 7:
    res = 'YES'
    break
}

console.log(res)